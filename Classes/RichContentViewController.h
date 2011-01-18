#import <UIKit/UIKit.h>
#import "Mission.h"
#import "SHK.h"
#import "Three20/Three20.h"

@interface RichContentViewController : TTViewController <UIWebViewDelegate,UIAlertViewDelegate> {
  NSString *url;
  UIWebView *content;
  float fontSize;
  UIBarButtonItem *fontIncreaseButton;
  UIBarButtonItem *fontDecreaseButton;
  UIView *container;
  UIToolbar *toolbar;
  BOOL fullscreen;
  NSURL *lastActivatedURL;
}

- (void)viewWillAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)updateContent;
- (void)navigateToURL:(NSURL*)url;
- (BOOL)shouldAllowShare;

///////////////////////////////////////////////////////////////////////////////////////////////
// <UIWebViewDelegate>

- (void)webView:(UIWebView *)webView didFailLoadWithError:(NSError *)error;
- (void)webViewDidFinishLoad:(UIWebView *)webView;
- (void)webViewDidStartLoad:(UIWebView *)webView;
- (BOOL)webView:(UIWebView *)webView shouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType;

///////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////
// <UIAlertViewDelegate>

- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex;
- (void)alertView:(UIAlertView *)alertView didDismissWithButtonIndex:(NSInteger)buttonIndex;
- (void)alertView:(UIAlertView *)alertView willDismissWithButtonIndex:(NSInteger)buttonIndex;
- (void)alertViewCancel:(UIAlertView *)alertView;
- (void)didPresentAlertView:(UIAlertView *)alertView;
- (void)willPresentAlertView:(UIAlertView *)alertView;

///////////////////////////////////////////////////////////////////////////////////////////////

@end
