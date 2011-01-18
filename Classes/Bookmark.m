//
//  Bookmark.m
//  SpaceWeatherViewer
//
//  Created by James Kassemi on 10/4/10.
//  Copyright 2010 NASA/Ideum.
//

#import "Bookmark.h"
#import "URLEncode.h"

@implementation Bookmark
@dynamic createdAt;
@dynamic asset;
@dynamic test;

- (NSString *)documentsDirectory {
  NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
  return [paths objectAtIndex:0];
}

- (NSString*)path {
  return [[[self documentsDirectory] stringByAppendingPathComponent:self.pk] stringByAppendingPathExtension:@"jpg"];
}

- (BOOL)pathExists {
  return [[NSFileManager defaultManager] fileExistsAtPath:[self path]];
}

- (NSString*)url {
  return URLCONSTRUCT(@"documents://", [self.pk stringByAppendingPathExtension:@"jpg"], nil); 
}

- (void)setTitle:(NSString *)newTitle {
  return;
}

- (NSString*)title {
  NSString *dateRep = [self.createdAt descriptionWithLocale:[NSLocale currentLocale]];
  return [[self.asset.title stringByAppendingString:@"\n"] stringByAppendingString:dateRep];
}

-(BOOL)save {


  [super save];
	
	if([self.asset isImage]){
		NSError *error;
		
		if(![self.asset writeVersion:TTPhotoVersionLarge toFile:[self path] error:&error]){
			[AlertManager handleError:@"Please wait for the image to finish loading..." withError:error];
			[error release];
			return NO;
		}
	}
	return YES;
}

- (void)prepareForDeletion {
  if([self pathExists]){
    NSError *error;
    if(![[NSFileManager defaultManager] removeItemAtPath:[self path] error:&error]){
      [AlertManager handleError:@"Failed to remove bookmark data!" withError:error];
      [error release];
    }
  }
}

//////////////////////////////////////////////////////////////////////////

#pragma mark -
#pragma mark <TTPhoto>

// Methods

- (NSString *) URLForVersion:(TTPhotoVersion)version
{
  if (version == TTPhotoVersionLarge) {
          return [self url];
  } else if (version == TTPhotoVersionMedium) {
          return [self url];
  } else if (version == TTPhotoVersionSmall) {
          return self.asset.thumbnailSource;
  } else if (version == TTPhotoVersionThumbnail) {
          return self.asset.thumbnailSource;
  } else {
          return nil;
  }
}

// Properties

- (id <TTPhotoSource>) photoSource {
	return nil;
}

- (CGSize) size {
	return CGSizeMake(1024, 1024);
}

- (NSInteger) index {
	return NSIntegerMax;
}

- (NSString *) caption {
	return [self title];
}

- (void) setPhotoSource:(id <TTPhotoSource>)photoSource {}
- (void) setSize:(CGSize)newSize { }
- (void) setIndex:(NSInteger)newIndex {}
- (void) setCaption:(NSString *)newCaption { }

//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// An asset can act as an individual photo source

#pragma mark -
#pragma mark <TTPhotoSource>

-(NSInteger) numberOfPhotos {
  return 1;
}


-(NSInteger) maxPhotoIndex {
  return 1;
}

-(id<TTPhoto>) photoAtIndex:(NSInteger)index {
  return self;
}

//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////

#pragma mark -
#pragma mark <TTModel>


- (NSMutableArray*)delegates {
	return nil;
}

- (BOOL)isLoaded {
	return YES;
}

- (BOOL)isLoading {
	return NO;
}

- (BOOL)isLoadingMore {
	return NO;
}

-(BOOL)isOutdated {
	return NO;
}

- (void)load:(TTURLRequestCachePolicy)cachePolicy more:(BOOL)more {
	
}

- (void)cancel {
	
}

- (void)invalidate:(BOOL)erase {
	
}

//////////////////////////////////////////////////////////////////////////
@end
