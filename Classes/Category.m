//
//  Category.m
//  SpaceWeatherViewer
//
//  Created by James Kassemi on 8/10/10.
//  Copyright 2010 NASA/Ideum.
//

#import "Category.h"
#import "AlertManager.h"

@implementation Category

@dynamic headline;
@dynamic title;
@dynamic assets;

+(NSArray *) fetchCategoriesByTab:(NSString *)tab
{
  NSError *error;
  NSFetchRequest *fetchCategoriesByTab = [[[CoreData sharedCoreData] managedObjectModel] fetchRequestFromTemplateWithName:@"categoriesByTab" substitutionVariables:[NSDictionary dictionaryWithObject:tab forKey:@"tab"]];
  NSManagedObjectContext *context = [[CoreData sharedCoreData] managedObjectContext];
  return [context executeFetchRequest:fetchCategoriesByTab error:&error];
}

+(Category *) fetchCategoryByTitle:(NSString *)title {
  NSError *error;
  NSFetchRequest *fetchCategoriesByTitle = [[[CoreData sharedCoreData] managedObjectModel] fetchRequestFromTemplateWithName:@"categoriesByTitle" substitutionVariables:[NSDictionary dictionaryWithObject:title forKey:@"title"]];
  NSManagedObjectContext *context = [[CoreData sharedCoreData] managedObjectContext];
  return (Category *) [[context executeFetchRequest:fetchCategoriesByTitle error:&error] objectAtIndex:0];
}

-(NSArray *) sortedAssets {
  NSSortDescriptor *createdAtSort = [[[NSSortDescriptor alloc] initWithKey:@"serialId" ascending:YES selector:@selector(compare:)] autorelease];
  NSArray *sortDescriptors = [[[NSArray alloc] initWithObjects:createdAtSort, nil] autorelease];
  return [[self.assets allObjects] sortedArrayUsingDescriptors:sortDescriptors];
}

-(void) save
{
	NSError *error;
	if(![[self managedObjectContext] save:&error]){
		[AlertManager handleError:@"Failed to update image"
						withError:error];
		[error release];
	}
}

//////////////////////////////////////////////////////////////////////////

#pragma mark -
#pragma mark <TTPhotoSource>

-(NSInteger) numberOfPhotos {
	return [self.assets count];
}


-(NSInteger) maxPhotoIndex {
	return [self.assets count];
}

-(id<TTPhoto>) photoAtIndex:(NSInteger)index {
	return [[self.assets allObjects] objectAtIndex:index];
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

-(void) dealloc {
	[super dealloc];
}

@end
