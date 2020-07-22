//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <coreroutine/NSCopying-Protocol.h>

@interface RTLocationAwarenessManagerConfig : NSObject <NSCopying>
{
    double _heartbeatIntervalResolution;
    double _maxHeartbeatInterval;
    double _dispatchTimerLeeway;
    double _requiredHorizontalAccuracy;
    double _activeDuration;
    double _minMetricSubmissionAge;
    double _maxHorizontalAccuracyForCoarseLocation;
}

@property(readonly, nonatomic) double maxHorizontalAccuracyForCoarseLocation; // @synthesize maxHorizontalAccuracyForCoarseLocation=_maxHorizontalAccuracyForCoarseLocation;
@property(readonly, nonatomic) double minMetricSubmissionAge; // @synthesize minMetricSubmissionAge=_minMetricSubmissionAge;
@property(readonly, nonatomic) double activeDuration; // @synthesize activeDuration=_activeDuration;
@property(readonly, nonatomic) double requiredHorizontalAccuracy; // @synthesize requiredHorizontalAccuracy=_requiredHorizontalAccuracy;
@property(readonly, nonatomic) double dispatchTimerLeeway; // @synthesize dispatchTimerLeeway=_dispatchTimerLeeway;
@property(readonly, nonatomic) double maxHeartbeatInterval; // @synthesize maxHeartbeatInterval=_maxHeartbeatInterval;
@property(readonly, nonatomic) double heartbeatIntervalResolution; // @synthesize heartbeatIntervalResolution=_heartbeatIntervalResolution;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithHeartbeatIntervalResolution:(double)arg1 maxHeartbeatInterval:(double)arg2 dispatchTimerLeeway:(double)arg3 requiredHorizontalAccuracy:(double)arg4 activeDuration:(double)arg5 minMetricSubmissionAge:(double)arg6 maxHorizontalAccuracyForCoarseLocation:(double)arg7;

@end

