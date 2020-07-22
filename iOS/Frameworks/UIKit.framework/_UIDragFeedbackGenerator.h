//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIFeedbackGeneratorUserInteractionDriven-Protocol.h>

@class _UIDragFeedbackGeneratorConfiguration, _UIFeedback;
@protocol _UIFeedbackContinuousPlayable;

@interface _UIDragFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>
{
    long long _state;
    _UIFeedback<_UIFeedbackContinuousPlayable> *_playingContinuousFeedback;
}

+ (Class)_configurationClass;
@property(retain, nonatomic, getter=_playingContinuousFeedback, setter=_setPlayingContinuousFeedback:) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback; // @synthesize playingContinuousFeedback=_playingContinuousFeedback;
@property(nonatomic, getter=_state, setter=_setState:) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)_stats_key;
- (void)_stopPlayingContinuousFeedback;
- (void)_startPlayingContinuousFeedbackNow;
- (void)_startPlayingContinuousFeedback;
- (void)dropTargetUpdated;
- (void)positionUpdated;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)userInteractionStarted;
@property(readonly, nonatomic, getter=_dragConfiguration) _UIDragFeedbackGeneratorConfiguration *dragConfiguration;

@end

