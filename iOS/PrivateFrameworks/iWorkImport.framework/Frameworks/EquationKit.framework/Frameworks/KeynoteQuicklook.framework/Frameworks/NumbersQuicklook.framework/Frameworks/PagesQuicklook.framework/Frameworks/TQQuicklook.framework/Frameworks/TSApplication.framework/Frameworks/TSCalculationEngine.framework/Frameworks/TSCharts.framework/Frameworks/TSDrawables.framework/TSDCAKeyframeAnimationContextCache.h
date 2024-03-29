//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface TSDCAKeyframeAnimationContextCache
{
    NSArray *_values;
    NSArray *_keyTimes;
    NSArray *_timingFunctions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *timingFunctions; // @synthesize timingFunctions=_timingFunctions;
@property(readonly, nonatomic) NSArray *keyTimes; // @synthesize keyTimes=_keyTimes;
@property(readonly, nonatomic) NSArray *values; // @synthesize values=_values;
- (double)percentAtTime:(double)arg1;
- (id)valueAtTime:(double)arg1 initialValue:(id)arg2 groupTimingFactor:(double)arg3;
- (id)initWithAnimation:(id)arg1;

@end

