//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDAccessCodeDataManagerDelegate-Protocol.h>

@class HMDAccessCodeDataManager, HMDAccessoryAccessCodeReaderWriter, NSHashTable, NSObject, NSString, NSUUID;
@protocol HMDAccessCodeManagerContext, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessCodeManager : HMFObject <HMDAccessCodeDataManagerDelegate>
{
    _Bool _homeAppForegrounded;
    HMDAccessCodeDataManager *_dataManager;
    id <HMDAccessCodeManagerContext> _context;
    Class _utilities;
    HMDAccessoryAccessCodeReaderWriter *_accessoryReaderWriter;
    NSHashTable *_subscribedClientConnections;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) NSHashTable *subscribedClientConnections; // @synthesize subscribedClientConnections=_subscribedClientConnections;
@property(getter=isHomeAppForegrounded) _Bool homeAppForegrounded; // @synthesize homeAppForegrounded=_homeAppForegrounded;
@property(readonly) HMDAccessoryAccessCodeReaderWriter *accessoryReaderWriter; // @synthesize accessoryReaderWriter=_accessoryReaderWriter;
@property(readonly) Class utilities; // @synthesize utilities=_utilities;
@property(readonly) id <HMDAccessCodeManagerContext> context; // @synthesize context=_context;
@property(readonly) HMDAccessCodeDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (void)accessCodeDataManager:(id)arg1 didRemoveAccessoryAccessCodes:(id)arg2;
- (void)accessCodeDataManager:(id)arg1 didUpdateAccessoryAccessCodes:(id)arg2;
- (void)accessCodeDataManager:(id)arg1 didAddAccessoryAccessCodes:(id)arg2;
- (void)accessCodeDataManager:(id)arg1 didRemoveHomeAccessCodes:(id)arg2 removedByUserUUID:(id)arg3;
- (void)accessCodeDataManager:(id)arg1 didUpdateHomeAccessCodes:(id)arg2 changedByUserUUID:(id)arg3;
- (void)accessCodeDataManager:(id)arg1 didAddHomeAccessCodes:(id)arg2 addedByUserUUID:(id)arg3;
- (id)_waitUntilDataHasSyncedToResidentForAccessoryUUIDs:(id)arg1;
- (id)_waitUntilDataHasSyncedToResidentIfNecessaryForAccessoryUUIDs:(id)arg1;
- (void)_updateAccessoryAccessCodeCache;
- (id)_accessCodeForUserWithUUID:(id)arg1 inHome:(id)arg2;
- (void)_generateNewAccessCodeWithCompletion:(CDUnknownBlockType)arg1;
- (id)_addNewAccessCode:(id)arg1 forUserWithUUID:(id)arg2 toAccessoriesWithUUIDs:(id)arg3 withRetries:(_Bool)arg4;
- (id)_updateAccessCode:(id)arg1 toNewValue:(id)arg2 onAccessoriesWithFetchResponses:(id)arg3 withRetries:(_Bool)arg4;
- (id)_resetAccessCodesForHomeAccessCode:(id)arg1;
- (id)_createNewAccessCodeForUserWithUUID:(id)arg1;
- (void)_notifySubscribersOfMessageWithName:(id)arg1 payload:(id)arg2;
- (void)_generateNewUserAccessCodeForMessage:(id)arg1;
- (void)_resetAccessoryAccessCodesForMessage:(id)arg1;
- (id)_removeAccessCode:(id)arg1 forUserBeingRemoved:(id)arg2;
- (id)_removeAccessCode:(id)arg1 forUser:(id)arg2 removedByUserUUID:(id)arg3;
- (id)_removeAccessCode:(id)arg1 forUserWithUUID:(id)arg2 removedByUserUUID:(id)arg3;
- (void)_setAccessCodeForUserForMessage:(id)arg1;
- (id)_removeAccessCodeFromAccessoriesKeepingiCloudDataUponFailure:(id)arg1 forUserUUID:(id)arg2;
- (void)_removeSimpleLabelAccessCodeMessage:(id)arg1;
- (id)_updateModificationRequestsWithUserOrGuestNames:(id)arg1;
- (void)_submitAccessCodeModificationRequestsForMessage:(id)arg1;
- (void)_fetchAccessCodeConstraintsForMessage:(id)arg1;
- (void)_fetchAccessCodesForMessage:(id)arg1;
- (_Bool)_redispatchToResidentIfNeccesaryForMessage:(id)arg1 withNewResponseHandler:(CDUnknownBlockType)arg2;
- (void)_updateCacheWithModificationRespponses:(id)arg1;
- (_Bool)hasCurrentUserAccessCodeChangedWithChangedAccessCodes:(id)arg1 home:(id)arg2;
- (void)handleHomeDidDisableCharacteristicNotification:(id)arg1;
- (void)handleHomeDidEnableCharacteristicNotification:(id)arg1;
- (void)handleAccessorySupportsAccessCodeDidChangeNotification:(id)arg1;
- (void)handleHomeUserRemovedNotification:(id)arg1;
- (void)handleUserAccessCodeDidChangeMessage:(id)arg1;
- (void)handleConfirmDataHasSyncedToResidentMessage:(id)arg1;
- (void)handleGenerateNewUserAccessCodeMessage:(id)arg1;
- (void)handleResetAccessoryAccessCodesMessage:(id)arg1;
- (void)handleFetchCachedAccessCodesMessage:(id)arg1;
- (void)handleFetchHomeAccessCodesMessage:(id)arg1;
- (void)handleFetchAccessCodeConstraintsMessage:(id)arg1;
- (void)handleFetchAccessCodesMessage:(id)arg1;
- (void)handleRemoveHomeAccessCodeMessage:(id)arg1;
- (void)handleSetUserInformationMessage:(id)arg1;
- (void)handleRemoveSimpleLabelAccessCodeMessage:(id)arg1;
- (void)handleSetAccessCodeForUserMessage:(id)arg1;
- (void)handleSubmitAccessCodeModificationRequestsMessage:(id)arg1;
- (void)handleUnsubscribeMessage:(id)arg1;
- (void)handleSubscribeMessage:(id)arg1;
- (void)fetchAccessCodeForIdentifier:(id)arg1 accessoryUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unconfigure;
- (void)configureWithMessageDispatcher:(id)arg1;
- (id)initWithContext:(id)arg1 utilities:(Class)arg2 accessoryReaderWriter:(id)arg3 dataManager:(id)arg4;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

