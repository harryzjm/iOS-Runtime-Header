//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <Preferences/UIWebViewDelegate-Protocol.h>

@class NSData, NSString, UIWebView;

@interface PSWebContainerView : UIView <UIWebViewDelegate>
{
    UIWebView *_webView;
    NSData *_content;
}

@property(retain, nonatomic) NSData *content; // @synthesize content=_content;
@property(readonly, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (_Bool)uiWebView:(id)arg1 previewIsAllowedForPosition:(struct CGPoint)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (double)heightForWidth:(double)arg1;
- (void)layoutSubviews;
- (void)setUserStyleSheet:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

