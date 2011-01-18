#import "RichContentViewController.h"
#import "SegmentedNavigationController.h"

@implementation RichContentViewController

- (id)init {
  if(self = [super init]){
    fontSize = 0.8;
    url = nil;
    self.title = @"Untitled"; 
    self.hidesBottomBarWhenPushed = YES;
  }

  return self;
}

- (void)loadView {
  [super viewDidLoad];

  self.statusBarStyle = UIStatusBarStyleDefault;
  self.navigationBarStyle = UIBarStyleBlack;
  self.navigationBarTintColor = nil;
  self.wantsFullScreenLayout = NO;
  self.hidesBottomBarWhenPushed = YES;

  fullscreen = NO;
  CGRect screenFrame = [UIScreen mainScreen].bounds;
  container = [[UIView alloc] initWithFrame:screenFrame];
  
  toolbar = [[UIToolbar alloc] initWithFrame:CGRectMake(0, screenFrame.size.height - TT_ROW_HEIGHT, screenFrame.size.width, TT_ROW_HEIGHT)];
  UIBarItem* space = [[[UIBarButtonItem alloc] initWithBarButtonSystemItem: UIBarButtonSystemItemFlexibleSpace target:nil action:nil] autorelease];
  
  UIBarButtonItem *shareButton;

  if([self shouldAllowShare]){
    shareButton = [[[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemAction target:self action:@selector(share)] autorelease];
  }else{
    shareButton = [[[UIBarButtonItem alloc] initWithBarButtonSystemItem: UIBarButtonSystemItemFixedSpace target:nil action:nil] autorelease];
    shareButton.width = 25;
  }

  UIBarButtonItem *webButton;

  if(url){
    webButton = [[[UIBarButtonItem alloc] initWithImage:[UIImage imageNamed:@"nasa_globe.png"] style:UIBarButtonItemStylePlain target:self action:@selector(info)] autorelease];
  }else{
    webButton = [[[UIBarButtonItem alloc] initWithBarButtonSystemItem: UIBarButtonSystemItemFixedSpace target:nil action:nil] autorelease];
    webButton.width = 25;
  }

  fontIncreaseButton = [[UIBarButtonItem alloc] initWithImage:[UIImage imageNamed:@"nasa_text_bigger.png"] style:UIBarButtonItemStylePlain target:self action:@selector(increaseFontSize)];
  fontDecreaseButton = [[UIBarButtonItem alloc] initWithImage:[UIImage imageNamed:@"nasa_text_smaller.png"] style:UIBarButtonItemStylePlain target:self action:@selector(decreaseFontSize)];

  if (self.navigationBarStyle == UIBarStyleDefault)
      toolbar.tintColor = TTSTYLEVAR(toolbarTintColor);
 
  toolbar.barStyle = self.navigationBarStyle;
  toolbar.autoresizingMask = UIViewAutoresizingFlexibleWidth|UIViewAutoresizingFlexibleTopMargin;

  toolbar.items = [NSArray arrayWithObjects: shareButton, space, fontDecreaseButton, fontIncreaseButton, space, webButton, nil];

  content = [[UIWebView alloc] initWithFrame:screenFrame];
  content.autoresizingMask = UIViewAutoresizingFlexibleWidth|UIViewAutoresizingFlexibleHeight;
  content.delegate = self;

  [self updateContent];

  [container addSubview:content];
  [container addSubview:toolbar];

  self.view = container;

  [content release];

}

///////////////////////////////////////////////////////////////////////////////////////////////
// <UIWebViewDelegate>

- (void)webView:(UIWebView *)webView didFailLoadWithError:(NSError *)error {

}

- (void)webViewDidFinishLoad:(UIWebView *)webView {
  [content stringByEvaluatingJavaScriptFromString:@"var e=document.getElementsByTagName('*');for(var i=0;i<e.length;i++){ if(e[i].tagName != 'A'){ e[i].addEventListener('click', function(event){ document.location='http://null/mousedown'; }); }}"];
}

- (void)webViewDidStartLoad:(UIWebView *)webView {

}

- (BOOL)webView:(UIWebView *)webView shouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType {
  if([request.URL.host isEqualToString:@"null"]){
    [UIView beginAnimations:@"navigationBar" context:nil];
    [UIView setAnimationDuration:0.25];
    [UIView setAnimationDelegate:self];

    if(!fullscreen){
      self.navigationController.navigationBarHidden = YES;
		toolbar.hidden = YES;
		fullscreen = YES;
    }else{
		self.navigationController.navigationBarHidden = NO;
		toolbar.hidden = NO;
		fullscreen = NO;
    }

    [UIView commitAnimations];
    return NO;
  }else{
    if(request.URL.host){
      [self navigateToURL:request.URL];
      return NO;
    }else{
      // String content
      return YES;
    }
  }
}

///////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////
// <UIAlertViewDelegate>

- (void)alertView:(UIAlertView*)alertView clickedButtonAtIndex:(NSInteger)buttonIndex {
  if(buttonIndex == 1){
    [[UIApplication sharedApplication] openURL:lastActivatedURL];
  }

  [lastActivatedURL release];

  self.navigationController.navigationBarHidden = NO;
  toolbar.hidden = NO;
  fullscreen = NO;
}

- (void)alertView:(UIAlertView *)alertView didDismissWithButtonIndex:(NSInteger)buttonIndex {}
- (void)alertView:(UIAlertView *)alertView willDismissWithButtonIndex:(NSInteger)buttonIndex {}
- (void)alertViewCancel:(UIAlertView *)alertView {}
- (void)didPresentAlertView:(UIAlertView *)alertView {}
- (void)willPresentAlertView:(UIAlertView *)alertView {}


///////////////////////////////////////////////////////////////////////////////////////////////

- (void)navigateToURL:(NSURL*)newUrl {
  lastActivatedURL = [newUrl retain];
  UIAlertView *alertView = [[UIAlertView alloc] initWithTitle: @"Open in Safari"
                                                    message: @"You've selected a Web link. Would you like to view this link in Safari?"
                                                    delegate: self
                                                    cancelButtonTitle: @"NO"
                                                    otherButtonTitles:@"YES", nil];
  [alertView show];
  [alertView release];
}

- (void)updateContent {
  return;
}

- (void)increaseFontSize {
  if(fontSize <= 2)
    fontSize += 0.1;
  else
    fontIncreaseButton.enabled = false;

  fontDecreaseButton.enabled = true;
  [self updateContent];
}

- (void)decreaseFontSize {
  if(fontSize >= 0.4)
    fontSize -= 0.1;
  else 
    fontDecreaseButton.enabled = false;

  fontIncreaseButton.enabled = true;
  [self updateContent];
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

- (BOOL)shouldAllowShare {
  return YES;
}

- (void)share {
  SHKItem *item = [SHKItem URL:[NSURL URLWithString:url] title:self.title];
  SHKActionSheet *actionSheet = [SHKActionSheet actionSheetForItem:item];
  [actionSheet showFromToolbar:self.navigationController.toolbar];
}

- (void)info {
  [self navigateToURL:[NSURL URLWithString:url]];
}

- (void)dealloc {
  [container release];
  [toolbar release];
  [fontIncreaseButton release];
  [fontDecreaseButton release];
  [super dealloc];
}
@end
