//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebAllowDenyPolicyListener-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebGeolocationPolicyListener : NSObject <WebAllowDenyPolicyListener>
{
    struct RefPtr<WebCore::Geolocation, WTF::DumbPtrTraits<WebCore::Geolocation>> _geolocation;
    struct RetainPtr<WebView *> _webView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)shouldClearCache;
- (void)denyOnlyThisRequest;
- (void)deny;
- (void)allow;
- (id)initWithGeolocation:(struct Geolocation *)arg1 forWebView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

