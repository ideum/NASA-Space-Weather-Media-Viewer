#import "MainNavigationController.h"
#import "Tab.h"
#import "URLEncode.h"
#import "Three20/Three20.h"
#import "SegmentedNavigationController.h"

@implementation MainNavigationController

- (void)viewDidLoad {
  NSArray *tabs = [Tab all];
  urls = [[NSMutableArray alloc] init];
  
  for(Tab *tab in tabs){
    [urls addObject:URLCONSTRUCT(@"tt://tabs", tab.pk, @"categories", nil)];
  }

  [urls addObject:@"tt://tabs/more"];

  [self setTabURLs:urls];
  [super viewDidLoad];
}

// Overridden version of UITabBarControllerAdditions. This one sets our default to the hidden home controller.
- (void)setTabURLs:(NSArray*)URLs {
  NSMutableArray* controllers = [NSMutableArray array];
  UIViewController* defaultViewController = nil;
  for (NSString* URL in URLs) {
    UIViewController* controller = [[TTNavigator navigator] viewControllerForURL:URL];
    if (controller) {
      UIViewController* tabController = [self rootControllerForController:controller];
      [controllers addObject:tabController];

      if(!defaultViewController){
        defaultViewController = tabController;
      }
    }

  }

  self.viewControllers = controllers;

  if(defaultViewController){
    self.selectedViewController = defaultViewController;
  }
}

- (void)selectedSegmentItem:(UISegmentedControl *) tabControl {
  recursivelyAdjustControlStyles(segmentedControl);
  [self setSelectedViewController:[displayedViewControllers objectAtIndex:[tabControl selectedSegmentIndex]]];
  self.tabBar.hidden = YES;
  
}

- (void)viewDidUnload {
  [urls release];
  [super viewDidUnload];
}

@end
