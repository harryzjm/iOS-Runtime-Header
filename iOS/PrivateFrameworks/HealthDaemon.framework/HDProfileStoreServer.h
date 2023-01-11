//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDProfileManagerObserver-Protocol.h>
#import <HealthDaemon/HKProfileStoreServer-Protocol.h>

@class HDProfileManager, NSString;

@interface HDProfileStoreServer <HKProfileStoreServer, HDProfileManagerObserver>
{
}

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)profileListDidChange;
- (void)remote_startObservingWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_setDisplayImageData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_fetchDisplayImageData:(CDUnknownBlockType)arg1;
- (void)remote_fetchDisplayNameWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_profileIdentifierForNRDeviceUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_setDisplayFirstName:(id)arg1 lastName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_getAllProfilesWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_deleteProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_createProfileOfType:(long long)arg1 displayName:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly) HDProfileManager *profileManager;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
