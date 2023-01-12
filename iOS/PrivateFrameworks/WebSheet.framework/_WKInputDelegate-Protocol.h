//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebSheet/NSObject-Protocol.h>

@class NSDictionary, NSObject, UITextSuggestion, UIView, WKWebView;
@protocol NSSecureCoding, _WKFocusedElementInfo, _WKFormInputSession;

@protocol _WKInputDelegate <NSObject>

@optional
- (UIView *)_webView:(WKWebView *)arg1 focusedElementContextViewForInputSession:(id <_WKFormInputSession>)arg2;
- (double)_webView:(WKWebView *)arg1 focusedElementContextViewHeightForFittingSize:(struct CGSize)arg2 inputSession:(id <_WKFormInputSession>)arg3;
- (_Bool)_webView:(WKWebView *)arg1 shouldRevealFocusOverlayForInputSession:(id <_WKFormInputSession>)arg2;
- (NSDictionary *)_webViewAdditionalContextForStrongPasswordAssistance:(WKWebView *)arg1;
- (_Bool)_webView:(WKWebView *)arg1 focusRequiresStrongPasswordAssistance:(id <_WKFocusedElementInfo>)arg2;
- (void)_webView:(WKWebView *)arg1 willStartInputSession:(id <_WKFormInputSession>)arg2;
- (void)_webView:(WKWebView *)arg1 insertTextSuggestion:(UITextSuggestion *)arg2 inInputSession:(id <_WKFormInputSession>)arg3;
- (void)_webView:(WKWebView *)arg1 accessoryViewCustomButtonTappedInFormInputSession:(id <_WKFormInputSession>)arg2;
- (long long)_webView:(WKWebView *)arg1 decidePolicyForFocusedElement:(id <_WKFocusedElementInfo>)arg2;
- (_Bool)_webView:(WKWebView *)arg1 focusShouldStartInputSession:(id <_WKFocusedElementInfo>)arg2;
- (void)_webView:(WKWebView *)arg1 willSubmitFormValues:(NSDictionary *)arg2 userObject:(NSObject<NSSecureCoding> *)arg3 submissionHandler:(void (^)(void))arg4;
- (void)_webView:(WKWebView *)arg1 didStartInputSession:(id <_WKFormInputSession>)arg2;
@end

