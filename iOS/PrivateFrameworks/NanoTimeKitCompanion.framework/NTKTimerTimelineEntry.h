//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NTKTimerTimelineEntry
{
    double _remainingTime;
    unsigned long long _state;
    double _countdownDuration;
}

+ (id)_extraLargeImageProvider;
+ (id)_utilitarianSmallImageProvider;
+ (id)_circularMediumImageProvider;
+ (id)_circularSmallImageProvider;
+ (id)_modularSmallImageProvider;
+ (id)_cornerSmallImageProvider;
+ (id)companionModel;
@property(nonatomic) double countdownDuration; // @synthesize countdownDuration=_countdownDuration;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
- (id)_relativeDateTextProviderForTimeInterval:(double)arg1 paused:(_Bool)arg2;
- (id)_textProviderForTimeAtState:(unsigned long long)arg1 withUnknownText:(id)arg2;
- (id)_textProviderForTimeAtState:(unsigned long long)arg1;
- (id)_relativeDateGaugeProviderForTimeInterval:(double)arg1 fullDuration:(double)arg2 paused:(_Bool)arg3;
- (id)_gaugeProviderForTimeAtState:(unsigned long long)arg1;
- (id)_newExtraLargeTemplate;
- (id)_newLargeFlatUtilityTemplate;
- (id)_newSmallFlatUtilityTemplate;
- (id)_newCircularMediumTemplate;
- (id)_newCircularSmallTemplate;
- (id)_newLargeModularTemplate;
- (id)_newSmallModularTemplate;
- (id)_newSignatureCornerGaugeImageTemplate;
- (id)templateForComplicationFamily:(long long)arg1;

@end

