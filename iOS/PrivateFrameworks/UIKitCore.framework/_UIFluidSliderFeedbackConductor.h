//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol _UIFluidSliderFeedbackPlayer;

__attribute__((visibility("hidden")))
@interface _UIFluidSliderFeedbackConductor : NSObject
{
    double _epsilon;
    id <_UIFluidSliderFeedbackPlayer> __directFeedbackPlayer;
    id <_UIFluidSliderFeedbackPlayer> __indirectFeedbackPlayer;
    double __lastValue;
    unsigned long long __detentCount;
    long long __currentRegion;
}

- (void).cxx_destruct;
@property(nonatomic) long long _currentRegion; // @synthesize _currentRegion=__currentRegion;
@property(nonatomic) unsigned long long _detentCount; // @synthesize _detentCount=__detentCount;
@property(nonatomic) double _lastValue; // @synthesize _lastValue=__lastValue;
@property(retain, nonatomic) id <_UIFluidSliderFeedbackPlayer> _indirectFeedbackPlayer; // @synthesize _indirectFeedbackPlayer=__indirectFeedbackPlayer;
@property(retain, nonatomic) id <_UIFluidSliderFeedbackPlayer> _directFeedbackPlayer; // @synthesize _directFeedbackPlayer=__directFeedbackPlayer;
@property(nonatomic) double epsilon; // @synthesize epsilon=_epsilon;
- (void)_playFeedback:(long long)arg1 forUpdateType:(long long)arg2 value:(double)arg3;
- (void)moveToValue:(double)arg1 withUpdateType:(long long)arg2 forced:(_Bool)arg3;
- (id)initWithDetentCount:(unsigned long long)arg1 coordinateSpace:(id)arg2 indirectFeedbackPlayer:(id)arg3;

@end

