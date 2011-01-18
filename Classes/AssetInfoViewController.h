#import <UIKit/UIKit.h>
#import "Asset.h"
#import "Bookmark.h"
#import "SHK.h"
#import "Three20/Three20.h"
#import "RichContentViewController.h"

@interface AssetInfoViewController : RichContentViewController {
  Asset					*asset;
  Bookmark				*bookmark;

}

@property(nonatomic,retain) Asset *asset;

@end
