//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MXMSampleTimeSeries
{
    MXMSampleTimeSeries *_time;
}

- (void).cxx_destruct;
- (void)_appendAbsoluteTime:(unsigned long long)arg1;
- (id)initWithTimeSeries:(double *)arg1 unit:(id)arg2 length:(unsigned long long)arg3;
- (id)initWithContinuousTimeSeries:(unsigned long long *)arg1 length:(unsigned long long)arg2;
- (id)initWithAbsoluteTimeSeries:(unsigned long long *)arg1 length:(unsigned long long)arg2;
- (id)init;
@property(readonly, retain, nonatomic) MXMSampleTimeSeries *timeIndex;

@end
