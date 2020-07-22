//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol HKRingGroupAnimationStatusDelegate;

@interface HKRingGroupController
{
    long long *_iconAnimationFrameNumbers;
    long long _numberOfRings;
    double _ringDiameter;
    double _ringInterspacing;
    double _ringThickness;
    double _ringIconSize;
    double _ringScale;
    double _zRotation;
    double _backingOrigin;
    double _additionalSpacingAtIndex;
    NSArray *_rings;
    id <HKRingGroupAnimationStatusDelegate> _animationStatusDelegate;
    struct CGPoint _center;
}

+ (id)animationTimingFunction;
+ (double)defaultAnimationDuration;
@property(nonatomic) __weak id <HKRingGroupAnimationStatusDelegate> animationStatusDelegate; // @synthesize animationStatusDelegate=_animationStatusDelegate;
@property(retain, nonatomic) NSArray *rings; // @synthesize rings=_rings;
@property(nonatomic) double additionalSpacingAtIndex; // @synthesize additionalSpacingAtIndex=_additionalSpacingAtIndex;
@property(nonatomic) double backingOrigin; // @synthesize backingOrigin=_backingOrigin;
@property(nonatomic) double zRotation; // @synthesize zRotation=_zRotation;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(nonatomic) double ringScale; // @synthesize ringScale=_ringScale;
@property(nonatomic) double ringIconSize; // @synthesize ringIconSize=_ringIconSize;
@property(nonatomic) double ringThickness; // @synthesize ringThickness=_ringThickness;
@property(nonatomic) double ringInterspacing; // @synthesize ringInterspacing=_ringInterspacing;
@property(nonatomic) double ringDiameter; // @synthesize ringDiameter=_ringDiameter;
@property(readonly, nonatomic) long long numberOfRings; // @synthesize numberOfRings=_numberOfRings;
- (void).cxx_destruct;
- (long long)indexOfRingAtPoint:(struct CGPoint)arg1;
- (double)_adjustedDurationForRingWithIndex:(long long)arg1 startPercentage:(double)arg2 targetPercentage:(double)arg3 defaultDuration:(double)arg4;
- (void)setDotPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(_Bool)arg3;
- (unsigned long long)_lastRingFrameNumberForRingAtIndex:(unsigned long long)arg1;
- (void)_configureIconWithStartingPercentage:(double)arg1 forRingAtIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(_Bool)arg3 duration:(double)arg4 timingFunction:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (double)_ringPercentageAdjustedForProximityToFull:(double)arg1 withRingDiameter:(double)arg2 thickness:(double)arg3;
- (void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(_Bool)arg3;
- (_Bool)ringsAreEmpty;
- (_Bool)areAnimationsInProgress;
- (void)update:(double)arg1;
- (void)setIconDotTextureOrigin:(struct CGPoint)arg1 ofRingAtIndex:(long long)arg2;
- (void)setIconFirstFrameOrigin:(struct CGPoint)arg1 frameSize:(struct CGSize)arg2 frameCount:(long long)arg3 columns:(long long)arg4 ofRingAtIndex:(long long)arg5;
- (void)addOpacityAnimation:(id)arg1 forRingAtIndex:(long long)arg2;
- (void)setRingIconPosition:(struct CGPoint)arg1 ofRingAtIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)setRingIconSize:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)setRingDiameter:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)setRingThickness:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)setOpacity:(float)arg1 ofRingAtIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)setTopColor:(id)arg1 bottomColor:(id)arg2 ofRingAtIndex:(long long)arg3;
- (_Bool)_setCGPointValue:(struct CGPoint)arg1 forIconPropertyType:(unsigned long long)arg2 ofRingAtIndex:(long long)arg3 animated:(_Bool)arg4;
- (_Bool)_setFloatValue:(float)arg1 forIconPropertyType:(unsigned long long)arg2 ofRingAtIndex:(long long)arg3 animated:(_Bool)arg4;
- (_Bool)_setFloatValue:(float)arg1 fromCurrentValue:(float)arg2 forRingPropertyType:(unsigned long long)arg3 ofRingAtIndex:(long long)arg4 animated:(_Bool)arg5 duration:(double)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_setFloatValue:(float)arg1 forRingPropertyType:(unsigned long long)arg2 ofRingAtIndex:(long long)arg3 animated:(_Bool)arg4;
- (id)_newAnimatablePropertyForType:(unsigned long long)arg1;
- (void)addAnimation:(id)arg1 forRingGroupPropertyType:(unsigned long long)arg2;
- (double)_scaledRingIconSize;
- (double)_scaledRingThickness;
- (double)_scaledRingInterspacing;
- (double)_scaledRingDiameter;
- (double)diameterForRingAtIndex:(unsigned long long)arg1;
- (void)_updateRingIconProperties;
- (void)_updateRingZRotations;
- (void)_updateRingThicknesses;
- (void)_updateRingDiameters;
- (_Bool)_setZRotation:(double)arg1;
- (_Bool)_setCenter:(struct CGPoint)arg1;
- (_Bool)_setRingScale:(double)arg1;
- (_Bool)_setRingIconSize:(double)arg1;
- (_Bool)_setRingThickness:(double)arg1;
- (_Bool)_setRingInterspacing:(double)arg1;
- (_Bool)_setRingDiameter:(double)arg1;
- (void)_removeAllRingAnimationsForPropertyType:(unsigned long long)arg1;
- (void)_markRingGroupAsDirty;
- (void)dealloc;
- (id)initWithNumberOfRings:(long long)arg1;
- (id)init;

@end

