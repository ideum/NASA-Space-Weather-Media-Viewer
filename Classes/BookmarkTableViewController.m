#import "BookmarkTableViewController.h"
#import "BookmarkDataSource.h"
#import "Bookmark.h"
#import "URLEncode.h"
#import "Item.h"

@implementation BookmarkTableViewController

- (id)initWithNavigatorURL:(NSString*)url query:(NSDictionary*)query {
  if(self = [super init]){
    self.title = @"My Saved Content";
    self.variableHeightRows = YES;
  }

  return self;
}

- (void)viewWillAppear:(BOOL)animated {
  NSMutableArray *cells = [[NSMutableArray alloc] init];
  NSString *url;


  // First we clean up bookmarks:
  for(Bookmark *bookmark in [Bookmark all]){
    if([bookmark.asset isImage] && ![bookmark pathExists]){
      [bookmark destroy];
    }
  }

  NSArray *bookmarks = [Bookmark byCreatedAtAscending:NO];
  for(Bookmark *bookmark in bookmarks){
    if([bookmark.asset isImage]){
      url = URLCONSTRUCT(@"tt://bookmark", @"image", bookmark.pk, nil);
    }else{
      url = URLCONSTRUCT(@"tt://video", [bookmark.asset pk], nil);
    }

    Item *cell = [Item itemWithTitle:bookmark.asset.title caption:@"Interview with Bruce Willis" text:bookmark.asset.text timestamp:[NSDate date] imageURL:[bookmark.asset URLForVersion:TTPhotoVersionThumbnail] URL:url];
    [cells addObject:cell];
  } 

  self.dataSource = [BookmarkDataSource dataSourceWithArrays:@"", cells, nil];

  NSMutableArray *bookmarksCopy = [bookmarks mutableCopyWithZone:NULL];

  ((BookmarkDataSource *)self.dataSource).bookmarks = bookmarksCopy;

  [bookmarksCopy release];
  [cells release];

  [self editDone];

  [super viewWillAppear:animated];

  [super viewWillAppear:animated];
  self.navigationController.navigationBarHidden = NO; 
  [self.tabBarController setHidden:FALSE];

}

- (void)editStarting {
  UIBarButtonItem *rightBarButtonItem = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemDone target:self action:@selector(editDone)];
  self.navigationItem.rightBarButtonItem = rightBarButtonItem;
  [rightBarButtonItem release];

  [self setEditing:YES animated:YES];
}

- (void)editDone {
  UIBarButtonItem *rightBarButtonItem = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemEdit target:self action:@selector(editStarting)];
  self.navigationItem.rightBarButtonItem = rightBarButtonItem;
  [rightBarButtonItem release];

  [self setEditing:NO animated:YES];
}

- (void)model:(id<TTModel>)model didDeleteObject:(id)object atIndexPath:(NSIndexPath*)indexPath {
  [super model:model didDeleteObject:object atIndexPath:indexPath];
}



- (void)dealloc {
    [super dealloc];
}

@end
