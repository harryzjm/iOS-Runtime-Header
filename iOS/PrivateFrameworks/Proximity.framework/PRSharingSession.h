//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Proximity/PRBeaconDelegate-Protocol.h>
#import <Proximity/PRProximityEstimatorDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSSet, NSSortDescriptor, NSString, PRBeacon, PRProximityEstimator;
@protocol OS_dispatch_queue, OS_os_log, PRSharingSessionDelegate;

@interface PRSharingSession : NSObject <PRProximityEstimatorDelegate, PRBeaconDelegate>
{
    _Bool _currentlyInitiating;
    NSObject<OS_os_log> *_logger;
    NSSet *_contacts;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableDictionary *_trackedBTPeers;
    NSMutableDictionary *_trackedBTPeersDevice;
    PRProximityEstimator *_btProxEstimator;
    PRBeacon *_nearbyDaemonSession;
    _Bool _needToRestart;
    NSMutableDictionary *_scores;
    double _lastScoreReportMachContinuousTime;
    NSArray *_lastReportedScores;
    struct SharingImportanceMeasurements _measurements;
    _Bool _useRegionBasedEstimator;
    NSSortDescriptor *_scoreSortDescriptor;
    double _halfPointingAngleDegrees;
    _Bool _outputScoreCalculatedWithAngle;
    struct unique_ptr<SharingImportanceManager, std::__1::default_delete<SharingImportanceManager>> _estimatorRangeOnly;
    struct unique_ptr<SharingImportanceManager, std::__1::default_delete<SharingImportanceManager>> _estimatorRangeAndAngle;
    CDUnknownBlockType _reportWatchdog;
    id <PRSharingSessionDelegate> _delegate;
}

+ (id)reverseNSData:(id)arg1;
+ (id)convertMacStringToNSData:(const basic_string_a1f69cfb *)arg1;
+ (unsigned long long)NSDataToUInt64:(id)arg1;
+ (basic_string_a1f69cfb)UIntToHexString:(unsigned long long)arg1 len:(unsigned long long)arg2;
+ (id)HexStringToNSDataMac:(const basic_string_a1f69cfb *)arg1;
+ (id)UUIDStringToNSDataMac:(const basic_string_a1f69cfb *)arg1 len:(unsigned long long)arg2;
+ (id)UUIDToNSDataMac:(id)arg1 len:(unsigned long long)arg2;
+ (id)NSDataMacToUUID:(id)arg1;
@property __weak id <PRSharingSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)invokeDelegateBlock:(CDUnknownBlockType)arg1;
- (long long)CoarseRangeToProx:(int)arg1;
- (id)ProxToString:(long long)arg1;
- (int)ProxToCoarseRange:(long long)arg1;
- (void)didFailWithError:(id)arg1;
- (void)beacon:(id)arg1 didFailWithError:(id)arg2;
- (void)beacon:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)beacon:(id)arg1 didOutputRangeResults:(id)arg2;
- (void)estimator:(id)arg1 didEstimateProximity:(long long)arg2 toPeer:(id)arg3;
- (void)logScores:(id)arg1;
- (void)updateScoresWithNewMeasurement:(const struct NeighborMeasurements *)arg1;
- (void)updateScoresForTime:(double)arg1;
- (void)reportScoresToClientAlways:(_Bool)arg1;
- (void)stopProx;
- (_Bool)trackNewBTPeer:(id)arg1 withDviceModel:(id)arg2 error:(id *)arg3;
- (_Bool)addRssiSample:(double)arg1 channel:(unsigned int)arg2 forPeer:(id)arg3 peerDeviceModel:(id)arg4 withError:(id *)arg5;
- (void)stopInitiating;
- (void)startInitiating;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)startWatchDogWithDuration:(long long)arg1;
- (void)watchDogTimedOut;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
