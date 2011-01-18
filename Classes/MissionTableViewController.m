#import "MissionTableViewController.h"
#import "CoreData.h"
#import "AlertManager.h"
#import "Mission.h"
#import "Three20/Three20.h"
#import "URLEncode.h"

@implementation MissionTableViewController

#pragma mark -
#pragma mark Initialization

- (id)initWithNavigatorURL:(NSString*)url query:(NSDictionary*)query {
  if(self = [super init]){
    self.title = @"Missions";
    self.variableHeightRows = YES;
    
    NSArray *missions = [Mission all];
    NSMutableArray *cells = [[NSMutableArray alloc] init];
    for(Mission *mission in missions){
      TTTableImageItem *cell = [TTTableImageItem itemWithText:mission.title imageURL:mission.thumbnail URL: URLCONSTRUCT(@"tt://mission", mission.pk, nil)];
      [cells addObject:cell];
    }

    self.dataSource = [TTSectionedDataSource dataSourceWithArrays:@"", cells, nil];
    [cells release];
  }

   
  return self;
}

@end

