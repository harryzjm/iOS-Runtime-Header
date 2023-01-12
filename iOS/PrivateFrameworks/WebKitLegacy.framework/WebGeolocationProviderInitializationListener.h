//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebGeolocationProviderInitializationListener : NSObject
{
    struct RefPtr<WebCore::Geolocation, WTF::RawPtrTraits<WebCore::Geolocation>, WTF::DefaultRefDerefTraits<WebCore::Geolocation>> m_geolocation;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)initializationDeniedWebView:(id)arg1;
- (void)initializationAllowedWebView:(id)arg1;
- (id)initWithGeolocation:(NakedRef_f8c98cc9)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

