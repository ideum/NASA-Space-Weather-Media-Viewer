#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "CoreData.h"
#import "PKRecord.h"

@interface Mission : PKRecord {

}

@property(nonatomic,retain) NSString *title;
@property(nonatomic,retain) NSString *headline;
@property(nonatomic,retain) NSString *text;
@property(nonatomic,retain) NSString *thumbnail;
@property(nonatomic,retain) NSString *url;
@property(nonatomic,retain) NSString *image;
@property(nonatomic,retain) NSString *imageUrl;

@end
