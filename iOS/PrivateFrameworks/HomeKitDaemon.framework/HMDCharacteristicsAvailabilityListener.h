//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHAPAccessory, HMDNotificationRegistration, NSDictionary, NSObject, NSSet, NSString;
@protocol HMDCharacteristicsAvailabilityListenerDelegate, OS_dispatch_queue;

@interface HMDCharacteristicsAvailabilityListener : HMFObject <HMFLogging>
{
    NSSet *_availableCharacteristics;
    NSDictionary *_interestedCharacteristicTypesByServiceType;
    id <HMDCharacteristicsAvailabilityListenerDelegate> _delegate;
    HMDHAPAccessory *_accessory;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDNotificationRegistration *_notificationRegistration;
    NSString *_logIdentifier;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly) HMDNotificationRegistration *notificationRegistration; // @synthesize notificationRegistration=_notificationRegistration;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property __weak id <HMDCharacteristicsAvailabilityListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSDictionary *interestedCharacteristicTypesByServiceType; // @synthesize interestedCharacteristicTypesByServiceType=_interestedCharacteristicTypesByServiceType;
@property(copy) NSSet *availableCharacteristics; // @synthesize availableCharacteristics=_availableCharacteristics;
- (void)handleServicesUpdated:(id)arg1;
- (void)handleCharacteristicsUpdated:(id)arg1;
- (void)_notifyDelegate;
- (id)_accessoryCharacteristicsToObserve;
- (void)_registerForNotifications;
- (void)start;
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 interestedCharacteristicTypesByServiceType:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
