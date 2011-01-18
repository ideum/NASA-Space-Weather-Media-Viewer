//
//  NSDate+HR.m
//  SpaceWeatherViewer
//
//  Created by James Kassemi on 10/13/10.
//  Copyright 2010 NASA/Ideum.
//

#import "NSDate+HR.h"


#define YEAR_IN_SECONDS (86400 * 356)
#define MONTH_IN_SECONDS (86400 * 31)
#define WEEK_IN_SECONDS (86400 * 7)
#define DAY_IN_SECONDS 86400
#define HOUR_AND_A_HALF_IN_SECONDS (3600 * 1.5)
#define HOUR_IN_SECONDS 3600
#define MINUTE_IN_SECONDS 60

@implementation NSDate (HR)
  - (NSString *) distanceOfTimeInWords {
    NSTimeInterval distanceInterval = -1 * [self timeIntervalSinceNow];
    
    int seconds = (int) distanceInterval;
    
    if(seconds < MINUTE_IN_SECONDS){
      return [NSString stringWithFormat:@"less than a minute ago"];
    }else if(seconds < (MINUTE_IN_SECONDS * 2)){
      return [NSString stringWithFormat:@"a couple of minutes ago"];
    }else if(seconds < HOUR_AND_A_HALF_IN_SECONDS){
      return [NSString stringWithFormat:@"about %i minutes ago", seconds / MINUTE_IN_SECONDS];
    }else if(seconds < HOUR_IN_SECONDS){
      return [NSString stringWithFormat:@"less than an hour ago"];
    }else if(seconds < (HOUR_IN_SECONDS * 2)){
      return [NSString stringWithFormat:@"more than an hour ago"];
    }else if(seconds < DAY_IN_SECONDS){
      return [NSString stringWithFormat:@"%i hours ago", seconds / HOUR_IN_SECONDS];
    }else if(seconds < WEEK_IN_SECONDS){
      return [NSString stringWithFormat:@"%i weeks ago", seconds / WEEK_IN_SECONDS];
    }else if(seconds < MONTH_IN_SECONDS){
      return [NSString stringWithFormat:@"%i days ago", seconds / DAY_IN_SECONDS];
    }else if(seconds < YEAR_IN_SECONDS){
      return [NSString stringWithFormat:@"%i months ago", seconds / MONTH_IN_SECONDS];
    }else{
      return [NSString stringWithFormat:@"%i years ago", seconds / YEAR_IN_SECONDS];
    }
  }
@end
