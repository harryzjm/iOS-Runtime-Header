//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, HMSoftwareUpdateDescriptor, NSString;
@protocol HMELastEventStoreReadHandle, HMESubscriptionProviding;

__attribute__((visibility("hidden")))
@interface HMDSoftwareUpdateEventListenerContext : HMFObject
{
    HMDAccessory *_accessory;
    id <HMESubscriptionProviding> _subscriptionProvider;
    id <HMELastEventStoreReadHandle> _eventStoreReadHandle;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) id <HMELastEventStoreReadHandle> eventStoreReadHandle; // @synthesize eventStoreReadHandle=_eventStoreReadHandle;
@property(readonly) id <HMESubscriptionProviding> subscriptionProvider; // @synthesize subscriptionProvider=_subscriptionProvider;
@property(readonly) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
- (id)logIdentifier;
- (void)handleSoftwareUpdateDidBecomeAvailableWithDescriptor:(id)arg1;
@property(readonly) HMSoftwareUpdateDescriptor *softwareUpdateDescriptorForLastEvent;
@property(readonly) long long softwareUpdateStatusForLastEvent;
@property(readonly, copy) NSString *topicForSoftwareUpdateDescriptor;
- (void)updateAppBadgeAndBulletinNotification;
- (void)registerConsumer:(id)arg1 topicFilters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithAccessory:(id)arg1 subscriptionProvider:(id)arg2 eventStoreReadHandle:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

