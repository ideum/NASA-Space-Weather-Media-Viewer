//
//  AlertManager.h
//  SpaceWeatherViewer
//
//  Created by James Kassemi on 6/8/10.
//  Copyright 2010 NASA/Ideum.
//

@interface AlertManager : NSObject {

}

+ (void)handleError:(NSString *)title withError:(NSError *)error;
+ (void)handleError:(NSString *)title withMessage:(NSString *)message;
@end
