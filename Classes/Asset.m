//
//  Asset.m
//  SpaceWeatherViewer
//
//  Created by James Kassemi on 8/10/10.
//  Copyright 2010 NASA/Ideum.
//

#import "Asset.h"
#import "Bookmark.h"
#import "CoreData.h"
#import "AlertManager.h"
#import "SHK.h"
#import "NSDate+HR.h"

@implementation Asset

#pragma mark - 
#pragma mark Synthesis
@dynamic title;
@dynamic headline;
@dynamic source;
@dynamic localSource;
@dynamic category;
@dynamic thumbnailSource;
@dynamic infoThumbnail;
@dynamic link;
@dynamic linkTitle;
@dynamic text;
@dynamic transcripts;
@dynamic updatedAt;
@dynamic home;
@dynamic bookmarks;

+(Asset *) fetchHomePageAsset {
  NSError *error;
  NSFetchRequest *fetchAll = [[[CoreData sharedCoreData] managedObjectModel] fetchRequestTemplateForName:@"fetchAll"];
  NSManagedObjectContext *context = [[CoreData sharedCoreData] managedObjectContext];
  NSArray *results = [context executeFetchRequest:fetchAll error:&error];
	
  NSSortDescriptor *createdAtSort = [[[NSSortDescriptor alloc] initWithKey:@"serialId" ascending:YES selector:@selector(compare:)] autorelease];
  NSArray *sortDescriptors = [[[NSArray alloc] initWithObjects:createdAtSort, nil] autorelease];
	return ((Asset *) [[results sortedArrayUsingDescriptors:sortDescriptors] objectAtIndex:0]);
}


#pragma mark -
#pragma mark Convenience
- (NSString *)documentsDirectory {
	NSArray *paths = NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES);
	return [paths objectAtIndex:0];
}

- (NSString *)cachedImageFilePath {
	return [[[self documentsDirectory] stringByAppendingPathComponent:self.localSource] stringByAppendingPathExtension:@"jpg"];
}

- (NSString *)imageFileUrl {
	return [@"tt://" stringByAppendingString:self.localSource];
}

- (bool)writeVersion:(TTPhotoVersion)photoVersion toFile:(NSString *)path error:(NSError **)errorPtr {
  NSData *imageData = [[TTURLCache sharedCache] dataForURL:[self URLForVersion:photoVersion]]; 
  if(imageData){
    return [imageData writeToFile:path options:NSDataWritingFileProtectionNone error:errorPtr];
  }else{
    NSDictionary *userInfo = [NSDictionary dictionaryWithObject:@"No data yet..." forKey:NSLocalizedDescriptionKey];
    NSError *newError = [[NSError errorWithDomain:@"com.ideum.swmv" code:10 userInfo:userInfo] retain];
    *errorPtr = newError;
    return NO;
  }
}

- (BOOL) isBookmarked {
  return ([self.bookmarks count] > 0);
}

- (Boolean) isImage
{
  NSString *extension = [[self.source pathExtension] lowercaseString];
  return [extension isEqualToString:@"jpg"] || [extension isEqualToString:@"gif"];	
}

- (Boolean) isVideo
{
  NSString *extension = [[self.source pathExtension] lowercaseString];
  return ([extension isEqualToString:@"mp4"] || [extension isEqualToString:@"mov"]);
}

- (NSString *) videoFilePath
{
  NSLog(@"Attempting to load %@", [self localSource]);
  return [[NSBundle mainBundle] pathForResource:[self localSource] ofType:@"mp4"];
}

- (void)shareFromToolbar:(UIToolbar *)toolbar {
  if(![self isImage]){
    return;
  }

  SHKItem *item = [[[SHKItem alloc] init] autorelease]; 
  item.shareType = SHKShareTypeURL;
  item.title = [self headline];
  NSData *imageData = [[TTURLCache sharedCache] dataForURL:[self URLForVersion:TTPhotoVersionLarge]];
  item.image = [UIImage imageWithData:imageData];

  [item setCustomValue:@"Check out more near-realtime images of the Sun using NASA's Space Weather Media Viewer" forKey:@"description"];
  [item setCustomValue:[self URLForVersion:TTPhotoVersionLarge] forKey:@"imageURL"];

  [item setCustomValue:[@"I'm observing the Sun on my iPhone - " stringByAppendingString:[self title]] forKey:@"tweetText"];
  [item setCustomValue:@"y" forKey:@"tweetImage"];

  [item setCustomValue:@"Today's Image of the Sun!" forKey:@"emailTitle"];
  
  NSString *emailText = @"I'm observing the Sun on my iPhone. This image is from:<br/><br/>";
  emailText = [emailText stringByAppendingString:self.headline];
  emailText = [emailText stringByAppendingString:@"<br/><br/>Check out more near-realtime images of the Sun using NASA's Space Weather Media Viewer:<br/>"];
  emailText = [emailText stringByAppendingString:@"<a href=\"http://sunearthday.nasa.gov/spaceweather/\">http://sunearthday.nasa.gov/spaceweather/</a>"];

  [item setCustomValue:emailText forKey:@"emailText"];

  item.URL = [NSURL URLWithString:@"http://sunearthday.nasa.gov/spaceweather/"];

  SHKActionSheet *actionSheet = [SHKActionSheet actionSheetForItem:item];
  [actionSheet showFromToolbar:toolbar];
}

- (void)bookmark {
  NSManagedObjectContext *context = [[CoreData sharedCoreData] managedObjectContext];

  Bookmark *bookmark = [[NSEntityDescription insertNewObjectForEntityForName:@"Bookmark" inManagedObjectContext:context] retain];
  bookmark.asset = self;
	if([bookmark save]){

  UIAlertView *alertView = [[UIAlertView alloc] initWithTitle: @"Content Saved"
                                                    message: @"View your saved items through \"My Saved Content\" in the \"More\" tab"
                                                    delegate:nil
                                                    cancelButtonTitle: @"OK"
                                                    otherButtonTitles:nil];
		[alertView show];
		[alertView release];
	}

}

//////////////////////////////////////////////////////////////////////////

#pragma mark -
#pragma mark <TTPhoto>

// Methods

- (NSString *) URLForVersion:(TTPhotoVersion)version
{
	if (version == TTPhotoVersionLarge) {
		return self.source;
	} else if (version == TTPhotoVersionMedium) {
		return self.source;
	} else if (version == TTPhotoVersionSmall) {
		return self.thumbnailSource;
	} else if (version == TTPhotoVersionThumbnail) {
		return self.thumbnailSource;
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
  NSString *v = [self primitiveValueForKey:@"title"];

  if(self.updatedAt){
    NSString *dateRep = [self.updatedAt distanceOfTimeInWords];
    return [[v stringByAppendingString:@"\nUpdated "] stringByAppendingString:dateRep];
  }else{
    return v;
  }
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

#pragma mark -
#pragma mark Dealloc

-(void) dealloc 
{
	[super dealloc];
}
@end
