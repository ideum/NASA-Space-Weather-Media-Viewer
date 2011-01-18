//
//  PKRecord.h
//  SpaceWeatherViewer
//
//  Created by James Kassemi on 9/28/10.
//  Copyright 2010 NASA/Ideum.
//

#import <Foundation/Foundation.h>
#import "Record.h"

@interface PKRecord : Record {
   
}

@property(nonatomic,retain) NSString *pk;

+ (PKRecord *)get:(NSString *)pk;
- (void)willSave;
- (void)createPk;

@end
