//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessage.h>

@class NSString;

@interface HMFMessage (IPCUtils)
+ (id)entitledMessageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3;
+ (id)entitledMessageWithName:(id)arg1 messagePayload:(id)arg2;
@property(readonly, copy, nonatomic) NSString *effectiveLocationBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *teamIdentifier;
@property(readonly, copy, nonatomic) NSString *companionAppBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *applicationBundleIdentifier;
@property(readonly, nonatomic) int sourcePid;
@property(readonly, nonatomic, getter=isBackground) _Bool background;
@property(readonly, nonatomic, getter=isAuthorizedForLocationAccess) _Bool authorizedForLocationAccess;
@property(readonly, nonatomic, getter=isEntitledForBackgroundMode) _Bool entitledForBackgroundMode;
@property(readonly, nonatomic, getter=isAuthorizedForMicrophoneAccess) _Bool authorizedForMicrophoneAccess;
@property(readonly, nonatomic, getter=isAuthorizedForHomeDataAccess) _Bool authorizedForHomeDataAccess;
@property(readonly, nonatomic, getter=isEntitledForSPIAccess) _Bool entitledForSPIAccess;
@property(readonly, nonatomic, getter=isEntitledForAPIAccess) _Bool entitledForAPIAccess;
- (id)proxyConnection;
@property(readonly, nonatomic) _Bool requiresSPIEntitlement;
@end
