#import <MediaPlayer/MediaPlayer.h>
#import "SegmentedNavigationController.h"
#import "AssetVideoViewController.h"
#import "Three20/Three20.h"
#import "SHK.h"
#import "URLEncode.h"
#import "AlertManager.h"

@implementation AssetVideoViewController

- (id)initWithAssetPK:(NSString *)pk {
  if(self = [super init]){
    asset = [[Asset get:pk] retain];
    self.hidesBottomBarWhenPushed = YES;
    self.statusBarStyle = UIStatusBarStyleBlackTranslucent;
    self.navigationBarStyle = UIBarStyleBlackTranslucent;
    self.wantsFullScreenLayout = YES;
    self.hidesBottomBarWhenPushed = YES;

  }

  return self;
}
/*
 // The designated initializer.  Override if you create the controller programmatically and want to perform customization that is not appropriate for viewDidLoad.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if ((self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil])) {
        // Custom initialization
    }
    return self;
}
*/

// Implement loadView to create a view hierarchy programmatically, without using a nib.
- (void)loadView {
  CGRect screenFrame = [UIScreen mainScreen].bounds;
  self.view = [[[UIView alloc] initWithFrame:screenFrame] autorelease];
  self.view.autoresizingMask = UIViewAutoresizingFlexibleWidth|UIViewAutoresizingFlexibleHeight;
  self.view.backgroundColor = [UIColor blackColor];
  [self.view setUserInteractionEnabled:YES];
  [self spinnerVisible:YES];

  
  [super viewDidLoad];

  [self performSelector:@selector(loadVideo:) withObject:nil afterDelay:0.25];
}

- (void)loadVideo:(id)arg {
  CGRect screenFrame = [UIScreen mainScreen].bounds;
  NSURL *url = [[NSURL alloc] initWithString:[asset source]];
  moviePlayer = [[MPMoviePlayerController alloc] initWithContentURL:url];
  [moviePlayer setContentURL:url];
  [url release];

  // Register to receive a notification when the movie has finished playing.
  [[NSNotificationCenter defaultCenter] addObserver:self
                                           selector:@selector(moviePlayBackDidFinish:)
                                               name:MPMoviePlayerPlaybackDidFinishNotification
                                             object:moviePlayer];

  // Make sure we have access to the video
  [[NSNotificationCenter defaultCenter] addObserver:self
                                           selector:@selector(movieLoadStateDidChange:)
                                               name:MPMoviePlayerLoadStateDidChangeNotification
                                             object:moviePlayer];

  // Log movie player state changes
  [[NSNotificationCenter defaultCenter] addObserver:self
                                           selector:@selector(moviePlaybackStateDidChange:)
                                               name:MPMoviePlayerPlaybackStateDidChangeNotification
                                             object:moviePlayer];

  if ([moviePlayer respondsToSelector:@selector(setFullscreen:animated:)]) {
    // Use the new 3.2 style API
    moviePlayer.controlStyle = MPMovieControlStyleFullscreen;
    moviePlayer.shouldAutoplay = NO;
    moviePlayer.scalingMode = MPMovieScalingModeAspectFit;
    moviePlayer.fullscreen = YES;

    moviePlayer.view.frame = CGRectMake(0, 0, screenFrame.size.width, screenFrame.size.height - TT_ROW_HEIGHT);
    moviePlayer.view.autoresizingMask = UIViewAutoresizingFlexibleWidth|UIViewAutoresizingFlexibleHeight;
    [self.view addSubview:moviePlayer.view];  
  } else {
    // Use the old 2.0 style API
    moviePlayer.movieControlMode = MPMovieControlModeDefault;
    [moviePlayer play];
  }

  UIBarItem* space = [[UIBarButtonItem alloc] initWithBarButtonSystemItem: UIBarButtonSystemItemFlexibleSpace target:nil action:nil];
  UIBarButtonItem *infoButton = [[UIBarButtonItem alloc] initWithImage:[UIImage imageNamed:@"info-button.png"] style:UIBarButtonItemStylePlain target:self action:@selector(info)];

  bookmarkButton = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemSave target:self action:@selector(bookmark)];

  if([asset isBookmarked]){
    bookmarkButton.enabled = NO;
  }

  UIToolbar *toolbar = [[UIToolbar alloc] initWithFrame:CGRectMake(0, screenFrame.size.height - TT_ROW_HEIGHT, screenFrame.size.width, TT_ROW_HEIGHT)];
  toolbar.autoresizingMask = UIViewAutoresizingFlexibleWidth|UIViewAutoresizingFlexibleTopMargin;
  toolbar.items = [NSArray arrayWithObjects: infoButton, space, bookmarkButton, nil];

  if (self.navigationBarStyle == UIBarStyleDefault) {
          toolbar.tintColor = TTSTYLEVAR(toolbarTintColor);
  }
  
  toolbar.barStyle = self.navigationBarStyle;

  [self.view addSubview:toolbar];

  [space release];
  [infoButton release];
  [bookmarkButton release];
  [toolbar release];
}

- (void)info {
  if([moviePlayer playbackState] == MPMoviePlaybackStatePlaying){
    [moviePlayer pause];
  }

  NSString *url = URLCONSTRUCT(@"tt://info", asset.pk, nil);
  [[TTNavigator navigator] openURLAction: [[TTURLAction actionWithURLPath:url] applyAnimated:YES]];
}

