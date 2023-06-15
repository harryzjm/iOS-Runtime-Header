//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDMediaDestinationControllerMetricsEventDispatcher, NSString;
@protocol HMDMediaDestinationControllerMessageHandlerDataSource, HMDMediaDestinationControllerMessageHandlerDelegate;

__attribute__((visibility("hidden")))
@interface HMDMediaDestinationControllerMessageHandler
{
    id <HMDMediaDestinationControllerMessageHandlerDataSource> _dataSource;
    id <HMDMediaDestinationControllerMessageHandlerDelegate> _delegate;
    HMDMediaDestinationControllerMetricsEventDispatcher *_metricsEventDispatcher;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(retain) HMDMediaDestinationControllerMetricsEventDispatcher *metricsEventDispatcher; // @synthesize metricsEventDispatcher=_metricsEventDispatcher;
@property __weak id <HMDMediaDestinationControllerMessageHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDMediaDestinationControllerMessageHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;
- (void)handleMediaGroupsAggregateConsumerUpdatedAggregateDataNotification:(id)arg1;
- (void)handleMediaDestinationControllerUpdatedDestinationNotification:(id)arg1;
- (void)handleNotificationAccessoryChangedRoom:(id)arg1;
- (void)handleMediaSystemRemovedNotification:(id)arg1;
- (void)handleMediaSystemAddedNotification:(id)arg1;
- (void)handleHomeAccessoryRemovedNotification:(id)arg1;
- (void)handleMediaDestinationUpdatedNotification:(id)arg1;
- (void)handleMediaDestinationControllerUpdateDestinationRequestMessage:(id)arg1;
- (unsigned long long)upateOptionsInMessage:(id)arg1 error:(id *)arg2;
- (id)destinationIdentifierInMessage:(id)arg1 error:(id *)arg2;
- (void)notifyUpdatedDestinationWithIdentifier:(id)arg1;
- (id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 metricsEventDispatcher:(id)arg4 targetDevice:(_Bool)arg5 dataSource:(id)arg6 delegate:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

