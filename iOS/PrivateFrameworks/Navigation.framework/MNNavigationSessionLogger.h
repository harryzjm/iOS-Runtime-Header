//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSHashTable, NSMutableDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface MNNavigationSessionLogger : NSObject
{
    NSUUID *_lastGuidanceSignID;
    NSArray *_lastARInfos;
    NSError *_previousSuppressedRerouteError;
    NSMutableDictionary *_displayETALookup;
    NSHashTable *_activeCameraInfos;
}

- (void).cxx_destruct;
- (id)_stringForStyleAttributeKey:(unsigned int)arg1;
- (void)_updateCameraStyleAttributesForLocation:(id)arg1;
- (id)_stringForLocationType:(unsigned long long)arg1;
- (void)navigationSession:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)navigationSession:(id)arg1 updateSignsWithARInfo:(id)arg2;
- (void)navigationSession:(id)arg1 updateSignsWithInfo:(id)arg2;
- (void)navigationSession:(id)arg1 didRemoveWaypoint:(id)arg2;
- (void)navigationSession:(id)arg1 didInsertWaypoint:(id)arg2;
- (void)navigationSession:(id)arg1 didRerouteWithWaypoints:(id)arg2;
- (void)navigationSession:(id)arg1 didUpdateDestination:(id)arg2;
- (void)navigationSession:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
- (void)navigationSession:(id)arg1 didFailRerouteWithError:(id)arg2;
- (void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5;
- (void)navigationSessionDidCancelReroute:(id)arg1;
- (void)navigationSession:(id)arg1 didSuppressReroute:(id)arg2;
- (void)navigationSessionWillReroute:(id)arg1;
- (void)navigationSession:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;
- (void)navigationSession:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3 batteryChargeInfo:(id)arg4;
- (void)navigationSessionDidArrive:(id)arg1;
- (void)navigationSessionDidEnterPreArrivalState:(id)arg1;
- (void)navigationSession:(id)arg1 didUpdateTargetLegIndex:(unsigned long long)arg2;
- (void)navigationSession:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 reason:(unsigned long long)arg4;
- (void)navigationSession:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationSession:(id)arg1 didStopWithReason:(unsigned long long)arg2;
- (void)navigationSession:(id)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationSession:(id)arg1 didStartWithRoute:(id)arg2 navigationType:(long long)arg3 isResumingMultipointRoute:(_Bool)arg4 isReconnecting:(_Bool)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

