//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDMediaDestinationControllerMetricsEventDispatcher, HMMediaDestinationControllerData, HMMutableMediaDestinationControllerData, NSString;
@protocol HMDMediaDestinationControllerBackingStoreHandlerDelegate;

__attribute__((visibility("hidden")))
@interface HMDMediaDestinationControllerBackingStoreHandler
{
    HMMutableMediaDestinationControllerData *_data;
    struct os_unfair_lock_s _lock;
    id <HMDMediaDestinationControllerBackingStoreHandlerDelegate> _delegate;
    HMDMediaDestinationControllerMetricsEventDispatcher *_metricsEventDispatcher;
}

+ (id)logCategory;
+ (id)backingStoreObjectForData:(id)arg1;
- (void).cxx_destruct;
@property(retain) HMDMediaDestinationControllerMetricsEventDispatcher *metricsEventDispatcher; // @synthesize metricsEventDispatcher=_metricsEventDispatcher;
@property __weak id <HMDMediaDestinationControllerBackingStoreHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdatedSupportedOptions:(unsigned long long)arg1 message:(id)arg2;
- (void)transactionObjectUpdatedAvailableDestinationIdentifiers:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdatedDestinationIdentifier:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)notifyDidUpdateAvailableDestinationIdentifiers:(id)arg1;
- (void)notifyDidUpdateDestinationIdentifier:(id)arg1;
- (void)updateSupportedOptions:(unsigned long long)arg1;
- (void)updateAvailableDestinationIdentifiers:(id)arg1;
- (void)updateDestinationIdentifier:(id)arg1;
@property(readonly, copy) HMMediaDestinationControllerData *data;
- (void)recoverDueToInvalidRecordInCloudWithHome:(id)arg1 migrationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)migrateWithCurrentCloudRecord:(id)arg1 home:(id)arg2 cloudZone:(id)arg3 migrationQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)recoverDueToNoRecordInCloudWithHome:(id)arg1 migrationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)migrateWithHome:(id)arg1 cloudZone:(id)arg2 migrationQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)mergeData:(id)arg1;
- (void)removeControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateAvailableDestinationIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateSupportedOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateDestinationIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithData:(id)arg1 backingStore:(id)arg2 metricsEventDispatcher:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

