//
//  MLog.h
//  SpaceWeatherViewer
//
//  Log utility from http://borkware.com/rants/agentm/mlog/
//
//  Created by James Kassemi on 6/9/10.
//  Copyright 2010 NASA/Ideum.
//

#import <Foundation/Foundation.h>


#define MLogString(s,...) \
	[MLog logFile:__FILE__ lineNumber:__LINE__ \
		format:(s),##__VA_ARGS__]

//MLog.h
@interface MLog : NSObject
{
}

+(void)logFile:(char*)sourceFile lineNumber:(int)lineNumber format:(NSString*)format, ...;
+(void)setLogOn:(BOOL)logOn;
@end
