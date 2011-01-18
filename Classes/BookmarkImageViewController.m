#import "BookmarkImageViewController.h"
#import "SegmentedNavigationController.h"
#import "SHK.h"
#import "URLEncode.h"

@implementation BookmarkImageViewController

- (id)initWithBookmarkPK:(NSString *)pk {
  if(self = [super init]){
    bookmark = [[Bookmark get:pk] retain];
  }

  return self;
}

- (void)loadView {
  self.photoSource = bookmark;

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
  UIBarButtonItem *shareButton = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemAction target:self action:@selector(share)];
  UIBarButtonItem *infoButton = [[UIBarButtonItem alloc] initWithImage:[UIImage imageNamed:@"info-button.png"] style:UIBarButtonItemStylePlain target:self action:@selector(info)];

  UIBarButtonItem *bookmarkButton;
  bookmarkButton = [space retain];
 
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
  [(SegmentedNavigationController *)self.tabBarController setHidden:TRUE];
  [super viewWillAppear:animated];
}

- (void)viewWillDisappear:(BOOL)animated {
  [(SegmentedNavigationController *)self.tabBarController setHidden:FALSE];
  [super viewWillAppear:animated];
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
  return YES;
}

- (void)info {
  NSString *url = URLCONSTRUCT(@"tt://info", @"bookmark", bookmark.pk, nil);
  [[TTNavigator navigator] openURLAction: [[TTURLAction actionWithURLPath:url] applyAnimated:YES]];
}

- (void)share {
  NSString *title = @"Saved space weather data from: ";
  title = [title stringByAppendingString:[bookmark title]];
  title = [title stringByAppendingString:@" - Monitor space weather with NASA's Space Weather Media Viewer"];

  // Generic
  SHKItem *item = [SHKItem image:TTIMAGE([bookmark url]) title:@""];
  item.title = title;
  item.URL = [NSURL URLWithString:@"http://sunearthday.nasa.gov/spaceweather/"];

  // Email
  [item setCustomValue:@"An interesting image of the sun!" forKey:@"emailTitle"];
  NSString *emailText = @"I'm observing the Sun on my iPhone. This image is from:<br/><br/>";
  emailText = [emailText stringByAppendingString:bookmark.asset.title];
  emailText = [emailText stringByAppendingString:@"<br/><br/>Check out more near-realtime images of the Sun using NASA's Space Weather Media Viewer:"];
  [item setCustomValue:emailText forKey:@"emailText"];

  // Twitter
  [item setCustomValue:[@"I've observed this solar phenomenon on my iPhone - " stringByAppendingString:bookmark.asset.title] forKey:@"tweetText"];
  [item setCustomValue:@"y" forKey:@"tweetImage"];

  SHKActionSheet *actionSheet = [SHKActionSheet actionSheetForItem:item];
  [actionSheet showFromToolbar:self.navigationController.toolbar];
}

- (void)updateChrome {
  [super updateChrome];
}

- (void)dealloc {
  [bookmark release];
  [super dealloc];
}


@end
