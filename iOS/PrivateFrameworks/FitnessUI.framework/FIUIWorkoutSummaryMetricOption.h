//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface FIUIWorkoutSummaryMetricOption
{
    unsigned long long _metricType;
}

@property(readonly, nonatomic) unsigned long long metricType; // @synthesize metricType=_metricType;
- (_Bool)evaluateWithWorkout:(id)arg1 supportedMetrics:(id)arg2;
- (id)initWithRowType:(unsigned long long)arg1 metricType:(unsigned long long)arg2 condition:(CDUnknownBlockType)arg3;

@end
