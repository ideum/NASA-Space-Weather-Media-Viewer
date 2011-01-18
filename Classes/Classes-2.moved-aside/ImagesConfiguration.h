//
//  ImagesConfiguration.h
//  SpaceWeatherViewer
//
//  Created by James Kassemi on 6/10/10.
//  Copyright 2010 NASA/Ideum.
//

#import <Foundation/Foundation.h>

static NSMutableDictionary *singletonInstanceManager = nil;

@interface ImagesConfiguration : ConfigurationObject {
	+(ImagesConfiguration *) sharedInstance
	{
		@synchronized(self)
		{
			if(imagesConfiguration == nil)
			{
				imagesConfiguration = [[self alloc] init];
			}
		}
		
		return imagesConfiguration;
	}
	
	- (id)init
	{
			if(imagesConfiguration == nil)
			{
				imagesConfiguration = [super init];
			}
			else 
			{
				[NSException raise:NSInternalInconsistencyException
							format:@"Use [%@ %@] to request singleton",
							NSStringFromClass([self class]), 
							
			}

		
	}
}

@end
