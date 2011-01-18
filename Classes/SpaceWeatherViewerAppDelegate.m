//
//  SpaceWeatherViewerAppDelegate.m
//  SpaceWeatherViewer
//
//  Created by James Kassemi on 6/4/10.
//  Copyright NASA/Ideum 2010.
//

#import "SpaceWeatherViewerAppDelegate.h"
#import "CategoryTableViewController.h"
#import "AssetListTableViewController.h"
#import "BookmarkTableViewController.h"
#import "BookmarkImageViewController.h"
#import "MoreTableViewController.h"
#import "AssetInfoViewController.h"
#import "AboutViewController.h"
#import "MissionTableViewController.h"
#import "MainNavigationController.h"
#import "AssetVideoViewController.h"
#import "AssetImageViewController.h"
#import "MissionViewController.h"
#import "Appirater.h"
#import "WebController.h"
#import "Asset.h"
#import "SHK.h"
#import "CoreData.h"
#import "Three20/Three20.h"
#import "URLEncode.h"
#import "Stylesheet.h"

@implementation SpaceWeatherViewerAppDelegate

@synthesize window;
@synthesize navigationController;

- (id)init {
	if (self = [super init]){
          window = nil;
          navigationController = nil;
	}
	
	[[TTURLRequestQueue mainQueue] setMaxContentLength:0];
	
	return self;
}

- (UINavigationController *) navigationControllerWrapperForViewController:(Class)viewControllerClass withTitle:(NSString *)title {
	UIViewController *viewController = [[viewControllerClass alloc] initWithTitle:title];

	UINavigationController *wrappedNavigationController = [[UINavigationController alloc] initWithRootViewController:viewController];
	wrappedNavigationController.navigationBar.tintColor = [UIColor darkGrayColor];
	wrappedNavigationController.toolbar.tintColor = [UIColor darkGrayColor];
	wrappedNavigationController.delegate = self;
	[viewController release];
	
	return wrappedNavigationController;
}

- (void)navigationController:(UINavigationController *)navigationController willShowViewController:(UIViewController *)viewController animated:(BOOL)animated {
	[viewController viewWillAppear:animated];
}

-(void) navigationController:(UINavigationController *)navigationController didShowViewController:(UIViewController *)viewController animated:(BOOL)animated {
	[viewController viewDidAppear:animated];
}

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {    
	self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
	self.window.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
	window.autoresizesSubviews = YES;
	[window makeKeyAndVisible];
    	 
	// Add our initial image view to the page

	[SHK flushOfflineQueue];

	// Seed database data
	[CoreData populate];

        /////////////////////////////////////////////////////////////////////////
        /// URLs

        TTNavigator *navigator = [TTNavigator navigator];
        navigator.supportsShakeToReload = YES;
        navigator.persistenceMode = TTNavigatorPersistenceModeAll;

        TTURLMap *map = navigator.URLMap;

        // Default to web
        [map from:@"*" toViewController:[WebController class]]; 

        // Main page
        [map from:@"tt://tabs" toSharedViewController:[MainNavigationController class]]; 

        // List of categories inside a tab
        [map from:@"tt://tabs/(initWithTabPK:)/categories" toSharedViewController:[CategoryTableViewController class]];

        // List of assets inside a category
        [map from:@"tt://tabs/(initWithTabPK:)/categories/(andCategoryPK:)/assets" toViewController:[AssetListTableViewController class]];

        // View an image asset
        [map from:@"tt://image/(initWithAssetPK:)" toViewController:[AssetImageViewController class]];

        // View an image asset (bookmarked)
        [map from:@"tt://bookmark/image/(initWithBookmarkPK:)" toViewController:[BookmarkImageViewController class]];

        // View a video asset
        [map from:@"tt://video/(initWithAssetPK:)" toViewController:[AssetVideoViewController class]];

        // View a video asset (bookmarked)
        [map from:@"tt://bookmark/video/(initWithBookmarkPK:)" toViewController:[AssetVideoViewController class]];

        // View information about an asset
        [map from:@"tt://info/(initWithAssetPK:)" toViewController:[AssetInfoViewController class]];

        // View information about an asset image with bookmark
        [map from:@"tt://info/bookmark/(initWithBookmarkPK:)" toViewController:[AssetInfoViewController class]];
    
        // Tabs
        [map from:[Tab class] name:@"tab" toURL:@"tt://tabs/(pk)"];

        // More
        [map from:@"tt://tabs/more" toViewController:[MoreTableViewController class]];

        // Bookmarks
        [map from:@"tt://tabs/more/bookmarks" toViewController:[BookmarkTableViewController class]];

        // Missions
        [map from:@"tt://tabs/more/missions" toViewController:[MissionTableViewController class]];

        // View a mission
        [map from:@"tt://mission/(initWithMissionPK:)" toViewController:[MissionViewController class]];

        // About
        [map from:@"tt://tabs/more/about" toViewController:[AboutViewController class]];

        //////////////////////////////////////////////////////////////////////////
          
        /////////////////////////////////////////////////////////////////////////
        /// Stylesheet

        [TTStyleSheet setGlobalStyleSheet:[[[Stylesheet alloc] init] autorelease]];
        /////////////////////////////////////////////////////////////////////////
        

        [[TTNavigator navigator] openURLAction: 
          [[TTURLAction actionWithURLPath:@"tt://tabs"] applyAnimated:NO]];

	[Appirater appLaunched:YES];
	return YES;
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
  [Appirater appEnteredForeground:YES];
}

- (void)reload {
  [[TTNavigator navigator] openURLAction:
    [[TTURLAction actionWithURLPath:@"tt://tabs"] applyAnimated:NO]];
}

- (void)dealloc {
    [[CoreData sharedCoreData] release];
    [navigationController release];
    [window release];
    [super dealloc];
}

@end

