#import <UIKit/UIKit.h>
#import "SegmentedNavigationController.h"

@interface TTSegmentedNavigationController : SegmentedNavigationController {
}

- (UIViewController*)rootControllerForController:(UIViewController*)controller;
- (void)setTabURLs:(NSArray*)URLs;

@end
