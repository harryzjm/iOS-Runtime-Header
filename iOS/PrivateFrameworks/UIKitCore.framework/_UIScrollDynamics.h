//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIScrollDynamics : NSObject
{
    _Bool _shouldRoundCalculations;
    struct CGSize _tolerance;
    struct CGPoint _decelerationTarget;
    struct CGPoint _initialContentOffset;
    struct CGVector _initialVelocity;
    struct CGPoint _contentOrigin;
    struct CGSize _viewSize;
    struct CGRect _contentFrame;
}

@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(nonatomic) struct CGPoint contentOrigin; // @synthesize contentOrigin=_contentOrigin;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(nonatomic) struct CGVector initialVelocity; // @synthesize initialVelocity=_initialVelocity;
@property(nonatomic) struct CGPoint initialContentOffset; // @synthesize initialContentOffset=_initialContentOffset;
@property(nonatomic) struct CGPoint decelerationTarget; // @synthesize decelerationTarget=_decelerationTarget;
@property(readonly, nonatomic) struct CGSize tolerance; // @synthesize tolerance=_tolerance;
@property(nonatomic) _Bool shouldRoundCalculations; // @synthesize shouldRoundCalculations=_shouldRoundCalculations;
- (void)recalculateForDecelerationTarget:(struct CGPoint)arg1;
- (void)calculateToReachDecelerationTarget;
- (void)calculateDecelerationTarget;
- (_Bool)isRubberBandingAfterDuration:(double)arg1;
- (struct CGPoint)positionAfterDuration:(double)arg1;
- (struct CGVector)velocityAfterDuration:(double)arg1;
- (double)speedAfterDuration:(double)arg1;
@property(readonly, nonatomic) double durationUntilStop;
- (id)initWithInitialContentOffset:(struct CGPoint)arg1 velocity:(struct CGVector)arg2 contentFrame:(struct CGRect)arg3 viewSize:(struct CGSize)arg4 screenScale:(double)arg5;
- (id)init;

@end

