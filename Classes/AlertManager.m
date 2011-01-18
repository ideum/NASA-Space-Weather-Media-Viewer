//
//  AlertManager.m
//  SpaceWeatherViewer
//
//  Created by James Kassemi on 6/8/10.
//  Copyright 2010 NASA/Ideum.
//

#import "AlertManager.h"


@implementation AlertManager
+ (void)handleError:(NSString *)title withError:(NSError *)error
{
	[self handleError:title withMessage:[error localizedDescription]];
}

+ (void)handleError:(NSString *)title withMessage:(NSString *)message
{
	// Show an error message - we don't want to exit, since this wouldn't be standard practice,
	// so instead we just let the user decide what to do with their app. 
	
	UIAlertView *alertView = [[UIAlertView alloc] 
							  initWithTitle: title
							  message: message
							  delegate:nil
							  cancelButtonTitle: @"OK"
							  otherButtonTitles:nil];
	[alertView show];
	[alertView release];
}
@end
