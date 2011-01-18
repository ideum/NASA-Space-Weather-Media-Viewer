#import "AssetListTableViewController.h"
#import "Asset.h"
#import "Item.h"
#import "SegmentedNavigationController.h"
#import "SpaceWeatherViewerAppDelegate.h"
#import "CoreData.h"
#import "URLEncode.h"
#import "SectionedDataSource.h"

@implementation AssetListTableViewController

@synthesize category, tab;

- (id)initWithTabPK:(NSString *)tabPK andCategoryPK:(NSString *)categoryPK {
  if(self = [super init]){
    tab = [[Tab get:tabPK] retain];
    category = [[Category get:categoryPK] retain];

    self.title = category.title;
    self.variableHeightRows = YES;

    NSMutableArray *cells = [[NSMutableArray alloc] init];
    for(Asset *asset in [category sortedAssets]){
      NSString *url;

		if([asset isImage]){
        url = URLCONSTRUCT(@"tt://image", [asset pk], nil);
      }else if([asset isVideo]){
        url = URLCONSTRUCT(@"tt://video", [asset pk], nil);
      }else{
        continue;
      }

      Item *cell = [Item itemWithTitle:asset.title caption:@"Interview with Bruce Willis" text:asset.text timestamp:[NSDate date] imageURL:[asset URLForVersion:TTPhotoVersionThumbnail] URL:url];
      [cells addObject:cell];
    }

    self.dataSource = [SectionedDataSource dataSourceWithArrays:@"", cells, nil];
    [cells release];
  }

  return self;
}


- (void)viewWillAppear:(BOOL)animated {

  [super viewWillAppear:animated];
  self.navigationController.navigationBarHidden = NO; 
  [(SegmentedNavigationController*)self.tabBarController setHidden:FALSE];
	
}


- (void)dealloc {
  [tab release];
  [category release];
  [super dealloc];
}


@end

