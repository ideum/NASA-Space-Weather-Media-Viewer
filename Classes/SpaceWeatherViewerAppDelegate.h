//
//  SpaceWeatherViewerAppDelegate.h
//  SpaceWeatherViewer
//
//  Created by James Kassemi on 6/4/10.
//  Copyright Ideum 2010.
//

#import <UIKit/UIKit.h>
#import "SegmentedNavigationController.h"

@interface SpaceWeatherViewerAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate, UINavigationControllerDelegate, UITabBarControllerDelegate> {
    UIWindow *window;
    SegmentedNavigationController *navigationController;
}

@property (nonatomic, retain) UIWindow *window;
@property (nonatomic, retain) SegmentedNavigationController *navigationController;

@end
