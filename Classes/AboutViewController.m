#import "AboutViewController.h"
#import "Asset.h"

@implementation AboutViewController

- (id)initWithNavigatorURL:(NSString*)theUrl query:(NSDictionary*)query {
  if(self = [super init]){
    self.title = @"About";
    url = @"http://sunearthday.gsfc.nasa.gov/spaceweather";
  }

  return self;
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
  contentHTML = [contentHTML stringByAppendingString:@"<img src=\"space-weather-media-viewer-black-text.png\"/>"];
  contentHTML = [contentHTML stringByAppendingString:@"</h2><p>"];
  contentHTML = [contentHTML stringByAppendingString:@"<p>The Space Weather Media Viewer is an application built to support Education and Public Outreach activities of NASA. Many of the images that appear in this viewer are \"near-real-time\" and come from a variety of NASA Missions.</p>"];

  contentHTML = [contentHTML stringByAppendingString:@"<p><b>Produced by</b>: <a href=\"http://www.nasa.gov\">NASA</a></p>"];
  contentHTML = [contentHTML stringByAppendingString:@"<p><b>Video Interviews</b>: Troy Cline, Elaine Lewis, and Jim Spadaccini</p>"];
  contentHTML = [contentHTML stringByAppendingString:@"<p><b>Participating Experts</b>: Nigel Angold, Dr. Nicola Fox, Dr. Jim Green, Ed Massey, Dr. Sten Odenwald, Dr. Art Poland, Dr. Edward Smith, and Dr. Ed Stone</p>"];
  contentHTML = [contentHTML stringByAppendingString:@"<p><b>Producers</b>: Elaine Lewis and Troy Cline</p>"];
  contentHTML = [contentHTML stringByAppendingString:@"<p><b>Contributers</b>: Andrea Angrum, Beth Barbier, Lndsay Bartolone, Steele Hill, Theresa Kucera, Kelly Korrect, Sten Odenwald and Laura Peticolas</p>"];
  contentHTML = [contentHTML stringByAppendingString:@"<p><b>Designed and Developed by</b>: <a href=\"http://ideum.com\">Ideum</a></p>"];

  contentHTML = [contentHTML stringByAppendingString:@"</p>"];

  contentHTML = [contentHTML stringByAppendingString:@"\
    <p>&nbsp;</p><p>&nbsp;</p>\
  </body>\
</html>\
"];

  NSString *path = [[NSBundle mainBundle] bundlePath];
  NSURL *baseURL = [NSURL fileURLWithPath:path];
  [content loadHTMLString:contentHTML baseURL:baseURL];
}

- (void)share {
  // Generic
  SHKItem *item = [SHKItem URL:[NSURL URLWithString:url] title:@"NASA Space Weather Mobile Media Viewer"];
  
  [item setCustomValue:@"Check out near-realtime images of the Sun using NASA's Space Weather Media Viewer" forKey:@"description"];
  [item setCustomValue:[[Asset fetchHomePageAsset] URLForVersion:TTPhotoVersionLarge] forKey:@"imageURL"];
  
  // Email
  [item setCustomValue:@"NASA Space Weather Mobile Media Viewer" forKey:@"emailTitle"];
  NSString *emailText = @"I'm observing the Sun on my iPhone! <br/><br/>";
  emailText = [emailText stringByAppendingString:@"<br/><br/>Check out near-realtime images of the Sun using NASA's Space Weather Media Viewer:"];
  emailText = [emailText stringByAppendingFormat:@"<br/><br/><a href=\"%@\">%@</a>", url, url];
  [item setCustomValue:emailText forKey:@"emailText"];

  // Twitter
  [item setCustomValue:@"I'm observing the Sun on my iPhone!" forKey:@"tweetText"];

  SHKActionSheet *actionSheet = [SHKActionSheet actionSheetForItem:item];
  [actionSheet showFromToolbar:self.navigationController.toolbar];
}

- (void)dealloc {
  [super dealloc];
}
@end
