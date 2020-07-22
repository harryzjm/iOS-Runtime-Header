//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Social/NSObject-Protocol.h>

@class NSError, NSURLAuthenticationChallenge, WKNavigation, WKNavigationAction, WKNavigationResponse, WKWebView;

@protocol WKNavigationDelegate <NSObject>

@optional
- (void)webViewWebContentProcessDidTerminate:(WKWebView *)arg1;
- (void)webView:(WKWebView *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)webView:(WKWebView *)arg1 didFailNavigation:(WKNavigation *)arg2 withError:(NSError *)arg3;
- (void)webView:(WKWebView *)arg1 didFinishNavigation:(WKNavigation *)arg2;
- (void)webView:(WKWebView *)arg1 didCommitNavigation:(WKNavigation *)arg2;
- (void)webView:(WKWebView *)arg1 didFailProvisionalNavigation:(WKNavigation *)arg2 withError:(NSError *)arg3;
- (void)webView:(WKWebView *)arg1 didReceiveServerRedirectForProvisionalNavigation:(WKNavigation *)arg2;
- (void)webView:(WKWebView *)arg1 didStartProvisionalNavigation:(WKNavigation *)arg2;
- (void)webView:(WKWebView *)arg1 decidePolicyForNavigationResponse:(WKNavigationResponse *)arg2 decisionHandler:(void (^)(long long))arg3;
- (void)webView:(WKWebView *)arg1 decidePolicyForNavigationAction:(WKNavigationAction *)arg2 decisionHandler:(void (^)(long long))arg3;
@end

