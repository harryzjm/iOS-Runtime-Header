//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthKitUI/NSObject-Protocol.h>

@class AKIDPHandler, WKWebView;

@protocol AKIDPHandlerDelegate <NSObject>

@optional
- (void)IDPHandler:(AKIDPHandler *)arg1 didFinishLoadingPageInWebView:(WKWebView *)arg2;
- (void)IDPHandler:(AKIDPHandler *)arg1 didStartLoadingPageInWebView:(WKWebView *)arg2;
@end

