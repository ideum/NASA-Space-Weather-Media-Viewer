#import <UIKit/UIKit.h>
#import "Asset.h"
#import "Bookmark.h"
#import "Three20/Three20.h"

@interface AssetImageViewController : TTPhotoViewController {
  Asset *asset;
  Bookmark *bookmark;
  NSTimer *captionUpdateTimer;
}

- (void)updateCaption:(NSTimer *)timer;

@end
