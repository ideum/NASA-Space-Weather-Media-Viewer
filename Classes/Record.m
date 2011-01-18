//
//  Record.m
//  SpaceWeatherViewer
//
//  Created by James Kassemi on 9/28/10.
//  Copyright 2010 NASA/Ideum.
//

#import "CoreData.h"
#import "Record.h"
#import "AlertManager.h"

static int sessionInsertCount = 0;

@implementation Record
@dynamic serialId;
@dynamic createdAt;

+(NSArray *) all {
  NSError *error;

  [CoreData sharedCoreData];
  NSManagedObjectContext *context = [[CoreData sharedCoreData] managedObjectContext];

  NSFetchRequest *fetchRequest = [[NSFetchRequest alloc] init];
  NSEntityDescription *entityDescription = [NSEntityDescription entityForName:NSStringFromClass(self) inManagedObjectContext:context];

  [fetchRequest setEntity:entityDescription];
  NSArray *results = [context executeFetchRequest:fetchRequest error:&error];
  [fetchRequest release];
  return results;
}

+(NSArray *) byCreatedAtAscending:(BOOL)orderAscending {
  NSError *error;

  [CoreData sharedCoreData];
  NSManagedObjectContext *context = [[CoreData sharedCoreData] managedObjectContext];

  NSFetchRequest *fetchRequest = [[NSFetchRequest alloc] init];
  NSEntityDescription *entityDescription = [NSEntityDescription entityForName:NSStringFromClass(self) inManagedObjectContext:context];
  NSSortDescriptor *createdAtDesc = [[NSSortDescriptor alloc] initWithKey:@"createdAt" ascending:orderAscending];
  
  [fetchRequest setSortDescriptors:[NSArray arrayWithObject:createdAtDesc]];
  [fetchRequest setEntity:entityDescription];
  [createdAtDesc release];

  NSArray *results = [context executeFetchRequest:fetchRequest error:&error];
  [fetchRequest release];
  return results;
  
}

+(NSInteger) count {
  return [[self all] count];
}

- (void) awakeFromInsert {
  [super awakeFromInsert];

  if([self.serialId intValue] == 0){
    self.serialId = [NSNumber numberWithInteger:sessionInsertCount];
    sessionInsertCount++;
  }
}

- (void) willSave {
  [super willSave];

  if(!self.createdAt){
    self.createdAt = [NSDate date];
  }
}  

-(void) save {
  NSError *error;

  if(![[self managedObjectContext] save:&error]){
    [AlertManager handleError:@"Failed to save record" withError:error];
    [self onError:error];
  }
}

-(void)destroy {
  [[[CoreData sharedCoreData] managedObjectContext] deleteObject:self];

  NSError *error;

  if(![[self managedObjectContext] save:&error]){
    [AlertManager handleError:@"Failed to save record" withError:error];
    [self onError:error];
  }
}

-(void) onError:(NSError *)error {


}

@end
