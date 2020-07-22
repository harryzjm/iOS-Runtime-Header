//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _UIFeedback, _UIStatesFeedbackGeneratorConfiguration;
@protocol _UIFeedbackContinuousPlayable;

@interface _UIStatesFeedbackGenerator
{
    _Bool _approachActivated;
    NSString *_currentState;
    _UIFeedback<_UIFeedbackContinuousPlayable> *_playingContinuousFeedback;
}

+ (Class)_configurationClass;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback; // @synthesize playingContinuousFeedback=_playingContinuousFeedback;
@property(nonatomic, getter=_approachActivated, setter=_setApproachActivated:) _Bool approachActivated; // @synthesize approachActivated=_approachActivated;
@property(retain, nonatomic) NSString *currentState; // @synthesize currentState=_currentState;
- (void).cxx_destruct;
- (id)_stats_key;
- (void)_stopPlayingContinuousFeedback;
- (void)transitionToState:(id)arg1 ended:(_Bool)arg2;
- (void)transitionToState:(id)arg1 updated:(double)arg2;
- (id)_configurationFromState:(id)arg1 toState:(id)arg2;
@property(readonly, nonatomic, getter=_statesConfiguration) _UIStatesFeedbackGeneratorConfiguration *statesConfiguration;
- (id)initWithConfiguration:(id)arg1 coordinateSpace:(id)arg2;
- (id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2;
- (id)initWithStyle:(long long)arg1;

@end

