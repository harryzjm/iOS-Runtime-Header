//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSData, NSError, NSNumber, NSString, NSURL, NSURLAuthenticationChallenge, SFDialog, SFWebViewController, UIViewController, WKBackForwardListItem, WKContextMenuElementInfo, WKNavigation, WKNavigationAction, WKNavigationResponse, WKSecurityOrigin, WKWebView, WKWebViewConfiguration, _SFDownload, _WKDownload, _WKFrameHandle;
@protocol UIContextMenuInteractionCommitAnimating;

@protocol SFWebViewControllerDelegate <NSObject>
- (_SFDownload *)webViewController:(SFWebViewController *)arg1 didStartDownload:(_WKDownload *)arg2;
- (void)webViewControllerUpdateNavigationBar:(SFWebViewController *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 mediaCaptureStateDidChange:(unsigned long long)arg2;
- (void)webViewController:(SFWebViewController *)arg1 didChangeFullScreen:(_Bool)arg2;
- (long long)webViewController:(SFWebViewController *)arg1 presentationPolicyForDialog:(SFDialog *)arg2;
- (long long)browserPersonaForWebViewController:(SFWebViewController *)arg1;
- (void)webViewControllerDidChangeSafeAreaShouldAffectObscuredInsets:(SFWebViewController *)arg1;
- (void)webViewControllerDidChangeSafeAreaInsets:(SFWebViewController *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 printFrame:(_WKFrameHandle *)arg2;
- (UIViewController *)presentingViewControllerForWebViewController:(SFWebViewController *)arg1;
- (void)webViewControllerWillPresentJavaScriptDialog:(SFWebViewController *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)webViewControllerDidChangeHasOnlySecureContent:(SFWebViewController *)arg1;
- (void)webViewControllerWebProcessDidBecomeUnresponsive:(SFWebViewController *)arg1;
- (void)webViewControllerWebProcessDidBecomeResponsive:(SFWebViewController *)arg1;
- (void)webViewControllerWebProcessDidCrash:(SFWebViewController *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 webViewDidClose:(WKWebView *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 didFinishLoadForQuickLookDocumentInMainFrame:(NSData *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 didStartLoadForQuickLookDocumentInMainFrameWithFileName:(NSString *)arg2 uti:(NSString *)arg3;
- (void)webViewController:(SFWebViewController *)arg1 createWebViewWithConfiguration:(WKWebViewConfiguration *)arg2 forNavigationAction:(WKNavigationAction *)arg3 completionHandler:(void (^)(WKWebView *))arg4;
- (void)webViewController:(SFWebViewController *)arg1 didEndNavigationGestureToBackForwardListItem:(WKBackForwardListItem *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 willEndNavigationGestureToBackForwardListItem:(WKBackForwardListItem *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 didSameDocumentNavigation:(WKNavigation *)arg2 ofType:(long long)arg3;
- (void)webViewControllerDidChangeURL:(SFWebViewController *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 didFailProvisionalNavigation:(WKNavigation *)arg2 withError:(NSError *)arg3;
- (void)webViewController:(SFWebViewController *)arg1 decidePolicyForNavigationResponse:(WKNavigationResponse *)arg2 decisionHandler:(void (^)(long long))arg3;
- (void)webViewController:(SFWebViewController *)arg1 decidePolicyForNavigationAction:(WKNavigationAction *)arg2 decisionHandler:(void (^)(long long, WKWebpagePreferences *))arg3;
- (void)webViewControllerDidFirstVisuallyNonEmptyLayout:(SFWebViewController *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 didFailNavigation:(WKNavigation *)arg2 withError:(NSError *)arg3;
- (void)webViewControllerDidChangeEstimatedProgress:(SFWebViewController *)arg1;
- (void)webViewControllerDidChangeLoadingState:(SFWebViewController *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 didFinishDocumentLoadForNavigation:(WKNavigation *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 didFinishNavigation:(WKNavigation *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 didCommitNavigation:(WKNavigation *)arg2;
- (void)webViewControllerDidCancelClientRedirect:(SFWebViewController *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 willPerformClientRedirectToURL:(NSURL *)arg2 withDelay:(double)arg3;
- (void)webViewController:(SFWebViewController *)arg1 didReceiveServerRedirectForProvisionalNavigation:(WKNavigation *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 didStartProvisionalNavigation:(WKNavigation *)arg2;

@optional
- (void)webViewController:(SFWebViewController *)arg1 updatedAppBadge:(NSNumber *)arg2 fromSecurityOrigin:(WKSecurityOrigin *)arg3;
- (void)webViewController:(SFWebViewController *)arg1 requestNotificationPermissionForSecurityOrigin:(WKSecurityOrigin *)arg2 decisionHandler:(void (^)(_Bool))arg3;
- (_Bool)webViewControllerCanFindNextOrPrevious:(SFWebViewController *)arg1;
- (_Bool)webViewControllerShouldFillStringForFind:(SFWebViewController *)arg1;
- (void)webViewControllerDidUpdateThemeColor:(SFWebViewController *)arg1;
- (_Bool)webViewControllerCanPromptForAccountSecurityRecommendation:(SFWebViewController *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 willGoToBackForwardListItem:(WKBackForwardListItem *)arg2 inPageCache:(_Bool)arg3;
- (void)webViewController:(SFWebViewController *)arg1 contextMenuDidEndForElement:(WKContextMenuElementInfo *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 contextMenuForElement:(WKContextMenuElementInfo *)arg2 willCommitWithAnimator:(id <UIContextMenuInteractionCommitAnimating>)arg3;
- (UIViewController *)webViewController:(SFWebViewController *)arg1 contextMenuContentPreviewForElement:(WKContextMenuElementInfo *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 contextMenuWillPresentForElement:(WKContextMenuElementInfo *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 contextMenuConfigurationForElement:(WKContextMenuElementInfo *)arg2 completionHandler:(void (^)(UIContextMenuConfiguration *))arg3;
- (void)webViewController:(SFWebViewController *)arg1 decidePolicyForSOAuthorizationLoadWithCurrentPolicy:(long long)arg2 forExtension:(NSString *)arg3 completionHandler:(void (^)(long long))arg4;
- (void)webViewControllerDidFirstPaint:(SFWebViewController *)arg1;
- (void)authenticationChallengeDidNegotiateModernTLS:(NSURL *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 authenticationChallenge:(NSURLAuthenticationChallenge *)arg2 shouldAllowLegacyTLS:(void (^)(_Bool))arg3;
- (void)webViewControllerDidShowSafeBrowsingWarning:(SFWebViewController *)arg1;
@end

