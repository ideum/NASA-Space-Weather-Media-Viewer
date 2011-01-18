#import "PKRecord.h"
#import "CoreData.h"
#import "AlertManager.h"

@implementation PKRecord

@dynamic pk;

+ (PKRecord *) get:(NSString *)pk {
  NSError *error;
  NSArray *results;

  [[CoreData sharedCoreData] managedObjectModel];
  NSManagedObjectContext *context = [[CoreData sharedCoreData] managedObjectContext];
  NSPredicate *predicate = [NSPredicate predicateWithFormat:@"pk = %@", pk];
  NSFetchRequest *query = [[NSFetchRequest alloc] init];
  NSEntityDescription *entity = [NSEntityDescription entityForName:NSStringFromClass(self) inManagedObjectContext:context];

  [query setEntity:entity];
  [query setPredicate:predicate];
  
  if(!(results = [context executeFetchRequest:query error:&error])){
    [AlertManager handleError:@"Failed to fetch record" withError:error];
  }

  [query release];

  if([results count] == 0){
    return nil;
  }else{
    return [results objectAtIndex:0];
  }

}

- (void) willSave {
  if(!self.pk){
    [self createPk];
  }

  [super willSave];
}

- (void) createPk {
  CFUUIDRef uuidObj = CFUUIDCreate(nil);
  self.pk = [(NSString *) CFUUIDCreateString(nil, uuidObj) autorelease];
  CFRelease(uuidObj);
}

@end
