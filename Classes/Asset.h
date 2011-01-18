#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "PKRecord.h"
#import "Three20/Three20.h"

@interface Asset : PKRecord <TTImageViewDelegate,TTPhoto,TTModel,TTPhotoSource> {

	
}


#pragma mark -
#pragma mark Properties: Attributes

@property(nonatomic,copy) NSString *title;
@property(nonatomic,retain) NSString *headline;
@property(nonatomic,retain) NSString *source;
@property(nonatomic,retain) NSString *localSource;
@property(nonatomic,retain) NSString *category;
@property(nonatomic,retain) NSString *infoThumbnail;
@property(nonatomic,retain) NSString *thumbnailSource;
@property(nonatomic,retain) NSString *link;
@property(nonatomic,retain) NSString *linkTitle;
@property(nonatomic,retain) NSString *transcripts;
@property(nonatomic,retain) NSString *text;

@property(nonatomic,assign) Boolean *home;
@property(nonatomic,retain) NSDate *updatedAt;
@property(nonatomic,retain) NSSet *bookmarks;

+(Asset *) fetchHomePageAsset;

- (void)bookmark;
- (void)shareFromToolbar:(UIToolbar *)toolbar;
- (BOOL) isBookmarked;

# pragma mark -
# pragma mark Types

- (Boolean)isImage;
- (Boolean)isVideo;

#pragma mark -
#pragma mark Method Declarations: Convenience
- (NSString *)imageFileUrl;
- (NSString *)videoFilePath;

- (bool)writeVersion:(TTPhotoVersion)photoVersion toFile:(NSString *)path error:(NSError **)errorPtr;

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
