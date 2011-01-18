//
//  SegmentedNavigationController.h
//  SpaceWeatherViewer
//
//  Created by James Kassemi on 6/25/10.
//  Copyright 2010 NASA/Ideum.
//

#import <UIKit/UIKit.h>

void recursivelyAdjustControlStyles(UIView *view);

@interface SegmentedNavigationController : UITabBarController {
  UISegmentedControl							*segmentedControl;
  NSMutableArray* displayedViewControllers;
}

- (void)setHidden:(BOOL)value;
	
@property (assign,nonatomic) UISegmentedControl *segmentedControl;
@end
