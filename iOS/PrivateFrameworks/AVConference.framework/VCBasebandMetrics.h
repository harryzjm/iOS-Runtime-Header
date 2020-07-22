//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCBasebandMetrics : NSObject
{
    CDStruct_f402fb06 _lastBasebandNotification;
    double _bdcd;
    double _normalizedBDCD;
    double _normalizedDelay;
    _Bool _isBDCDListReady;
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
        int frontIndex;
        int rearIndex;
        unsigned int size;
    } _infoList;
    unsigned int _targetBitrate;
    unsigned int _txBitrate;
    unsigned int _averageBitrate;
    unsigned int _previousAverageBitrate;
    unsigned int _averageBitrateLong;
    double _expectedQueuingDelay;
    double _expectedQueuingDelayLong;
    _Bool _isTargetBitrateStabilized;
    _Bool _resetAverageBitrateLong;
    void *_logBasebandDump;
}

@property(nonatomic) _Bool isTargetBitrateStabilized; // @synthesize isTargetBitrateStabilized=_isTargetBitrateStabilized;
@property(nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
- (void)enableBasebandLogDump:(void *)arg1;
- (void)addBDCDListWithNotificationArrivalTime:(double)arg1 bdcd:(double)arg2 queuingDelay:(double)arg3;
- (void)resetBDCDList;
- (void)normalizeBDCD:(double)arg1;
- (void)calculateBitratesAndDelays:(unsigned int)arg1 totalQueueDepth:(unsigned int)arg2;
- (void)addInfoListWithNotificationArrivalTime:(double)arg1 transmittedBytes:(unsigned int)arg2;
- (CDStruct_5cb394a5)getBasebandMetricsWithNotification:(CDStruct_f402fb06 *)arg1;

@end
