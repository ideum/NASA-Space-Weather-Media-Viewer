//
//  AssetViewController.h
//  SpaceWeatherViewer
//
//  Created by James Kassemi on 7/5/10.
//  Copyright 2010 NASA/Ideum.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "Category.h"
#import "Tab.h"
#import "Three20/Three20.h"

@interface AssetListTableViewController : TTTableViewController {
  Category *category;
  Tab *tab;
}

@property(nonatomic,retain) Category *category;
@property(nonatomic,retain) Tab *tab;

@end
