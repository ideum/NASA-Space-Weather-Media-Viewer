#import "AssetInfoViewController.h"
#import "SegmentedNavigationController.h"
#import "NSDate+HR.h"

@implementation AssetInfoViewController

@synthesize asset;

- (id)initWithAssetPK:(NSString *)pk {
  if(self = [super init]){
    asset = [[Asset get:pk] retain];
    bookmark = nil;
    self.title = asset.title;
    url = nil;
  }

  return self;
}

- (id)initWithBookmarkPK:(NSString *)pk {
  if(self = [super init]){
    bookmark = [[Bookmark get:pk] retain];
    asset = bookmark.asset;
    self.title = asset.title;
    url = nil;
  }

  return self;
}


- (void)viewWillAppear:(BOOL)animated {
  [super viewWillAppear:animated];
}

- (void)updateContent {
  NSString *contentHTML = @"\
<html>\
  <head>\
    <style type=\"text/css\">\
      body { font-family:arial; font-size:\
";

  contentHTML = [contentHTML stringByAppendingString:[NSString stringWithFormat:@"%f", fontSize]];
  contentHTML = [contentHTML stringByAppendingString:@"em; margin:20px; }\
    </style>\
  </head>\
  <body>\
"];

  contentHTML = [contentHTML stringByAppendingString:@"<h2>"];
  contentHTML = [contentHTML stringByAppendingString:asset.headline];
  contentHTML = [contentHTML stringByAppendingString:@"</h2><p>"];

  if(bookmark){
    contentHTML = [contentHTML stringByAppendingString:@"<h3>Saved Image from: "];
    contentHTML = [contentHTML stringByAppendingString:[[bookmark createdAt] descriptionWithLocale:[NSLocale currentLocale]]];
    contentHTML = [contentHTML stringByAppendingString:@"</h3><p>"];
  }else if(asset.updatedAt){
    contentHTML = [contentHTML stringByAppendingString:@"<h3>Updated "];
    contentHTML = [contentHTML stringByAppendingString:[[asset updatedAt] distanceOfTimeInWords]];
    contentHTML = [contentHTML stringByAppendingString:@"</h3><p>"];
  }

  if(asset.infoThumbnail){
    contentHTML = [contentHTML stringByAppendingString:@"<img src='"];
    contentHTML = [contentHTML stringByAppendingString:asset.infoThumbnail];
    contentHTML = [contentHTML stringByAppendingString:@"' align='right' />"];
  }

  contentHTML = [contentHTML stringByAppendingString:asset.text];
  contentHTML = [contentHTML stringByAppendingString:@"</p>"];

  if(asset.transcripts){
    contentHTML = [contentHTML stringByAppendingString:@"<h3>Transcripts:</h3><p>"];
    contentHTML = [contentHTML stringByAppendingString:asset.transcripts];
    contentHTML = [contentHTML stringByAppendingString:@"<p>"];
  }


  contentHTML = [contentHTML stringByAppendingString:@"\
    <p>&nbsp;</p>\
    <p>&nbsp;</p>\
  </body>\
</html>\
"];

  NSString *path = [[NSBundle mainBundle] bundlePath];
  NSURL *baseURL = [NSURL fileURLWithPath:path];
  [content loadHTMLString:contentHTML baseURL:baseURL];
}

- (BOOL)shouldAllowShare {
  return [asset isImage];
}

- (void)share {
  [asset shareFromToolbar:self.navigationController.toolbar];
}

- (void)dealloc {
  [asset release];
  [bookmark release];
  [super dealloc];
}

@end
