//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iAd/NSObject-Protocol.h>

@class NSDictionary, NSObject, UITextSuggestion, WKWebView;
@protocol NSSecureCoding, _WKFocusedElementInfo, _WKFormInputSession;

@protocol _WKInputDelegate <NSObject>

@optional
- (void)_webView:(WKWebView *)arg1 insertTextSuggestion:(UITextSuggestion *)arg2 inInputSession:(id <_WKFormInputSession>)arg3;
- (void)_webView:(WKWebView *)arg1 accessoryViewCustomButtonTappedInFormInputSession:(id <_WKFormInputSession>)arg2;
- (_Bool)_webView:(WKWebView *)arg1 focusShouldStartInputSession:(id <_WKFocusedElementInfo>)arg2;
- (void)_webView:(WKWebView *)arg1 willSubmitFormValues:(NSDictionary *)arg2 userObject:(NSObject<NSSecureCoding> *)arg3 submissionHandler:(void (^)(void))arg4;
- (void)_webView:(WKWebView *)arg1 didStartInputSession:(id <_WKFormInputSession>)arg2;
@end

