#import <Foundation/Foundation.h>
#import "PagedScrollViewController.h"

typedef enum {
	ScrollViewModePaging,
	ScrollViewModeZooming,
} ScrollViewMode;

@interface ZoomPagedScrollViewController : PagedScrollViewController {
	ScrollViewMode _scrollViewMode;
	CGFloat pendingOffsetDelta;
	UIImageView *imageView;
}

- (void)setZoomingMode;
- (void)setPagingMode;
@end
