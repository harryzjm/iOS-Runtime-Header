//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFMessageReceiver-Protocol.h>

@class HMHome, NSArray, NSHashTable, NSNotificationCenter, NSString, NSUUID, _HMContext;
@protocol OS_dispatch_queue;

@interface HMAccessCodeManager : NSObject <HMFLogging, HMFMessageReceiver>
{
    struct hmf_unfair_data_lock_s _lock;
    HMHome *_home;
    _HMContext *_context;
    NSUUID *_UUID;
    NSNotificationCenter *_notificationCenter;
    NSHashTable *_observers;
}

+ (id)logCategory;
+ (id)convertPotentialUniqueIdentifier:(id)arg1 toUUIDForUserInHome:(id)arg2;
+ (id)valueObjectsForAccessCodeModificationRequests:(id)arg1 home:(id)arg2;
+ (id)accessCodeManagerUUIDFromHomeUUID:(id)arg1;
+ (id)accessCodeConstraints;
+ (id)_createAccessCodeWithLength:(long long)arg1;
+ (long long)_accessCodeLengthFromLowerBound:(long long)arg1 upperBound:(long long)arg2;
+ (long long)greatestLowerBoundForAccessCodeLengthFromConstraints:(id)arg1;
+ (long long)leastUpperBoundForAccessCodeLengthFromConstraints:(id)arg1;
+ (id)generateAccessCodeValueFromConstraints:(id)arg1 accessoryAccessCodes:(id)arg2 homeAccessCodes:(id)arg3;
+ (id)generateAccessCodeValueFromConstraints:(id)arg1 existingAccessCodes:(id)arg2;
+ (_Bool)isWeakAccessCode:(id)arg1;
+ (_Bool)doesAccessCode:(id)arg1 conflictWithExistingAccessCodes:(id)arg2;
- (void).cxx_destruct;
@property(readonly) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly) _HMContext *context; // @synthesize context=_context;
@property(readonly) __weak HMHome *home; // @synthesize home=_home;
- (id)logIdentifier;
- (void)_unsubscribe;
- (void)_subscribe;
- (void)_sendMessageWithName:(id)arg1 payload:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)handleDidRemoveHomeAccessCodesMessage:(id)arg1;
- (void)handleDidUpdateHomeAccessCodesMessage:(id)arg1;
- (void)handleDidAddHomeAccessCodesMessage:(id)arg1;
- (void)handleDidRemoveAccessoryAccessCodesMessage:(id)arg1;
- (void)handleDidUpdateAccessoryAccessCodesMessage:(id)arg1;
- (void)handleDidAddAccessoryAccessCodesMessage:(id)arg1;
- (void)handleDaemonReconnectedNotification:(id)arg1;
- (void)fetchCachedAccessoryAccessCodesWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetAccessoryAccessCodesWithValueMatchingHomeAccessCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAccessCode:(id)arg1 forUserWithUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setAccessCode:(id)arg1 forUser:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)generateAccessCodeForUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)submitAccessCodeModificationRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeSimpleLabelAccessCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeHomeAccessCodeWithValue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setUserInformation:(id)arg1 forHomeAccessCodeWithValue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchHomeAccessCodesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAccessCodeConstraintsFromAccessories:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAccessCodesFromAccessories:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSArray *accessoriesSupportingAccessCodes;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)configure;
- (id)initWithHome:(id)arg1 context:(id)arg2 UUID:(id)arg3 notificationCenter:(id)arg4;
- (id)initWithHome:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
