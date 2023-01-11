//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HUAnimationSettings;

@interface HUDynamicStateAnimationApplier
{
    _Bool _hasUpdatedProgress;
    HUAnimationSettings *_animationSettings;
    double _initialProgress;
    double _targetProgress;
    double _preInterpolatedProgress;
    double _lastTargetChangeTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasUpdatedProgress; // @synthesize hasUpdatedProgress=_hasUpdatedProgress;
@property(nonatomic) double lastTargetChangeTime; // @synthesize lastTargetChangeTime=_lastTargetChangeTime;
@property(nonatomic) double preInterpolatedProgress; // @synthesize preInterpolatedProgress=_preInterpolatedProgress;
@property(nonatomic) double targetProgress; // @synthesize targetProgress=_targetProgress;
@property(nonatomic) double initialProgress; // @synthesize initialProgress=_initialProgress;
- (double)effectiveInputProgressForBlock:(CDUnknownBlockType)arg1;
- (void)updateProgress:(double)arg1;
- (_Bool)start;
@property(readonly, copy, nonatomic) HUAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
- (id)initWithAnimationSettings:(id)arg1 initialProgress:(double)arg2 progressInputBlock:(CDUnknownBlockType)arg3;

@end
