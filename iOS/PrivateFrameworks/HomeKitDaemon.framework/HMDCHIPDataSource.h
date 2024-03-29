//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager, HMDUIDialogPresenter, HMFTimer, HMMTRAttestationDataStore, HMMTRResidentStateManager, HMMTRStorage, HMMTRUIDialogPresenter, HMMTRVendorMetadataStore, NSDictionary, NSNotificationCenter, NSNumber, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDCHIPDataSource : HMFObject
{
    HMDHomeManager *_homeManager;
    HMMTRVendorMetadataStore *_vendorMetadataStore;
    HMMTRAttestationDataStore *_attestationDataStore;
    HMMTRUIDialogPresenter *_uiDialogPresenter;
    NSNotificationCenter *_notificationCenter;
    HMFTimer *_vendorMetadataRefreshTimer;
    HMFTimer *_attestationDataRefreshTimer;
    HMDUIDialogPresenter *_dialogPresenter;
    HMMTRResidentStateManager *_chipResidentStateManager;
    HMMTRStorage *_chipStorage;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(retain) HMMTRStorage *chipStorage; // @synthesize chipStorage=_chipStorage;
@property(retain) HMMTRResidentStateManager *chipResidentStateManager; // @synthesize chipResidentStateManager=_chipResidentStateManager;
@property(readonly) HMDUIDialogPresenter *dialogPresenter; // @synthesize dialogPresenter=_dialogPresenter;
@property(readonly) HMFTimer *attestationDataRefreshTimer; // @synthesize attestationDataRefreshTimer=_attestationDataRefreshTimer;
@property(readonly) HMFTimer *vendorMetadataRefreshTimer; // @synthesize vendorMetadataRefreshTimer=_vendorMetadataRefreshTimer;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain) HMMTRUIDialogPresenter *uiDialogPresenter; // @synthesize uiDialogPresenter=_uiDialogPresenter;
@property(retain) HMMTRAttestationDataStore *attestationDataStore; // @synthesize attestationDataStore=_attestationDataStore;
@property(retain) HMMTRVendorMetadataStore *vendorMetadataStore; // @synthesize vendorMetadataStore=_vendorMetadataStore;
@property __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (void)browser:(id)arg1 didRemoveAccessoryPairingWithNodeID:(id)arg2;
- (void)requestUserPermissionForUnauthenticatedAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)timerDidFire:(id)arg1;
- (id)storageDataSourceForFabricWithID:(id)arg1;
@property(readonly, copy) NSNumber *currentFabricID;
@property(readonly, copy, nonatomic) NSSet *allFabricIDs;
@property(readonly, copy, nonatomic) NSSet *allPairedHAPServerIdentifiers;
@property(readonly, getter=isCurrentDevicePrimaryResident) _Bool currentDevicePrimaryResident;
- (void)handleHomeRemovedNotification:(id)arg1;
- (void)handleAccessoryCHIPStorageChangedNotification:(id)arg1;
- (void)handleHomeCHIPStorageChangedNotification:(id)arg1;
- (void)handleDataReadyAfterBecomingPrimaryNotification:(id)arg1;
- (void)handlePrimaryResidentUpdatedNotification:(id)arg1;
- (id)homeWithCHIPFabricID:(id)arg1;
- (id)home;
- (void)configureWithUIDialogPresenter:(id)arg1;
- (void)configureWithAttestationDataStore:(id)arg1;
- (void)configureWithVendorMetadataStore:(id)arg1;
- (void)configureWithStorage:(id)arg1;
- (void)configureWithResidentStateManager:(id)arg1;
- (void)configureWithAccessoryServerBrowser:(id)arg1;
@property(readonly, copy) NSNumber *pairingTargetFabricIndex;
- (id)initWithHomeManager:(id)arg1 notificationCenter:(id)arg2 vendorMetadataRefreshTimer:(id)arg3 attestationDataRefreshTimer:(id)arg4 dialogPresenter:(id)arg5;
- (id)initWithHomeManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSDictionary *keyValueStore;
@property(readonly) Class superclass;

@end

