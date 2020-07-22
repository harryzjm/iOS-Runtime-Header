//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXRequestedEDRHeadroomFactorFilter
{
    double _sustainDuration;
    double _highValue;
    double _lastDecreaseTime;
}

@property(nonatomic) double lastDecreaseTime; // @synthesize lastDecreaseTime=_lastDecreaseTime;
@property(nonatomic) double highValue; // @synthesize highValue=_highValue;
@property(nonatomic) double sustainDuration; // @synthesize sustainDuration=_sustainDuration;
@property(readonly, nonatomic, getter=isPaused) _Bool paused;
- (double)updatedOutput;
- (void)setInput:(double)arg1;
- (id)initWithInput:(double)arg1;

@end
