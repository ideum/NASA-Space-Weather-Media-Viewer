//
//  Tab.h
//  SpaceWeatherViewer
//
//  Created by James Kassemi on 8/23/10.
//  Copyright 2010 NASA/Ideum.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "CoreData.h"
#import "PKRecord.h"

@interface Tab : PKRecord {

}

+(Tab *) fetchTabByName:(NSString *)name;
-(NSArray *) sortedCategories;

@property(nonatomic,retain) NSString *name;
@property(nonatomic,retain) NSSet *categories;

@end