- (void)bookmark {
  if([moviePlayer playbackState] == MPMoviePlaybackStatePlaying){
    [moviePlayer pause];
  }

  [asset bookmark];
  bookmarkButton.enabled = NO;
}

- (void) moviePlayBackDidFinish:(NSNotification*)notification {
  NSInteger reason = [[[notification userInfo] valueForKey:MPMoviePlayerPlaybackDidFinishReasonUserInfoKey] intValue];

  switch(reason){
    case MPMovieFinishReasonPlaybackEnded:
      break;
    case MPMovieFinishReasonPlaybackError:
      [self spinnerVisible:NO];
      [AlertManager handleError:@"Playback Failure" withMessage:@"Problem connecting to video server!"];

      break;
    case MPMovieFinishReasonUserExited:
      break;
    default:
      break;
  }

  if ([moviePlayer respondsToSelector:@selector(setFullscreen:animated:)]) {
    [moviePlayer.view removeFromSuperview];
  }

  
 // if(self.interfaceOrientation == UIInterfaceOrientationLandscapeLeft || self.interfaceOrientation == UIInterfaceOrientationLandscapeRight){
    [self.navigationController popViewControllerAnimated:NO];

    UIViewController *target = [(TTNavigationController *) self.navigationController popViewControllerAnimated:NO];
    [(TTNavigationController *) self.navigationController pushViewController:target animatedWithTransition:UIViewAnimationTransitionFlipFromLeft]; 
/*
  }else{
    [(TTNavigationController *) self.navigationController popViewControllerAnimated:NO];
  }
*/
}

- (void) moviePlaybackStateDidChange:(NSNotification*)notification {
  return;

  moviePlayer = [notification object];
  NSInteger playbackState = [moviePlayer playbackState];

  if(playbackState & MPMoviePlaybackStateStopped){
    NSLog(@"playbackstatestopped");
  }

  if(playbackState & MPMoviePlaybackStatePlaying){
    NSLog(@"playbackstateplaying");
    [self spinnerVisible:NO];
  }

  if(playbackState & MPMoviePlaybackStatePaused){
    NSLog(@"playbackstatepaused");
  }

  if(playbackState & MPMoviePlaybackStateInterrupted){
    NSLog(@"playbackstateinterrupted");
    [self spinnerVisible:YES];
  }

  if(playbackState & MPMoviePlaybackStateSeekingForward){
    NSLog(@"playbackstateseekingforward");
  }

  if(playbackState & MPMoviePlaybackStateSeekingBackward){
    NSLog(@"playbackstateseekingbackward");
  }
}

- (void) movieLoadStateDidChange:(NSNotification*)notification {
  moviePlayer = [notification object];
  NSInteger loadState = [moviePlayer loadState];

  if(loadState & MPMovieLoadStateUnknown){
    NSLog(@"playbackstateunknown");
  }

  if(loadState & MPMovieLoadStateStalled){
    NSLog(@"playbackstatestalled");
    [self spinnerVisible:YES];
  }else if(loadState & MPMovieLoadStatePlayable){
    NSLog(@"playbackstateplayable");
    [self spinnerVisible:NO];
    [moviePlayer play];
  }
}

- (void)spinnerVisible:(BOOL)visible {
  if(visible){
    if(!spinner){
      spinner = [[UIActivityIndicatorView alloc] initWithActivityIndicatorStyle:UIActivityIndicatorViewStyleWhiteLarge];
      spinner.center = self.navigationController.view.center;
    }

    [self.view addSubview:spinner];
    [spinner startAnimating];
    [spinner setHidden:NO];
  }else{
    [spinner stopAnimating];
    [spinner setHidden:YES];
  }
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    // Return YES for supported orientations
    return YES;
}


- (void)didRotateFromInterfaceOrientation:(UIInterfaceOrientation)fromInterfaceOrientation {
  if(spinner.hidden == NO){
    spinner.center = self.navigationController.view.center;
  }
}

- (void)didReceiveMemoryWarning {
  [super didReceiveMemoryWarning];
}

- (void)viewWillAppear:(BOOL)animated {
  self.navigationController.navigationBarHidden = YES;
  [(SegmentedNavigationController*)self.tabBarController setHidden:TRUE];

  [super viewWillAppear:animated];

}

- (void)viewWillDisappear:(BOOL)animated {
  self.navigationController.navigationBarHidden = NO; 
  [(SegmentedNavigationController*)self.tabBarController setHidden:FALSE];
  [super viewWillDisappear:animated];
}

- (void)dealloc {
  [[NSNotificationCenter defaultCenter] removeObserver:self
                                                  name:MPMoviePlayerPlaybackDidFinishNotification
                                                object:moviePlayer];


  [[NSNotificationCenter defaultCenter] removeObserver:self
                                             name:MPMoviePlayerLoadStateDidChangeNotification
                                            object:moviePlayer];

  [[NSNotificationCenter defaultCenter] removeObserver:self
                                               name:MPMoviePlayerPlaybackStateDidChangeNotification
                                             object:moviePlayer];

  if([moviePlayer playbackState] == MPMoviePlaybackStatePlaying){
    [moviePlayer stop];
  }

  if ([moviePlayer respondsToSelector:@selector(setFullscreen:animated:)]) {
    [moviePlayer.view removeFromSuperview];
  }

  [spinner release];
  [asset release];
  [moviePlayer release];
  [super dealloc];
}

@end
