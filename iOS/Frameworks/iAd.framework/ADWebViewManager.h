//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADWebView;

@interface ADWebViewManager : NSObject
{
    ADWebView *_preallocatedWebView;
}

+ (id)sharedManager;
@property(retain, nonatomic) ADWebView *preallocatedWebView; // @synthesize preallocatedWebView=_preallocatedWebView;
- (void)preallocateWebViewWithBackgroundPriority;
- (id)creativeView;
- (id)_webViewForCreative;
- (void)dealloc;

@end

