//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMediaTimingFunction;

@interface PXStoryTransitionScale
{
    double _scaleRelativeFactor;
    _Bool _zoomingOut;
    CAMediaTimingFunction *_orderedAboveAnimationCurve;
    CAMediaTimingFunction *_orderedBelowAnimationCurve;
}

- (void).cxx_destruct;
- (void)wasStopped;
- (void)timeDidChange;
- (double)clipAlphaForTime:(CDStruct_1b6d18a9)arg1;
- (void)_configureWithTransitionInfo:(CDStruct_08b93379)arg1;
- (id)initWithTransitionInfo:(CDStruct_08b93379)arg1 event:(long long)arg2 clipLayouts:(id)arg3;

@end
