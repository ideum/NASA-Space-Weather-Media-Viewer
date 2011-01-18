#import "Tab.h"


@implementation Tab

@dynamic name;
@dynamic categories;

+(Tab *) fetchTabByName:(NSString *)name {
  NSError *error;
  NSFetchRequest *fetchTabByName = [[[CoreData sharedCoreData] managedObjectModel] fetchRequestFromTemplateWithName:@"tabsByName" substitutionVariables:[NSDictionary dictionaryWithObject:name forKey:@"name"]];
  NSManagedObjectContext *context = [[CoreData sharedCoreData] managedObjectContext];
  return (Tab *) [[context executeFetchRequest:fetchTabByName error:&error] objectAtIndex:0];
}

-(NSArray *) sortedCategories {
  NSSortDescriptor *serialSort = [[[NSSortDescriptor alloc] initWithKey:@"serialId" ascending:YES selector:@selector(compare:)] autorelease];
  NSArray *sortDescriptors = [[[NSArray alloc] initWithObjects:serialSort, nil] autorelease];
  return [[self.categories allObjects] sortedArrayUsingDescriptors:sortDescriptors];
}

@end

