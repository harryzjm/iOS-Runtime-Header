//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXGLayout, PXNumberAnimator, PXPointAnimator, PXSwipeDownTracker;

@interface PXStoryViewModePlayerToBrowserTransition
{
    PXNumberAnimator *_completionProgressAnimator;
    PXPointAnimator *_centerOffsetAnimator;
    PXGLayout *_referenceLayout;
    _Bool _shouldFadeOutEverything;
    float _fractionCompletedAtFadeOutStart;
    double _lastSwipeDownDuration;
    PXSwipeDownTracker *_swipeDownTracker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PXSwipeDownTracker *swipeDownTracker; // @synthesize swipeDownTracker=_swipeDownTracker;
- (CDStruct_fe8c0406)contentsTransformOverrideForClipWithInfo:(CDStruct_5e045380)arg1 proposedOverride:(CDStruct_fe8c0406)arg2 inViewMode:(long long)arg3 layout:(id)arg4;
- (double)alphaForClipWithInfo:(CDStruct_5e045380)arg1 proposedAlpha:(double)arg2 inViewMode:(long long)arg3 layout:(id)arg4;
- (struct CGRect)frameForClipWithInfo:(CDStruct_5e045380)arg1 proposedFrame:(struct CGRect)arg2 inViewMode:(long long)arg3 layout:(id)arg4;
- (_Bool)shouldFinish;
- (id)presentedBoundingBoxForViewMode:(long long)arg1;
- (void)swipeDownInteractionStateDidChange;
- (double)fadeoutDuration;
- (_Bool)hasActiveAnimation;
- (id)initWithSourceTimelineLayoutSnapshot:(id)arg1 assetReference:(id)arg2 trackingClipIdentifier:(long long)arg3;

@end
