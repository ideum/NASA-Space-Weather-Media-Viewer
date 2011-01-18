#import "AssetImageViewController.h"
#import "SegmentedNavigationController.h"
#import "URLEncode.h"
#import "SHK.h"

@implementation AssetImageViewController

- (id)initWithAssetPK:(NSString *)pk {
  if(self = [super init]){
    bookmark = nil;
    asset = [[Asset get:pk] retain];
  }

  return self;
}

- (id)initWithBookmarkPK:(NSString *)pk {
  if(self = [super init]){
    bookmark = [[Bookmark get:pk] retain];
    asset = [bookmark.asset retain];
  }

  return self;
}

- (void)loadView {
  self.photoSource = asset;
  self.photoSource.title = asset.title;


  CGRect screenFrame = [UIScreen mainScreen].bounds;
  self.view = [[[UIView alloc] initWithFrame:screenFrame] autorelease];
  
  CGRect innerFrame = CGRectMake(0, 0, screenFrame.size.width, screenFrame.size.height);

  _innerView = [[UIView alloc] initWithFrame:innerFrame];
  _innerView.autoresizingMask = UIViewAutoresizingFlexibleWidth|UIViewAutoresizingFlexibleHeight;
  [self.view addSubview:_innerView];
  
  _scrollView = [[TTScrollView alloc] initWithFrame:screenFrame];
  _scrollView.delegate = self;
  _scrollView.dataSource = self;
  _scrollView.backgroundColor = [UIColor blackColor];
  _scrollView.autoresizingMask = UIViewAutoresizingFlexibleWidth|UIViewAutoresizingFlexibleHeight;
  [_innerView addSubview:_scrollView];
  
  UIBarItem* space = [[UIBarButtonItem alloc] initWithBarButtonSystemItem: UIBarButtonSystemItemFlexibleSpace target:nil action:nil];
  UIBarButtonItem *infoButton = [[UIBarButtonItem alloc] initWithImage:[UIImage imageNamed:@"info-button.png"] style:UIBarButtonItemStylePlain target:self action:@selector(info)];
  UIBarButtonItem *shareButton = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemAction target:self action:@selector(share)];

  UIBarButtonItem *bookmarkButton;

  if(!bookmark){
    bookmarkButton = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemSave target:self action:@selector(bookmark)];
  }else{
    bookmarkButton = [space retain];
  }
 
  _nextButton = [[UIBarButtonItem alloc] initWithImage:TTIMAGE(@"bundle://Three20.bundle/images/nextIcon.png") style:UIBarButtonItemStylePlain target:self action:@selector(nextAction)];
  _previousButton = [[UIBarButtonItem alloc] initWithImage:TTIMAGE(@"bundle://Three20.bundle/images/previousIcon.png") style:UIBarButtonItemStylePlain target:self action:@selector(previousAction)];
  
  _toolbar = [[UIToolbar alloc] initWithFrame:CGRectMake(0, screenFrame.size.height - TT_ROW_HEIGHT, screenFrame.size.width, TT_ROW_HEIGHT)];
  
  if (self.navigationBarStyle == UIBarStyleDefault) {
          _toolbar.tintColor = TTSTYLEVAR(toolbarTintColor);
  }
  
  _toolbar.barStyle = self.navigationBarStyle;
  _toolbar.autoresizingMask = UIViewAutoresizingFlexibleWidth|UIViewAutoresizingFlexibleTopMargin;
  _toolbar.items = [NSArray arrayWithObjects: shareButton, infoButton, space, bookmarkButton, nil];

  [space release];
  [shareButton release];
  [infoButton release];
  [bookmarkButton release];
  [_innerView addSubview:_toolbar];
}


- (void)viewWillAppear:(BOOL)animated {
  captionUpdateTimer = [NSTimer scheduledTimerWithTimeInterval:60 target:self selector:@selector(updateCaption:) userInfo:nil repeats:YES];
  [(SegmentedNavigationController *)self.tabBarController setHidden:TRUE];
  [super viewWillAppear:animated];
  [self updateCaption:nil];
}

- (void)viewWillDisappear:(BOOL)animated {
  [captionUpdateTimer invalidate];
  [(SegmentedNavigationController *)self.tabBarController setHidden:FALSE];
  [super viewWillAppear:animated];
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
  return YES;
}

- (void)reload {
  asset.updatedAt = [NSDate date];
  [asset save];

  [[self centerPhotoView] unsetImage];
  [[TTURLCache sharedCache] removeURL:[asset URLForVersion:TTPhotoVersionLarge] fromDisk:YES];
  [[self centerPhotoView] reload];

  [self updateCaption:nil];
}

- (void)updateCaption:(NSTimer *)timer {
  if(!asset.updatedAt){
    asset.updatedAt = [NSDate date];
    [asset save];
  }

  [[self centerPhotoView] showCaption:asset.caption];
}

- (void)info {
  NSString *url = URLCONSTRUCT(@"tt://info", asset.pk, nil);
  [[TTNavigator navigator] openURLAction: [[TTURLAction actionWithURLPath:url] applyAnimated:YES]];
}

- (void)share {
  [asset shareFromToolbar:self.navigationController.toolbar];
}

- (void)bookmark {
  [asset bookmark];

  //[[TTNavigator navigator] openURLAction: 
   // [[TTURLAction actionWithURLPath:@"tt://tabs/more/bookmarks"] applyAnimated:YES]];
}

- (void)updateChrome {
  [super updateChrome];

  if(!bookmark){
    UIBarButtonItem *rightBarButtonItem = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemRefresh target:self action:@selector(reload)];
    self.navigationItem.rightBarButtonItem = rightBarButtonItem;
    [rightBarButtonItem release];
  }
}

- (void)dealloc {
  [asset release];
  [bookmark release];
  [super dealloc];
}


@end
