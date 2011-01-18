//
//  CategoryViewController.h
//  SpaceWeatherViewer
//
//  Created by James Kassemi on 7/5/10.
//  Copyright 2010 NASA/Ideum.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "Three20/Three20.h"
#import "Tab.h"

@interface CategoryTableViewController : TTTableViewController <UIScrollViewDelegate> {
  NSArray *_menuList;
  Tab *tab;
}

- (void)scrollViewDidScrollToTop:(UIScrollView *)scrollView;

@end
