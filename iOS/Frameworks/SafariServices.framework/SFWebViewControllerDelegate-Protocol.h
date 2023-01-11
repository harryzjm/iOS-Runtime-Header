//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSArray, NSError, NSURL, NSURLAuthenticationChallenge, SFWebViewController, UIViewController, WKBackForwardListItem, WKNavigation, WKNavigationAction, WKNavigationResponse, WKWebView, WKWebViewConfiguration, _SFDialog, _WKActivatedElementInfo, _WKFrameHandle;

@protocol SFWebViewControllerDelegate <NSObject>
- (void)webViewController:(SFWebViewController *)arg1 didChangeFullScreen:(_Bool)arg2;
- (long long)webViewController:(SFWebViewController *)arg1 presentationPolicyForDialog:(_SFDialog *)arg2;
- (void)webViewControllerWillAuthenticateForAutoFill:(SFWebViewController *)arg1;
- (_Bool)currentLoadIsEligibleForAutoFillAuthenticationForWebViewController:(SFWebViewController *)arg1;
- (unsigned long long)browserPersonaForWebViewController:(SFWebViewController *)arg1;
- (void)webViewControllerDidChangeSafeAreaShouldAffectObscuredInsets:(SFWebViewController *)arg1;
- (void)webViewControllerDidChangeSafeAreaInsets:(SFWebViewController *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 printFrame:(_WKFrameHandle *)arg2;
- (UIViewController *)presentingViewControllerForWebViewController:(SFWebViewController *)arg1;
- (void)webViewControllerWillPresentJavaScriptDialog:(SFWebViewController *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)webViewControllerDidChangeHasOnlySecureContent:(SFWebViewController *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 commitPreviewedViewController:(UIViewController *)arg2;
- (UIViewController *)webViewController:(SFWebViewController *)arg1 previewViewControllerForURL:(NSURL *)arg2 defaultActions:(NSArray *)arg3 elementInfo:(_WKActivatedElementInfo *)arg4;
- (void)webViewControllerWebProcessDidBecomeUnresponsive:(SFWebViewController *)arg1;
- (void)webViewControllerWebProcessDidBecomeResponsive:(SFWebViewController *)arg1;
- (void)webViewControllerWebProcessDidCrash:(SFWebViewController *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 webViewDidClose:(WKWebView *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 createWebViewWithConfiguration:(WKWebViewConfiguration *)arg2 forNavigationAction:(WKNavigationAction *)arg3 completionHandler:(void (^)(WKWebView *))arg4;
- (void)webViewController:(SFWebViewController *)arg1 didEndNavigationGestureToBackForwardListItem:(WKBackForwardListItem *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 didSameDocumentNavigation:(WKNavigation *)arg2 ofType:(long long)arg3;
- (void)webViewControllerDidChangeURL:(SFWebViewController *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 didFailProvisionalNavigation:(WKNavigation *)arg2 withError:(NSError *)arg3;
- (void)webViewController:(SFWebViewController *)arg1 decidePolicyForNavigationResponse:(WKNavigationResponse *)arg2 decisionHandler:(void (^)(long long))arg3;
- (void)webViewController:(SFWebViewController *)arg1 decidePolicyForNavigationAction:(WKNavigationAction *)arg2 decisionHandler:(void (^)(long long))arg3;
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
@end

