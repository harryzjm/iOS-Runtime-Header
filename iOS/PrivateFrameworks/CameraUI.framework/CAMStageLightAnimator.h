//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAGradientLayer, CAShapeLayer;

@interface CAMStageLightAnimator : NSObject
{
    CAGradientLayer *_gradientLayer;
    CAShapeLayer *_circleLayer;
    unsigned long long _state;
    unsigned long long __appearingAnimationCount;
    struct CGRect _circleBaseFrame;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setAppearingAnimationCount:) unsigned long long _appearingAnimationCount; // @synthesize _appearingAnimationCount=__appearingAnimationCount;
@property(nonatomic) struct CGRect circleBaseFrame; // @synthesize circleBaseFrame=_circleBaseFrame;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(readonly, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
- (void)_animateCircleColorWithDuration:(double)arg1 timing:(id)arg2;
- (void)_animateCircleGeometry:(CDStruct_f31c9284 *)arg1 count:(unsigned long long)arg2 duration:(double)arg3 timing:(id)arg4 repeats:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_animateCircleFromGeometry:(CDStruct_f31c9284)arg1 toGeometry:(CDStruct_f31c9284)arg2 duration:(double)arg3 timing:(id)arg4 repeats:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_animateCircleToGeometry:(CDStruct_f31c9284)arg1 duration:(double)arg2 timing:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_animateGradientProperties:(CDStruct_9c823225 *)arg1 count:(unsigned long long)arg2 duration:(double)arg3 timing:(id)arg4 repeats:(_Bool)arg5;
- (void)_animateGradientFromProperties:(CDStruct_9c823225)arg1 toProperties:(CDStruct_9c823225)arg2 duration:(double)arg3 timing:(id)arg4 repeats:(_Bool)arg5;
- (void)_animateGradientToProperties:(CDStruct_9c823225)arg1 duration:(double)arg2 timing:(id)arg3;
- (CDStruct_9c823225)_currentGradientProperties;
- (CDStruct_f31c9284)_currentCircleGeometry;
- (CDStruct_9c823225)_gradientPropertiesForGeometry:(CDStruct_d1ca95b4)arg1;
- (double)_circleLineWidth;
- (CDStruct_f31c9284)_circleGeometryForState:(unsigned long long)arg1;
- (CDStruct_d1ca95b4)_gradientGeometryForState:(unsigned long long)arg1;
- (void)_animateHidden;
- (void)_animateBounceIfNeeded;
- (void)_animateSearchingIfNeededFromState:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=_isAppearing) _Bool _appearing;
- (void)_didFinishAppearing;
- (void)_animateAppearing;
- (void)setCircleBaseFrame:(struct CGRect)arg1 animated:(_Bool)arg2;
- (id)initWithGradientLayer:(id)arg1 circleLayer:(id)arg2;

@end
