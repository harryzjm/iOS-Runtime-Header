//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIFeedback;
@protocol _UIFeedbackContinuousPlayable, _UIFeedbackDiscretePlayable;

@interface _UIDragFeedbackGeneratorConfiguration
{
    _UIFeedback<_UIFeedbackContinuousPlayable> *_interactionProgressingFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> *_interactionUpdatedFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> *_targetUpdatedFeedback;
    double _progressingFeedbackDelay;
}

+ (id)defaultConfiguration;
- (void).cxx_destruct;
@property(nonatomic) double progressingFeedbackDelay; // @synthesize progressingFeedbackDelay=_progressingFeedbackDelay;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *targetUpdatedFeedback; // @synthesize targetUpdatedFeedback=_targetUpdatedFeedback;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *interactionUpdatedFeedback; // @synthesize interactionUpdatedFeedback=_interactionUpdatedFeedback;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *interactionProgressingFeedback; // @synthesize interactionProgressingFeedback=_interactionProgressingFeedback;
- (id)feedbackKeyPaths;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)requiredSupportLevel;

@end
