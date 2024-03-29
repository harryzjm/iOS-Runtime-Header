//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager, HMDUserNotificationCenter, NAFuture, NSMutableDictionary, NSObject, NSSet, NSString;
@protocol HMDFileManager, HMDUserNotificationCenterSettingsProviding, HMMLogEventSubmitting, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDBulletinBoard : HMFObject
{
    id <HMDFileManager> _fileManager;
    NSSet *_notificationCategories;
    NAFuture *_isConfiguredFuture;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDUserNotificationCenter *_notificationCenter;
    NSMutableDictionary *_notificationRequests;
    NSMutableDictionary *_characteristicTuples;
    HMDHomeManager *_homeManager;
    Class _persistentStoreClass;
    Class _doorbellBulletinUtilitiesClass;
    id <HMMLogEventSubmitting> _logEventSubmitter;
}

+ (id)logCategory;
+ (id)messageForLockUserChangeEvent:(id)arg1 personName:(id)arg2 lockDataType:(unsigned char)arg3 dataOperationType:(unsigned char)arg4 allSlotsCleared:(_Bool)arg5 isAffectedUser:(_Bool)arg6;
+ (id)messageForLockOperationEvent:(id)arg1 personName:(id)arg2 lockOperationType:(unsigned char)arg3;
+ (id)messageForDoorLockAlarmEvent:(id)arg1 alarmCode:(unsigned char)arg2;
+ (_Bool)presentationValueOfCharacteristic:(id)arg1 equalTo:(id)arg2;
+ (id)characteristicTupleKeyFromServiceContextID:(id)arg1 currentType:(id)arg2;
+ (unsigned long long)interruptionLevelForChangedCharacteristic:(id)arg1;
+ (id)createImageAttachmentByHardLinkingFile:(id)arg1 fileManager:(id)arg2;
+ (id)attachmentsWithFileURL:(id)arg1;
+ (id)bulletinSupportedCharacteristicsForService:(id)arg1;
+ (_Bool)isCriticalNonSecureServiceType:(id)arg1;
+ (_Bool)isBulletinSupportedForNonSecureCharacteristicType:(id)arg1 serviceType:(id)arg2;
+ (_Bool)isBulletinSupportedForCharacteristicType:(id)arg1 serviceType:(id)arg2;
+ (id)_supportedNonSecureServices;
+ (id)_supportedSecureServices;
+ (id)notificationCategories;
+ (_Bool)supportsSecureCoding;
+ (id)sharedBulletinBoard;
- (void).cxx_destruct;
@property(retain) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(retain) Class doorbellBulletinUtilitiesClass; // @synthesize doorbellBulletinUtilitiesClass=_doorbellBulletinUtilitiesClass;
@property(retain) Class persistentStoreClass; // @synthesize persistentStoreClass=_persistentStoreClass;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly) NSMutableDictionary *characteristicTuples; // @synthesize characteristicTuples=_characteristicTuples;
@property(retain) NSMutableDictionary *notificationRequests; // @synthesize notificationRequests=_notificationRequests;
@property(readonly) HMDUserNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) NAFuture *isConfiguredFuture; // @synthesize isConfiguredFuture=_isConfiguredFuture;
@property(readonly, copy) NSSet *notificationCategories; // @synthesize notificationCategories=_notificationCategories;
@property(readonly) id <HMDFileManager> fileManager; // @synthesize fileManager=_fileManager;
- (void)notificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_handleDidReceiveNotificationResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateDoorbellUserInfo:(id)arg1 withSignificantEventUserInfo:(id)arg2;
- (void)_submitCameraClipSignificantEventDetailsFromBulletin:(id)arg1;
- (void)_submitDoorbellEventDetailsFromBulletinWithDate:(id)arg1 significantEvents:(id)arg2;
- (id)_copyItemAtURL:(id)arg1 toDirectory:(id)arg2;
- (id)_doorbellPressNotificationsNearDate:(id)arg1 forCameraProfile:(id)arg2;
- (id)notificationRequestsForCameraClipUUIDs:(id)arg1;
- (void)updateMessageForDoorbellPressNotificationRequestWithIdentifier:(id)arg1 cameraProfile:(id)arg2;
- (_Bool)_updateDoorbellPressNotificationsWithSignificantEventBulletin:(id)arg1;
- (_Bool)_shouldPostBulletinOnCurrentValueChangeForCharacteristic:(id)arg1;
- (_Bool)_shouldSkipBulletinForChangedCharacteristic:(id)arg1;
- (void)_updateCharacteristicTupleFor:(id)arg1 withCurrentType:(id)arg2 changedByThisDevice:(_Bool)arg3;
- (_Bool)_hasDuplicateBulletinForSnapshotCharacteristic:(id)arg1;
- (_Bool)_hasDuplicateBulletinForCharacteristic:(id)arg1;
- (id)_insertRequestWithTitle:(id)arg1 snapshotData:(id)arg2 message:(id)arg3 requestIdentifier:(id)arg4 date:(id)arg5 bulletinType:(unsigned long long)arg6 actionURL:(id)arg7 bulletinContext:(id)arg8 actionContext:(id)arg9 interruptionLevel:(unsigned long long)arg10 logEventTopic:(long long)arg11;
- (void)removeImageFilesForNotificationRequests:(id)arg1;
- (void)insertBulletinForLockUserChange:(id)arg1 userDisplayName:(id)arg2 lockDataType:(unsigned char)arg3 dataOperationType:(unsigned char)arg4 allSlotsCleared:(_Bool)arg5 isAffectedUser:(_Bool)arg6;
- (void)insertBulletinForLockOperation:(id)arg1 userDisplayName:(id)arg2 lockOperationType:(unsigned char)arg3 lockOperationSource:(unsigned char)arg4;
- (void)insertBulletinForDoorLockAlarm:(id)arg1 alarmCode:(unsigned char)arg2;
- (void)_insertLockBulletinForChangedCharacteristic:(id)arg1 logEventTopic:(long long)arg2;
- (void)_insertImageBulletinsForChangedCharacteristics:(id)arg1 snapshotData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)removeRedundantSignificantEventNotificationsForSignificantEvents:(id)arg1;
- (id)titleNameForChangedCharacteristic:(id)arg1;
- (id)messageForLockCharacteristic:(id)arg1 personName:(id)arg2;
- (id)messageForChangedCharacteristic:(id)arg1 withSignificantEvents:(id)arg2;
- (void)addNotificationRequest:(id)arg1 forIdentifier:(id)arg2;
- (void)removeNotificationRequestsWithIdentifiers:(id)arg1 shouldDeleteAttachments:(_Bool)arg2;
- (void)removeBulletinsUsingPredicate:(id)arg1;
- (void)cullBulletinsToCount:(unsigned long long)arg1;
- (void)updateContent:(id)arg1 forNotificationWithRequestIdentifier:(id)arg2;
- (id)notificationRequestsSortedByDate;
- (void)removeAllBulletins;
- (void)removeBulletinWithRecordID:(id)arg1;
- (void)removeCameraClipBulletinsForCameraProfile:(id)arg1;
- (void)removeBulletinsForTrigger:(id)arg1;
- (void)removeBulletinsForService:(id)arg1;
- (void)removeBulletinsForAccessory:(id)arg1;
- (void)removeBulletinsForHome:(id)arg1;
- (void)refreshHomeBadgeNumber;
- (void)insertNewRMVLanguageBulletinForHome:(id)arg1 language:(id)arg2;
- (void)fetchAreUserNotificationsEnabledWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateDoorbellPressNotificationsWithSignificantEventBulletin:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)updateBulletinForFirmwareUpdateInHome:(id)arg1;
- (void)insertHH2DuplicateUserModelBulletinForHome:(id)arg1 user:(id)arg2;
- (void)insertHH2SoftwareUpdateCompleteEventBulletinForAccessory:(id)arg1;
- (void)updateAudioAnalysisEventNotification:(id)arg1;
- (void)insertAudioAnalysisEventNotification:(id)arg1;
- (void)insertConnectedCHIPEcosystemsChangedBulletin:(id)arg1;
- (void)insertCameraAccessModeChangedBulletin:(id)arg1;
- (void)insertCameraClipSignificantEventBulletin:(id)arg1;
- (void)removeWalletKeyOnboardingBulletinForHome:(id)arg1;
- (void)insertWalletKeyExpressModeSetUpBulletinForHome:(id)arg1;
- (void)insertWalletKeySupportAddedBulletinForAccessory:(id)arg1;
- (void)insertLockOnboardingBulletinForHome:(id)arg1 serviceType:(id)arg2;
- (void)insertAccessCodeRemovedBulletinForHome:(id)arg1;
- (void)insertAccessCodeChangedBulletinForHome:(id)arg1;
- (void)insertAccessCodeAddedBulletinForHome:(id)arg1;
- (void)insertHomeHubReachabilityBulletinForHome:(id)arg1 reachable:(_Bool)arg2 hasMultipleResidentsSupportingCameraRecording:(_Bool)arg3;
- (void)insertReachabilityEventBulletinForAccessory:(id)arg1 reachable:(_Bool)arg2 date:(id)arg3;
- (id)insertBulletinForSecureTrigger:(id)arg1;
- (void)insertBulletinForIncompatibleInvitationFromInviterName:(id)arg1 homeName:(id)arg2;
- (id)insertBulletinForIncomingInvitation:(id)arg1;
- (void)insertBulletinsForChangedCharacteristics:(id)arg1 changedByThisDevice:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertImageBulletinsForChangedCharacteristics:(id)arg1 snapshotData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)archive;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)configureWithHomeManager:(id)arg1;
@property(readonly, nonatomic) id <HMDUserNotificationCenterSettingsProviding> notificationCenterSettingsProvider;
- (id)initWithNotificationCenter:(id)arg1 fileManager:(id)arg2 workQueue:(id)arg3 logEventSubmitter:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

