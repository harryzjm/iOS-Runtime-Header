//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCharacteristicsAvailabilityListener, HMDHAPAccessory, NSNotificationCenter, NSObject, NSSet, NSString;
@protocol HMDCameraRecordingSessionNotificationTriggerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingSessionNotificationTrigger : HMFObject
{
    NSString *_logIdentifier;
    id <HMDCameraRecordingSessionNotificationTriggerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDHAPAccessory *_cameraAccessory;
    HMDCharacteristicsAvailabilityListener *_availabilityListener;
    NSNotificationCenter *_notificationCenter;
    NSSet *_availableCharacteristics;
    NSString *_clientIdentifier;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, copy) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain) NSSet *availableCharacteristics; // @synthesize availableCharacteristics=_availableCharacteristics;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) HMDCharacteristicsAvailabilityListener *availabilityListener; // @synthesize availabilityListener=_availabilityListener;
@property(readonly) __weak HMDHAPAccessory *cameraAccessory; // @synthesize cameraAccessory=_cameraAccessory;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMDCameraRecordingSessionNotificationTriggerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (void)listener:(id)arg1 didUpdateAvailableCharacteristics:(id)arg2;
- (void)handleCharacteristicsValueUpdated:(id)arg1;
- (void)handleAccessoryConfigured:(id)arg1;
- (void)_handleObservedCharacteristicsValueUpdate:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)initWithCamera:(id)arg1 workQueue:(id)arg2 availabilityListener:(id)arg3 notificationCenter:(id)arg4;
- (id)initWithCamera:(id)arg1 workQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

