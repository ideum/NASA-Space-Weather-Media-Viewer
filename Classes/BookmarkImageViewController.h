#import <UIKit/UIKit.h>
#import "Bookmark.h"
#import "Three20/Three20.h"

@interface BookmarkImageViewController : TTPhotoViewController {
  Bookmark *bookmark;
}

- (id)initWithBookmarkPK:(NSString *)pk;

@end
