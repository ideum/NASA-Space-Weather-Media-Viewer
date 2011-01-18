#import "WebController.h"
#import "Three20/Three20.h"
#import "SegmentedNavigationController.h"

@implementation WebController 

- (void)viewWillAppear:(BOOL)animated {
  [(SegmentedNavigationController *)self.tabBarController setHidden:TRUE];
  [super viewWillAppear:animated];
}

- (void)viewWillDisappear:(BOOL)animated {
  [(SegmentedNavigationController *)self.tabBarController setHidden:FALSE];
  [super viewWillAppear:animated];
}

@end
