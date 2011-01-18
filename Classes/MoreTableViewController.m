#import "MoreTableViewController.h"
#import "URLEncode.h"

@implementation MoreTableViewController

- (id)initWithNavigatorURL:(NSString*)url query:(NSDictionary*)query {
  if(self = [super init]){
    self.variableHeightRows = YES;
    self.title = @"More";
	  
    self.dataSource = [TTSectionedDataSource dataSourceWithObjects:
      @"", 
      [TTTableImageItem itemWithText:@"My Saved Content" imageURL:nil URL:@"tt://tabs/more/bookmarks"],
      [TTTableImageItem itemWithText:@"NASA Missions" imageURL:nil URL:@"tt://tabs/more/missions"],
      [TTTableImageItem itemWithText:@"About" imageURL:nil URL:@"tt://tabs/more/about"],
      nil];
  }

  return self;
}

- (void)viewDidLoad {
  [super viewDidLoad];

  UIImageView *header = [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"space-weather-media-viewer.png"]];
  self.navigationItem.titleView = header;
  [header release];  
}


@end
