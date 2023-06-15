//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessCodeManagerContext, HMFTimer, NSArray, NSSet, NSString;
@protocol HMDAccessCodeDataManagerDelegate;

__attribute__((visibility("hidden")))
@interface HMDAccessCodeDataManager : HMFObject
{
    CDUnknownBlockType _dataCleanUpTimerFactory;
    id <HMDAccessCodeDataManagerDelegate> _delegate;
    HMDAccessCodeManagerContext *_context;
    HMFTimer *_dataCleanUpTimer;
}

+ (id)logCategory;
+ (id)_accessCodeInHome:(id)arg1 forRemovedUserAccessCodeModel:(id)arg2;
+ (id)_accessCodeInHome:(id)arg1 forHomeAccessCodeModel:(id)arg2;
+ (id)userWithAccessCode:(id)arg1 inHome:(id)arg2;
+ (id)createUserAccessCodeModelFromAccessCode:(id)arg1 forUserUUID:(id)arg2 changedByUserUUID:(id)arg3;
+ (id)createRemovedUserInfoModelsFromRemovedUserInfoByAccessCode:(id)arg1 forHome:(id)arg2;
+ (id)createHomeAccessCodeModelsFromLabelsByAccessCode:(id)arg1 forHome:(id)arg2;
- (void).cxx_destruct;
@property(retain) HMFTimer *dataCleanUpTimer; // @synthesize dataCleanUpTimer=_dataCleanUpTimer;
@property(readonly) HMDAccessCodeManagerContext *context; // @synthesize context=_context;
@property(readonly) __weak id <HMDAccessCodeDataManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) CDUnknownBlockType dataCleanUpTimerFactory; // @synthesize dataCleanUpTimerFactory=_dataCleanUpTimerFactory;
- (id)logIdentifier;
- (void)timerDidFire:(id)arg1;
- (void)updateCacheWithRemovedAccessCodes:(id)arg1;
- (void)updateCacheWithUpdatedAccessCodes:(id)arg1;
- (void)updateCacheWithAddedAccessCodes:(id)arg1;
- (void)updateCacheWithFetchResponses:(id)arg1;
- (id)cachedAccessCodeForIdentifier:(id)arg1 accessoryUUID:(id)arg2;
@property(readonly, copy) NSArray *cachedAccessCodes;
- (void)handleRemovedHMDRemovedUserAccessCodeModel:(id)arg1 message:(id)arg2;
- (void)handleUpdatedHMDRemovedUserAccessCodeModel:(id)arg1 message:(id)arg2;
- (void)handleRemovedHomeAccessCodeModel:(id)arg1 message:(id)arg2;
- (void)handleRemovedUserAccessCodeModel:(id)arg1 forUser:(id)arg2 message:(id)arg3;
- (void)handleUpdatedHomeAccessCodeModel:(id)arg1 message:(id)arg2;
- (void)handleUpdatedUserAccessCodeModel:(id)arg1 forUser:(id)arg2 message:(id)arg3;
- (id)removeHMDRemovedUserAccessCodeModel:(id)arg1;
- (id)addOrUpdateHMDRemovedUserAccessCodeModel:(id)arg1;
- (id)removeHMDRemovedUserAccessCodeWithCode:(id)arg1 removedUserInfo:(id)arg2;
- (id)saveRemovedUserAccessCode:(id)arg1 withRemovedUserInfo:(id)arg2;
- (id)removeHomeAccessCodeModel:(id)arg1;
- (id)addOrUpdateHomeAccessCodeModel:(id)arg1;
- (id)removeUserAccessCodeModel:(id)arg1;
- (id)addOrUpdateUserAccessCodeModel:(id)arg1;
@property(readonly, copy) NSSet *accessCodeValuesWithRemovedUserInfo;
@property(readonly, copy) NSSet *accessCodeValuesWithUserLabel;
- (id)userUUIDForAccessCode:(id)arg1;
- (id)simpleLabelForAccessCode:(id)arg1;
@property(readonly, copy) NSSet *accessCodeValuesWithSimpleLabel;
- (id)_removeHMDRemovedUserAccessCodeWithAccessCode:(id)arg1;
- (void)removeHMDRemovedUserAccessCodeWithAccessCode:(id)arg1;
- (void)_cleanUpOldRemovedUserData;
- (id)_removeSimpleLabelAccessCodeValue:(id)arg1;
- (id)_setSimpleLabel:(id)arg1 forAccessCodeValue:(id)arg2;
- (void)_messageUser:(id)arg1 thatTheirAccessCodeWasChangedWithType:(unsigned long long)arg2;
- (id)_removeUserAccessCodeValue:(id)arg1 removedByUserUUID:(id)arg2;
- (id)_setUserWithUUID:(id)arg1 forAccessCodeValue:(id)arg2 changedByUserUUID:(id)arg3;
- (void)_setUpAndStartTimer;
- (id)removeAllHomeAccessCodes;
- (id)updateUserInformation:(id)arg1 forHomeAccessCodeWithOldValue:(id)arg2 newAccessCodeValue:(id)arg3;
- (id)removeHomeAccessCodeWithValue:(id)arg1 removedByUserUUID:(id)arg2;
- (id)setUserInformation:(id)arg1 forHomeAccessCodeWithValue:(id)arg2 changedByUserUUID:(id)arg3;
- (id)homeAccessCodeWithRemovedUserInfoWithUUID:(id)arg1;
@property(readonly, copy) NSArray *homeAccessCodeValuesWithRemovedUserInfo;
@property(readonly, copy) NSArray *homeAccessCodeValuesWithUserLabels;
@property(readonly, copy) NSArray *homeAccessCodeValuesWithSimpleLabels;
@property(readonly, copy) NSArray *homeAccessCodeValues;
- (void)configure;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

