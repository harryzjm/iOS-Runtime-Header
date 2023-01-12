//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSNumber;

@interface HRAWaveformResult : NSObject
{
    float _samplingFrequencyHz;
    unsigned long long _classification;
    NSDate *_startDate;
    NSData *_sampleData;
    NSNumber *_heartRateBPM;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *heartRateBPM; // @synthesize heartRateBPM=_heartRateBPM;
@property(readonly, nonatomic) NSData *sampleData; // @synthesize sampleData=_sampleData;
@property(readonly, nonatomic) float samplingFrequencyHz; // @synthesize samplingFrequencyHz=_samplingFrequencyHz;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) unsigned long long classification; // @synthesize classification=_classification;
- (id)initWithSamples:(const float *)arg1 count:(unsigned long long)arg2 samplingRate:(float)arg3 startDate:(double)arg4 heartRate:(id)arg5 classification:(unsigned long long)arg6;

@end
