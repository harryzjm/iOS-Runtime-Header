//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, VCRateControlBandwidthEstimatorMap, VCRateControlOWRDEstimator, VCRateControlServerBag, VCStatisticsCollectorQueue, VCStatisticsHistory;

__attribute__((visibility("hidden")))
@interface AVCStatisticsCollector : NSObject
{
    NSMutableDictionary *_statistics;
    struct tagVCStatisticsCollection *_statisticsCollection;
    NSMutableDictionary *_statisticChangeHandlerDictionary;
    NSDictionary *_statisticChangeHandlerDictionaryCache;
    _Bool _isStatisticChangeHandlerDictionaryModified;
    VCRateControlBandwidthEstimatorMap *_bandwidthEstimatorMap;
    VCRateControlOWRDEstimator *_owrdEstimator;
    VCStatisticsHistory *_history;
    VCStatisticsCollectorQueue *_queue;
    int _forceQueueWaitTimeMs;
    double _previousProcessTime;
    unsigned int _radioAccessTechnology;
    unsigned int _mode;
    _Bool _useExternalThread;
    unsigned int _sharedEstimatedBandwidth;
    unsigned int _sharedEstimatedBandwidthUncapped;
    unsigned int _sharedRemoteEstimatedBandwidth;
    unsigned int _maxVideoLocalBurstyLoss;
    unsigned int _maxAudioLocalBurstyLoss;
    unsigned int _remotePacketReceivedAudio;
    unsigned int _remotePacketReceivedVideo;
    unsigned int _estimatedBandwidthCap;
    unsigned int _expectedBitrate;
    unsigned char _mediaControlInfoFECFeedbackVersion;
    _Bool _fastSuddenBandwidthDetectionEnabled;
    VCRateControlServerBag *_serverBag;
    double _packetReceivedOWRD;
    struct _opaque_pthread_rwlock_t _statisticsCollectionLock;
}

@property(retain, nonatomic) VCRateControlServerBag *serverBag; // @synthesize serverBag=_serverBag;
@property(nonatomic) _Bool fastSuddenBandwidthDetectionEnabled; // @synthesize fastSuddenBandwidthDetectionEnabled=_fastSuddenBandwidthDetectionEnabled;
@property(nonatomic) unsigned char mediaControlInfoFECFeedbackVersion; // @synthesize mediaControlInfoFECFeedbackVersion=_mediaControlInfoFECFeedbackVersion;
@property(nonatomic) unsigned int expectedBitrate; // @synthesize expectedBitrate=_expectedBitrate;
@property(nonatomic) unsigned int estimatedBandwidthCap; // @synthesize estimatedBandwidthCap=_estimatedBandwidthCap;
@property(readonly, nonatomic) unsigned int sharedRemoteEstimatedBandwidth; // @synthesize sharedRemoteEstimatedBandwidth=_sharedRemoteEstimatedBandwidth;
@property(readonly, nonatomic) unsigned int sharedEstimatedBandwidthUncapped; // @synthesize sharedEstimatedBandwidthUncapped=_sharedEstimatedBandwidthUncapped;
@property(readonly, nonatomic) unsigned int sharedEstimatedBandwidth; // @synthesize sharedEstimatedBandwidth=_sharedEstimatedBandwidth;
@property(nonatomic) unsigned int radioAccessTechnology; // @synthesize radioAccessTechnology=_radioAccessTechnology;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
- (void)addMostBurstyLossInfo:(CDStruct_56e8fa21 *)arg1;
- (void)addRoundTripTimeInfo:(CDStruct_56e8fa21 *)arg1;
- (void)addActualBitrateInfo:(CDStruct_56e8fa21 *)arg1;
- (void)addPacketLossInfo:(CDStruct_56e8fa21 *)arg1;
- (void)computeOWRDEstimation:(CDStruct_56e8fa21 *)arg1;
- (void)computeBWEstimation:(CDStruct_56e8fa21 *)arg1;
- (void)updateLocalEstimatedBandwidth;
- (void)recordRemoteEstimatedBandwidthForLargeFrameInfo:(CDStruct_56e8fa21 *)arg1;
- (void)updateMaxLocalBurstyLoss:(unsigned int)arg1 isAudio:(_Bool)arg2;
- (void)updatePacketReceivedCount:(CDStruct_56e8fa21 *)arg1;
- (void)computeOtherStatistics:(CDStruct_56e8fa21 *)arg1;
- (void)addStatisticsHistory:(CDStruct_56e8fa21 *)arg1;
- (void)addEntriesFromStatistics:(CDStruct_56e8fa21)arg1;
- (void)updateStatisticChangeHandlerDictionaryCache;
- (void)processVCStatisticsInternal:(CDStruct_56e8fa21)arg1;
- (CDStruct_56e8fa21)getVCStatisticsWithType:(int)arg1 time:(double)arg2;
- (_Bool)shouldProcessAtTime:(double)arg1;
- (void)drainAndProcessVCStatistics:(CDStruct_56e8fa21)arg1;
- (void)setVCStatistics:(CDStruct_56e8fa21)arg1;
- (void)unregisterAllStatisticsChangeHandlers;
- (void)registerStatisticsChangeHandlerWithType:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)enableBWELogDump:(void *)arg1;
- (id)getStatistics:(id)arg1;
- (void)setStatistics:(id)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initForSimulation:(_Bool)arg1 useExternalThread:(_Bool)arg2;
- (id)init;

@end
