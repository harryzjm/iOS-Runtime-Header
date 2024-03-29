//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CLLocation, CLRegion, HMDHome, HMDHomeLocationData, HMFMessageDispatcher, HMFTimer, NSDate, NSObject, NSSet, NSString, NSTimeZone, NSUUID, _HMDPendingRegionUpdate;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomeLocationHandler : HMFObject
{
    struct os_unfair_recursive_lock_s _lock;
    _Bool _firstAccessoryReachable;
    CLLocation *_location;
    NSTimeZone *_timeZone;
    NSString *_isoCountryCode;
    long long _regionStateAtHome;
    long long _regionStateNearbyHome;
    NSDate *_locationUpdateTimestamp;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    HMDHome *_home;
    long long _locationAuthorization;
    CLRegion *_regionAtHome;
    CLRegion *_regionNearbyHome;
    HMFTimer *_homeRegionUpdateTimer;
    _HMDPendingRegionUpdate *_pendingAtHomeRegionUpdate;
    _HMDPendingRegionUpdate *_pendingNearbyHomeRegionUpdate;
    double _coalesceRegionUpdateIntervalInSeconds;
    NSDate *_lastArrival;
    NSDate *_lastExit;
}

+ (id)logCategory;
+ (_Bool)supportsSecureCoding;
+ (_Bool)hasMessageReceiverChildren;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *lastExit; // @synthesize lastExit=_lastExit;
@property(retain, nonatomic) NSDate *lastArrival; // @synthesize lastArrival=_lastArrival;
@property(nonatomic) double coalesceRegionUpdateIntervalInSeconds; // @synthesize coalesceRegionUpdateIntervalInSeconds=_coalesceRegionUpdateIntervalInSeconds;
@property(retain, nonatomic) _HMDPendingRegionUpdate *pendingNearbyHomeRegionUpdate; // @synthesize pendingNearbyHomeRegionUpdate=_pendingNearbyHomeRegionUpdate;
@property(retain, nonatomic) _HMDPendingRegionUpdate *pendingAtHomeRegionUpdate; // @synthesize pendingAtHomeRegionUpdate=_pendingAtHomeRegionUpdate;
@property(retain, nonatomic) HMFTimer *homeRegionUpdateTimer; // @synthesize homeRegionUpdateTimer=_homeRegionUpdateTimer;
@property(nonatomic) _Bool firstAccessoryReachable; // @synthesize firstAccessoryReachable=_firstAccessoryReachable;
@property(retain, nonatomic) CLRegion *regionNearbyHome; // @synthesize regionNearbyHome=_regionNearbyHome;
@property(retain, nonatomic) CLRegion *regionAtHome; // @synthesize regionAtHome=_regionAtHome;
@property(nonatomic) long long locationAuthorization; // @synthesize locationAuthorization=_locationAuthorization;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSDate *locationUpdateTimestamp; // @synthesize locationUpdateTimestamp=_locationUpdateTimestamp;
@property(nonatomic) long long regionStateNearbyHome; // @synthesize regionStateNearbyHome=_regionStateNearbyHome;
@property(nonatomic) long long regionStateAtHome; // @synthesize regionStateAtHome=_regionStateAtHome;
@property(retain, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (long long)__getNearByHomeCalculatedState;
- (long long)__getAtHomeCalculatedState;
- (void)__simulateNearByHomeRegionState:(long long)arg1;
- (void)__simulateAtHomeRegionState:(long long)arg1;
- (id)__initForUnitTesting:(double)arg1 home:(id)arg2 queue:(id)arg3 messageDispatcher:(id)arg4 location:(id)arg5;
- (id)logIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)checkFalsePresence;
- (void)_processPendingRegionStateUpdates;
- (void)timerDidFire:(id)arg1;
- (void)coalesceRegionUpdateState:(long long)arg1 forRegion:(id)arg2;
- (_Bool)updateRegionStateFromLocation:(id)arg1;
- (_Bool)calculateAndUpdateRegionState:(long long)arg1;
- (void)getReachableIPAccessory:(unsigned long long *)arg1 btleAccessory:(unsigned long long *)arg2 mediaAccessory:(unsigned long long *)arg3;
- (void)didDetermineState:(long long)arg1 forRegion:(id)arg2;
- (void)didDetermineBatchLocation:(id)arg1;
- (void)didDetermineLocation:(id)arg1;
- (void)updateHomeLocationFromCoreRoutine;
- (_Bool)isDate:(id)arg1 laterThanDate:(id)arg2;
- (_Bool)isLocation:(id)arg1 closeToLocation:(id)arg2;
@property(readonly, nonatomic) HMDHomeLocationData *locationData;
- (void)_sendLocationUpdateToClients;
- (_Bool)isNewHomeLocationTooCloseToPreviousLocation:(id)arg1 newLocation:(id)arg2;
- (void)runTransactionWithLocation:(id)arg1 updatedTime:(id)arg2 source:(long long)arg3;
- (_Bool)shouldUpdateLocationFromLocationData:(id)arg1;
- (id)_handleHomeLocationDataForHH2:(id)arg1 fromMessage:(id)arg2;
- (id)_handleHomeLocationData:(id)arg1 message:(id)arg2;
- (void)_updateTimeZone:(id)arg1;
- (void)_evaluateHomeRegionStateForCurrentDeviceLocation:(id)arg1;
- (_Bool)_needToExtractBatchLocations;
- (_Bool)_canExtractBatchLocations;
- (void)accessoriesBecomeUnreachable;
- (void)accessoriesBecomeReachable;
- (void)updateHomeLocation;
- (void)_handleRetrieveLocation:(id)arg1;
- (void)_handleLocationAuthorization:(long long)arg1;
- (void)_handleLocationAuthorizationChangedNotification:(id)arg1;
- (_Bool)_shouldRegisterForSignificantRegion;
- (void)_registerForRegionUpdate;
- (void)_registerForMessages;
- (void)configure:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3;
- (void)dealloc;
- (id)init;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

