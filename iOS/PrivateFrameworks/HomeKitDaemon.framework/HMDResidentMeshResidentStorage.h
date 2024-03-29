//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDResidentDevice, HMDResidentMesh, HMFTimer, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDResidentMeshResidentStorage : HMFObject
{
    HMDResidentMesh *_owner;
    HMDResidentDevice *_residentDevice;
    NSMutableSet *_accessoryUUIDs;
    NSSet *_lastSentAccessoryUUIDs;
    NSMutableDictionary *_metrics;
    NSDictionary *_lastSentMetrics;
    HMFTimer *_transmitTimer;
    NSMutableDictionary *_accessoryListWithLinkQuality;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *accessoryListWithLinkQuality; // @synthesize accessoryListWithLinkQuality=_accessoryListWithLinkQuality;
@property(retain, nonatomic) HMFTimer *transmitTimer; // @synthesize transmitTimer=_transmitTimer;
@property(copy, nonatomic) NSDictionary *lastSentMetrics; // @synthesize lastSentMetrics=_lastSentMetrics;
@property(retain, nonatomic) NSMutableDictionary *metrics; // @synthesize metrics=_metrics;
@property(copy, nonatomic) NSSet *lastSentAccessoryUUIDs; // @synthesize lastSentAccessoryUUIDs=_lastSentAccessoryUUIDs;
@property(retain, nonatomic) NSMutableSet *accessoryUUIDs; // @synthesize accessoryUUIDs=_accessoryUUIDs;
@property(nonatomic) __weak HMDResidentDevice *residentDevice; // @synthesize residentDevice=_residentDevice;
@property(nonatomic) __weak HMDResidentMesh *owner; // @synthesize owner=_owner;
- (void)timerDidFire:(id)arg1;
- (id)logIdentifier;
- (void)_transmitStatus:(_Bool)arg1;
- (id)_buildPayload;
- (void)_transmitAfter:(double)arg1;
- (_Bool)_residentDidChange;
- (void)_removeAccessory:(id)arg1 activateTimer:(_Bool)arg2;
- (void)_addAccessory:(id)arg1 activateTimer:(_Bool)arg2;
- (_Bool)_addAccessoryWithLinkQuality:(id)arg1 toList:(id)arg2;
- (id)initWithResidentDevice:(id)arg1 owner:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

