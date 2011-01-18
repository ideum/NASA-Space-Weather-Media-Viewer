//
//  PagedScrollViewController.h
//  PagedScroll
//
//  Created by James Kassemi on 6/18/10.
//  Copyright Ideum 2010.
//

#import <UIKit/UIKit.h>


@protocol ViewControllerDataSource 
- (UIViewController *)viewControllerForPage:(NSUInteger) page;
- (NSInteger) pageCount;

- (void)retain;
- (void)release;
@end

@interface PagedScrollViewController : UIViewController <UIScrollViewDelegate> {
	id <ViewControllerDataSource>	_dataSource;
	NSMutableArray					*_viewControllers;
	UIScrollView					*_scrollView;
	UIPageControl					*_pageControl;
	UIView							*_container;
	NSUInteger						currentPage;
	NSUInteger						currentIndex;
	UIViewController				*currentViewController;
}

@property (assign,nonatomic) NSUInteger currentPage;
@property (assign,nonatomic) UIViewController *currentViewController;

- (id)initWithDelegate:(id <ViewControllerDataSource>) dataSource;
- (void)alignScrollViewContentWithPageOffset;

#pragma mark -
- (void)redrawPageBoundaries;

@end
