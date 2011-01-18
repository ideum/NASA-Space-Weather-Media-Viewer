#import <CoreData/CoreData.h>
#import <Foundation/Foundation.h>
#import "CoreData.h"

@interface Record : NSManagedObject {

}

@property(nonatomic,retain) NSNumber *serialId;
@property(nonatomic,retain) NSDate *createdAt;

+(NSArray *) all;
+(NSInteger) count;
+(NSArray *) byCreatedAtAscending:(BOOL)orderAscending;

-(void) save;
-(void) destroy;
-(void) onError:(NSError *)error;

@end
