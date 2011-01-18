//
//  CoreData.m
//  SpaceWeatherViewer
//
//  Created by James Kassemi on 6/14/10.
//  Copyright 2010 NASA/Ideum
//

#import "CoreData.h"
#import "AlertManager.h"
#import "Asset.h"
#import "Tab.h"
#import "Record.h"
#import "Category.h"
#import "Mission.h"

static CoreData *singletonCoreData = nil;

@implementation CoreData

@synthesize persistentStoreCoordinator;
@synthesize managedObjectModel;

+(CoreData*)sharedCoreData {
	@synchronized(self) {
		if (!singletonCoreData) {
			singletonCoreData = [[CoreData alloc] init];
		}
	}
	return singletonCoreData;
}

- (void)reset {
    [managedObjectContext_ release];
    [managedObjectModel_ release];
    [persistentStoreCoordinator_ release];

  managedObjectContext_ = nil;
  managedObjectModel_ = nil;
  persistentStoreCoordinator_ = nil;
}

#pragma mark -
#pragma mark Core Data stack

/**
 Returns the managed object context for the application.
 If the context doesn't already exist, it is created and bound to the persistent store coordinator for the application.
 */
- (NSManagedObjectContext *)managedObjectContext {
    
    if (managedObjectContext_ != nil) {
        return managedObjectContext_;
    }
    
    NSPersistentStoreCoordinator *coordinator = [self persistentStoreCoordinator];
    if (coordinator != nil) {
        managedObjectContext_ = [[NSManagedObjectContext alloc] init];
        [managedObjectContext_ setPersistentStoreCoordinator:coordinator];
    }
    return managedObjectContext_;
}


/**
 Returns the managed object model for the application.
 If the model doesn't already exist, it is created from the application's model.
 */
- (NSManagedObjectModel *)managedObjectModel {
    
    if (managedObjectModel_ != nil) {
        return managedObjectModel_;
    }

    NSBundle *bundle = [NSBundle mainBundle];
    NSString *modelPath = [bundle pathForResource: @"SpaceWeatherViewer" ofType:@"momd"];
    NSURL *modelURL = [NSURL fileURLWithPath: modelPath];
	
    managedObjectModel_ = [[NSManagedObjectModel alloc] initWithContentsOfURL:modelURL];	

/*
    NSArray *bundles = [NSArray arrayWithObject:[NSBundle mainBundle]];
    managedObjectModel_ = [NSManagedObjectModel mergedModelFromBundles:bundles];
*/
    return managedObjectModel_;
}


/**
 Returns the persistent store coordinator for the application.
 If the coordinator doesn't already exist, it is created and the application's store added to it.
 */
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator {
    
    if (persistentStoreCoordinator_ != nil) {
        return persistentStoreCoordinator_;
    }
    
    NSURL *storeURL = [NSURL fileURLWithPath: [[self applicationDocumentsDirectory] stringByAppendingPathComponent: @"SpaceWeatherViewer.sqlite"]];

    NSDictionary *options = [NSDictionary dictionaryWithObjectsAndKeys:
      [NSNumber numberWithBool:YES], NSMigratePersistentStoresAutomaticallyOption,
      [NSNumber numberWithBool:YES], NSInferMappingModelAutomaticallyOption, nil];
    

    NSError *error = nil;

    persistentStoreCoordinator_ = [[NSPersistentStoreCoordinator alloc] initWithManagedObjectModel:[self managedObjectModel]];
    if (![persistentStoreCoordinator_ addPersistentStoreWithType:NSSQLiteStoreType configuration:nil URL:storeURL options:options error:&error]) {
        NSLog(@"Unresolved error %@, %@", error, [error userInfo]);
        abort();
    }    
    
    return persistentStoreCoordinator_;
}


#pragma mark -
#pragma mark Application's Documents directory

/**
 Returns the path to the application's Documents directory.
 */
- (NSString *)applicationDocumentsDirectory {
    return [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject];
}

+ (void)populate
{	
        int dataVersionRequired = 2;

        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES); 
        NSString *documentsPath = [paths objectAtIndex:0]; 
        NSString *dataVersionPath = [documentsPath stringByAppendingPathComponent:@"dataversion.plist"];

        NSArray *dataVersions = [NSArray arrayWithContentsOfFile:dataVersionPath];

        if([Asset count] > 0 && [[dataVersions lastObject] intValue] == dataVersionRequired){ 
          return;
        }

        dataVersions = [NSArray arrayWithObjects:[NSNumber numberWithInt:dataVersionRequired], nil];
        [dataVersions writeToFile:dataVersionPath atomically:YES];

	NSError *error;

	// Seed all data we'll be using for now (since it's static).
	CoreData *coreData = [CoreData sharedCoreData];
        NSManagedObjectContext *context = [[CoreData sharedCoreData] managedObjectContext];

	// Delete all existing entries.
	NSArray *entities = [NSArray arrayWithObjects:@"Tab", @"Category", @"Asset", @"Mission", @"Bookmark", nil];

	for(NSString *entityName in entities){
          NSFetchRequest *fetchRequest = [[NSFetchRequest alloc] init];
          NSEntityDescription *entity = [NSEntityDescription entityForName:entityName inManagedObjectContext:context];
          
/*
          NSLog(@"Property names in %@", entityName);

          NSDictionary *properties = [entity propertiesByName];
          for(NSString *property in [properties allKeys]){
            NSLog(property);
          }
*/
          [fetchRequest setEntity:entity];
          NSArray *existingItems = [context executeFetchRequest:fetchRequest error:&error];
          for(NSManagedObject *item in existingItems){
                  [context deleteObject:item];
          }
          [fetchRequest release];
          [context save:&error];
	}
								   

	NSManagedObject *tab;
	NSManagedObject *category;
	NSManagedObject *asset;
	NSManagedObject *mission;

        /////////////////////////////////////////////////////////////////
        ///////// Live views

	tab = [NSEntityDescription insertNewObjectForEntityForName:@"Tab" inManagedObjectContext:context];
	[tab setValue:@"Live Views" forKey:@"name"];

        #include "Data/Includes/Images.h"

	if(![context save:&error]){
          [AlertManager handleError:@"Failed to initialize data 1!" withError:error];
          [error release];
	}

        /////////////////////////////////////////////////////////////////
        ///////// Visualizations

	tab = [NSEntityDescription insertNewObjectForEntityForName:@"Tab" inManagedObjectContext:context];
	[tab setValue:@"Visualizations" forKey:@"name"];
	
	#include "Data/Includes/Visualizations.h"

	if(![context save:&error]){
            [AlertManager handleError:@"Failed to initialize data 2!" withError:error];
            [error release];
	}

        /////////////////////////////////////////////////////////////////
        ///////// Videos

	tab = [NSEntityDescription insertNewObjectForEntityForName:@"Tab" inManagedObjectContext:context];
	[tab setValue:@"Videos" forKey:@"name"];

        #include "Data/Includes/Videos.h"

	if(![context save:&error]){
            [AlertManager handleError:@"Failed to initialize data 3!" withError:error];
            [error release];
	}

        /////////////////////////////////////////////////////////////////
        ///////// Missions

        #include "Data/Includes/Missions.h"

	if(![context save:&error]){
            [AlertManager handleError:@"Failed to initialize data 4!" withError:error];
            [error release];
	}

        
	[coreData reset];
}


- (void)dealloc
{
    [managedObjectContext_ release];
    [managedObjectModel_ release];
    [persistentStoreCoordinator_ release];
	
    [super dealloc];
}

@end
