//
//  ZoomPagedScrollViewController.m
//  PagedScroll
//
//  Created by James Kassemi on 6/21/10.
//  Copyright 2010 NASA/Ideum
//

#import "ZoomPagedScrollViewController.h"

@interface ZoomPagedScrollViewController () <UIScrollViewDelegate>

@end

@implementation ZoomPagedScrollViewController
- (id)initWithDelegate:(id <ViewControllerDataSource>) dataSource
{
	if(self = [super initWithDelegate:dataSource])
	{
		_scrollViewMode = ScrollViewModePaging;
	}


	return self;
}

- (void)viewDidLoad
{
	_scrollView.maximumZoomScale = 10.0f;
	_scrollView.minimumZoomScale = 1.0f;

	
	[super viewDidLoad];
}

- (void)setPagingMode 
{
	_scrollViewMode = ScrollViewModePaging;
	_scrollView.pagingEnabled = YES;
	_scrollView.showsVerticalScrollIndicator = _scrollView.showsHorizontalScrollIndicator = NO;
	_scrollView.contentSize = CGSizeMake(_scrollView.frame.size.width * [_dataSource pageCount], _scrollView.frame.size.height);
	_scrollView.delegate = self;
	
	[self setCurrentPage:currentPage];
}

- (void)setZoomingMode
{
	_scrollViewMode = ScrollViewModeZooming;
	currentViewController = [_dataSource viewControllerForPage:currentPage];
	
	
	for(UIViewController *vc in _viewControllers){
		if((NSNull *) vc != [NSNull null] && vc != currentViewController)
			[vc.view removeFromSuperview];
	}
	
	// Drop all existing controllers.
	for(NSInteger i=0;i<2;i++){
		[_viewControllers replaceObjectAtIndex:i withObject:[NSNull null]];
	}

	_scrollView.pagingEnabled = NO;
	_scrollView.bouncesZoom = YES;
	_scrollView.showsVerticalScrollIndicator = _scrollView.showsHorizontalScrollIndicator = YES;
										 
	pendingOffsetDelta = _scrollView.contentOffset.x;
}

- (UIView *)viewForZoomingInScrollView:(UIScrollView *)scrollView {
	//return imageView;
	if (_scrollViewMode != ScrollViewModeZooming)
		[self setZoomingMode];	
	
	return currentViewController.view;	
}

- (void)scrollViewDidEndZooming:(UIScrollView *)aScrollView withView:(UIView *)view atScale:(float)scale {
	if (_scrollView.zoomScale == _scrollView.minimumZoomScale)
		[self setPagingMode];
	else if (pendingOffsetDelta > 0) {
		UIView *view = [_dataSource viewControllerForPage:currentPage].view;
		view.center = CGPointMake(view.center.x - pendingOffsetDelta, view.center.y);
		_scrollView.contentOffset = CGPointMake(_scrollView.contentOffset.x - pendingOffsetDelta, _scrollView.contentOffset.y);
		_scrollView.contentSize = CGSizeMake(_scrollView.frame.size.width * _scrollView.zoomScale, _scrollView.frame.size.height * _scrollView.zoomScale);
		pendingOffsetDelta = 0;
	}
	/*
	
	
	else if (pendingOffsetDelta > 0) {
		UIView *view = [_dataSource viewControllerForPage:_currentPage].view;
		view.center = CGPointMake(view.center.x - pendingOffsetDelta, view.center.y);
		//_scrollView.contentOffset = CGPointMake(_scrollView.contentOffset.x - pendingOffsetDelta, _scrollView.contentOffset.y);
		//scrollView.contentSize = CGSizeMake(pageSize.width * scrollView.zoomScale, pageSize.height * scrollView.zoomScale);
		pendingOffsetDelta = 0;
	}*/
	
}

- (void)scrollViewDidScroll:(UIScrollView *)scrollView
{
	if(_scrollViewMode == ScrollViewModePaging)
		[super scrollViewDidScroll:scrollView];

}
 

@end
