//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/_HMPrivacySettingsProvider-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _HMPrivacySettingsProvider : NSObject <_HMPrivacySettingsProvider>
{
    unsigned long long _cachedAuthorizationStatus;
}

@property(readonly) unsigned long long cachedAuthorizationStatus; // @synthesize cachedAuthorizationStatus=_cachedAuthorizationStatus;
- (void)requestAccessWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)queryAuthorizationStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
