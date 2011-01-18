//
//  PagedScrollViewController.m
//  PagedScroll
//
//  Created by James Kassemi on 6/18/10.
//  Copyright NASA/Ideum 2010.
//

#import "PagedScrollViewController.h"
#import "AlertManager.h"

@implementation PagedScrollViewController

@synthesize currentPage;
@synthesize currentViewController;

- (void) dealloc
{
	[super dealloc];
	
	[_container release];
	[_scrollView release];
	[_pageControl release];
	[_dataSource release];
	[_viewControllers release];
}

- (id)initWithDelegate:(id <ViewControllerDataSource>) dataSource
{
	if(self = [super init])
	{
		_dataSource = dataSource;
		[_dataSource retain];
		
		_viewControllers = [NSMutableArray arrayWithObjects:[NSNull null], [NSNull null], [NSNull null], nil];
		[_viewControllers retain];
		
		currentPage = -1;
		currentIndex = 0;
	}

	return self;
}

- (void)loadView
{
	CGRect parentBounds = self.parentViewController.view.bounds;

	_container = [[UIView alloc] initWithFrame:parentBounds];
	_container.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
	
	_scrollView = [[UIScrollView alloc] initWithFrame:parentBounds];
	_scrollView.pagingEnabled = YES;
	_scrollView.showsVerticalScrollIndicator = _scrollView.showsHorizontalScrollIndicator = NO;
	_scrollView.delegate = self;
	
	_scrollView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;

	
	parentBounds = _container.bounds;
	_pageControl = [[UIPageControl alloc] initWithFrame:CGRectMake(parentBounds.origin.x, parentBounds.size.height - 45, parentBounds.size.width, 45)];
	_pageControl.backgroundColor = [UIColor clearColor];
	_pageControl.autoresizingMask = UIViewAutoresizingFlexibleTopMargin;
	//_pageControl.contentVerticalAlignment = UIViewContentModeTop;
	_pageControl.numberOfPages = [_dataSource pageCount];
	
	[_container addSubview:_scrollView];
	[_container addSubview:_pageControl];
	
	self.view = _container;
}

- (void)viewWillAppear:(BOOL)animated
{
	
	[super viewWillAppear:animated];
	
	if(currentPage == -1)
		[self setCurrentPage:0];
}

- (void)setCurrentPage:(NSUInteger)page
{
	NSUInteger pageCount = [_dataSource pageCount];
	
	_scrollView.contentSize = CGSizeMake(_scrollView.frame.size.width * pageCount, _scrollView.frame.size.height);

	// If the page isn't within our bounds, just gracefully get out of here.
	if(page < 0)
		return;
	
	if(page >= [_dataSource pageCount])
		return;
	
	if(currentPage == page)
		return;

	for(NSInteger i=0;i<2;i++){
		[_viewControllers replaceObjectAtIndex:i withObject:[NSNull null]];
	}
	
	currentPage = page;
	_pageControl.currentPage = page;
	
	for(UIViewController *vc in _viewControllers){
		if(vc != [NSNull null])
			[vc.view removeFromSuperview];
	}
	
    // If a requested index is [NSNull null] then replace it with a viewController instance.
	for (NSInteger i=-1; i<=1; i++) {
		if((page + i) < 0)
			continue;
		
		if((page + i) >= [_dataSource pageCount])
			continue;
		
		// Replace
		UIViewController *viewController = [_dataSource viewControllerForPage:(page + i)];
		[_viewControllers replaceObjectAtIndex:(i + 1) withObject:viewController];
		
		// Add it to the scroll view at the appropriate position
		viewController.view.frame = CGRectMake(_scrollView.frame.size.width * (page + i), 0, _scrollView.frame.size.width, _scrollView.frame.size.height);
		[_scrollView addSubview:viewController.view];
	}
	
	UIViewController *viewController = [_dataSource viewControllerForPage:page];	
	self.title = viewController.title;
	self.currentViewController = viewController;
}

/**
 * setCurrentPage will update the internal index, and ensures that the necessary controllers are loaded and
 * cached. However, if setCurrentPage is being called manually, and to a page that's already cached,
 * new frames will not be drawn. This function will ensure that the frame is within the correct bounds, or will
 * move it if necessary. */
- (void)alignScrollViewContentWithPageOffset
{
	[_scrollView setContentOffset:CGPointMake(_scrollView.frame.size.width * currentPage, 0)];
}

#pragma mark -
#pragma mark ScrollView delegate

- (void)scrollViewDidScroll:(UIScrollView *)scrollView
{
	[self setCurrentPage:roundf(_scrollView.contentOffset.x / _scrollView.frame.size.width)];
}


/*
// The designated initializer. Override to perform setup that is required before the view is loaded.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if ((self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil])) {
        // Custom initialization
    }
    return self;
}
*/

/*
// Implement loadView to create a view hierarchy programmatically, without using a nib.
- (void)loadView {
}
*/





/*
// Override to allow orientations other than the default portrait orientation.
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}
*/

- (void)didReceiveMemoryWarning {
	// Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
	
	// Release any cached data, images, etc that aren't in use.
}

- (void)viewDidUnload {
	// Release any retained subviews of the main view.
	// e.g. self.myOutlet = nil;
}

@end
