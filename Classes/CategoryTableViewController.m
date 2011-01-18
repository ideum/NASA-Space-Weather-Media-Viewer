//
//  CategoryViewController.m
//  SpaceWeatherViewer
//
//  Created by James Kassemi on 7/5/10.
//  Copyright 2010 NASA/Ideum.
//

#import "CategoryTableViewController.h"
#import "AssetListTableViewController.h"
#import "CoreData.h"
#import "AlertManager.h"
#import "Category.h"
#import "Three20/Three20.h"
#import "URLEncode.h"

@implementation CategoryTableViewController

#pragma mark -
#pragma mark Initialization

- (id)initWithTabPK:(NSString *)pk {
  if(self = [super init]){
    tab = [[Tab get:pk] retain];

    self.title = tab.name;
    self.variableHeightRows = YES;
    _menuList = [[tab sortedCategories] retain];

    NSMutableArray *cells = [[NSMutableArray alloc] init];
    for(Category *category in _menuList){
      TTTableImageItem *cell = [TTTableImageItem itemWithText:category.title 
        imageURL: [[[category sortedAssets] objectAtIndex:0] URLForVersion:TTPhotoVersionSmall]
        URL: URLCONSTRUCT(@"tt://tabs", pk, @"categories", category.pk, @"assets", nil)
      ];

      [cells addObject:cell];
    }

    self.dataSource = [TTSectionedDataSource dataSourceWithArrays:@"", cells, nil];
    [cells release];
  }

  return self;
}

- (void)viewDidLoad {
  [super viewDidLoad];

  UIImageView *header = [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"space-weather-media-viewer.png"]];
  self.navigationItem.titleView = header;
  [header release];  
}

- (void)scrollViewDidScrollToTop:(UIScrollView *)scrollView {
  [[TTNavigator navigator] reload];
}

/*
- (void)willRotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation duration:(NSTimeInterval)duration {
  
}
*/

- (void)viewDidUnload {
  [super viewDidUnload];
}


- (void)dealloc {
    [tab release];
    [_menuList release];
    [super dealloc];
}


@end

