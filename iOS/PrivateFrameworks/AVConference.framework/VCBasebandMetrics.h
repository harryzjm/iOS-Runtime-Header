//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCRateControlMediaController;

__attribute__((visibility("hidden")))
@interface VCBasebandMetrics : NSObject
{
    VCRateControlMediaController *_mediaController;
    CDStruct_b203c80d _lastBasebandNotification;
    double _bdcd;
    double _normalizedBDCD;
    double _normalizedDelay;
    _Bool _isBDCDListReady;
    _Bool _useAverageQueueDepthForDelay;
    struct {
        double time[15];
        double bdcd[15];
        double delay[15];
        int frontIndex;
        int rearIndex;
        unsigned int size;
    } _bdcdList;
    struct {
        double time[15];
        unsigned int transmittedBytes[15];
        unsigned int nonFlushableQueueDepth[15];
        int frontIndex;
        int rearIndex;
        unsigned int size;
    } _infoList;
    unsigned int _targetBitrate;
    unsigned int _txBitrate;
    unsigned int _averageBitrate;
    unsigned int _previousAverageBitrate;
    unsigned int _averageBitrateShort;
    unsigned int _averageBitrateLong;
    double _averageQueueDepth;
    double _expectedQueuingDelay;
    double _expectedQueuingDelayLong;
    double _averageBitrateMovingAverageFactor;
    _Bool _isTargetBitrateStabilized;
    _Bool _resetAverageBitrateLong;
    void *_logBasebandDump;
}

@property(retain, nonatomic) VCRateControlMediaController *mediaController; // @synthesize mediaController=_mediaController;
@property(nonatomic) _Bool isTargetBitrateStabilized; // @synthesize isTargetBitrateStabilized=_isTargetBitrateStabilized;
@property(nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
- (void)enableBasebandLogDump:(void *)arg1;
- (void)addBDCDListWithNotificationArrivalTime:(double)arg1 bdcd:(double)arg2 queuingDelay:(double)arg3;
- (void)resetBBNoteHistoryList;
- (void)resetBDCDList;
- (void)normalizeBDCD:(double)arg1;
- (double)updateTotalQueueDepth:(unsigned int)arg1;
- (void)calculateBitratesAndDelaysWithTotalQueueDepth:(unsigned int)arg1;
- (void)addInfoListWithNotification:(CDStruct_b203c80d *)arg1;
- (struct tagVCStatisticsMessage)getBasebandMetricsWithNotification:(CDStruct_b203c80d *)arg1;
- (void)dealloc;
- (id)init;

@end

