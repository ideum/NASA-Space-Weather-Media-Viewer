//
//  Bookmark.h
//  SpaceWeatherViewer
//
//  Created by James Kassemi on 10/4/10.
//  Copyright 2010 NASA/Ideum.
//

#import <Foundation/Foundation.h>
#import "Asset.h"
#import "PKRecord.h"
#import "AlertManager.h"
#import "Three20/Three20.h"

@interface Bookmark : PKRecord <TTImageViewDelegate,TTPhoto,TTModel,TTPhotoSource> {

}

@property(nonatomic,copy) NSString *title;
@property(nonatomic,retain) Asset *asset;
@property(nonatomic,retain) NSString *test;

- (NSString *)documentsDirectory;
- (NSString*)path;
- (BOOL)pathExists;
- (NSString*)url;
-(BOOL)save;

//////////////////////////////////////////////////////////////////////////

#pragma mark -
#pragma mark <TTPhoto>

// Methods

- (NSString *) URLForVersion:(TTPhotoVersion)version;

// Properties

- (id <TTPhotoSource>) photoSource;
- (CGSize) size;
- (NSInteger) index;
- (NSString *) caption;

//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////

#pragma mark -
#pragma mark <TTPhotoSource>

-(NSInteger) numberOfPhotos;
-(NSInteger) maxPhotoIndex;
-(id<TTPhoto>) photoAtIndex:(NSInteger)index;

//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////

#pragma mark -
#pragma mark <TTModel>

/**
 * An array of objects that conform to the TTModelDelegate protocol.
 */
- (NSMutableArray*)delegates;

/**
 * Indicates that the data has been loaded.
 *
 * Default implementation returns YES.
 */
- (BOOL)isLoaded;

/**
 * Indicates that the data is in the process of loading.
 *
 * Default implementation returns NO.
 */
- (BOOL)isLoading;

/**
 * Indicates that the data is in the process of loading additional data.
 *
 * Default implementation returns NO.
 */
- (BOOL)isLoadingMore;

/**
 * Indicates that the model is of date and should be reloaded as soon as possible.
 *
 * Default implementation returns NO.
 */
-(BOOL)isOutdated;

/**
 * Loads the model.
 *
 * Default implementation does nothing.
 */
- (void)load:(TTURLRequestCachePolicy)cachePolicy more:(BOOL)more;

/**
 * Cancels a load that is in progress.
 *
 * Default implementation does nothing.
 */
- (void)cancel;

/**
 * Invalidates data stored in the cache or optionally erases it.
 *
 * Default implementation does nothing.
 */
- (void)invalidate:(BOOL)erase;

//////////////////////////////////////////////////////////////////////////


@end
