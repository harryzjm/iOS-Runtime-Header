//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSString, WKWebView, _SFFindOnPageView;

@protocol _SFFindOnPageViewDelegate <NSObject>

@optional
- (void)updateFindCompletionProviderWithMatchesCount:(unsigned long long)arg1 forString:(NSString *)arg2 forFindOnPageView:(_SFFindOnPageView *)arg3;
- (void)visibilityWillChangeForFindOnPageView:(_SFFindOnPageView *)arg1;
- (WKWebView *)webViewForFindOnPageView:(_SFFindOnPageView *)arg1;
@end

