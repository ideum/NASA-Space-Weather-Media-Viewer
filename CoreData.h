#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface CoreData : NSObject {
	NSPersistentStoreCoordinator *persistentStoreCoordinator;

@private
    NSManagedObjectContext *managedObjectContext_;
    NSManagedObjectModel *managedObjectModel_;
    NSPersistentStoreCoordinator *persistentStoreCoordinator_;
}

@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (void)populate;
+ (CoreData*)sharedCoreData;
- (NSString*)applicationDocumentsDirectory;
@end
