#import "MissionViewController.h"
#import "Three20/Three20.h"

@implementation MissionViewController

- (id)initWithMissionPK:(NSString *)pk {
  if(self = [super init]){
    mission = [[Mission get:pk] retain];
    self.title = mission.title;
    url = mission.url;
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
  contentHTML = [contentHTML stringByAppendingString:mission.headline];
  contentHTML = [contentHTML stringByAppendingString:@"</h2><p>"];
  contentHTML = [contentHTML stringByAppendingString:@"<img align='right' src=\""];
  contentHTML = [contentHTML stringByAppendingString:[mission.image substringFromIndex:9]];
  contentHTML = [contentHTML stringByAppendingString:@"\"/><p>"]; 
  contentHTML = [contentHTML stringByAppendingString:mission.text];
  contentHTML = [contentHTML stringByAppendingString:@"</p>"];

  contentHTML = [contentHTML stringByAppendingString:@"\
  </body>\
</html>\
"];

  NSString *path = [[NSBundle mainBundle] bundlePath];
  NSURL *baseURL = [NSURL fileURLWithPath:path];
  [content loadHTMLString:contentHTML baseURL:baseURL];
}

- (void)share {
  SHKItem *item = [[SHKItem alloc] init];

  item.shareType = SHKShareTypeURL;
  item.title = [mission headline];
  item.URL = [NSURL URLWithString:mission.url];
  [item setCustomValue:@"Check out more missions and near-realtime images of the Sun using NASA's Space Weather Media Viewer" forKey:@"description"];
  [item setCustomValue:mission.imageUrl forKey:@"imageURL"];

  NSString *emailText = [@"I'm learning about " stringByAppendingString:mission.headline];
  emailText = [emailText stringByAppendingString:@". To learn more about this NASA Mission, visit:<br/><a href=\""];
  emailText = [emailText stringByAppendingString:mission.url];
  emailText = [emailText stringByAppendingString:@"\">"];
  emailText = [emailText stringByAppendingString:mission.url];
  emailText = [emailText stringByAppendingString:@"</a><br/><br/>Check out near-realtime images of the Sun using NASA's Space Weather Media Viewer:<br/>"];
  emailText = [emailText stringByAppendingString:@"<a href=\"http://sunearthday.nasa.gov/spaceweather/\">http://sunearthday.nasa.gov/spaceweather/</a>"];

  [item setCustomValue:emailText forKey:@"emailText"];
  [item setCustomValue:TTIMAGE(mission.image) forKey:@"emailAttachment"];

  [item setCustomValue:[@"I'm checking out space weather missions on my iPhone - " stringByAppendingString:mission.headline] forKey:@"tweetText"];

  SHKActionSheet *actionSheet = [SHKActionSheet actionSheetForItem:item];
  [actionSheet showFromToolbar:self.navigationController.toolbar];
}

- (void)dealloc {
  [mission release];
  [super dealloc];
}
@end
