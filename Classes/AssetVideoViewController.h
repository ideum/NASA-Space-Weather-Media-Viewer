#import <MediaPlayer/MediaPlayer.h>
#import <UIKit/UIKit.h>
#import "Asset.h"

@interface AssetVideoViewController : TTViewController {
  Asset *asset;
  MPMoviePlayerController *moviePlayer;
  UIBarButtonItem *bookmarkButton;
  UIActivityIndicatorView *spinner;
}

- (void) movieLoadStateDidChange:(NSNotification*)notification;
- (void)spinnerVisible:(BOOL)visible;

@end
