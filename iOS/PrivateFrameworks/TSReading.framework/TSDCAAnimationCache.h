//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAAnimation, CALayer, NSDictionary;

@interface TSDCAAnimationCache : NSObject
{
    NSDictionary *_overrideInitialValuesDict;
    double _animationDuration;
    long long _cacheValuesCount;
    struct CGPoint *_anchorPointCache;
    double *_anchorPointZCache;
    double *_borderWidthCache;
    struct CGRect *_boundsCache;
    _Bool *_doubleSidedCache;
    _Bool *_hiddenCache;
    double *_opacityCache;
    struct CGPoint *_positionCache;
    struct CATransform3D *_transformCache;
    double *_transformRotationCache;
    double *_transformRotationXCache;
    double *_transformRotationYCache;
    double *_transformRotationZCache;
    double *_transformScaleXCache;
    double *_transformScaleYCache;
    double *_transformScaleXYCache;
    struct CGPoint *_transformTranslationCache;
    double *_transformTranslationXCache;
    double *_transformTranslationYCache;
    double *_transformTranslationZCache;
    double *_zPositionCache;
    _Bool _anchorPointAnimationExists;
    _Bool _anchorPointZAnimationExists;
    _Bool _borderColorAnimationExists;
    _Bool _borderWidthAnimationExists;
    _Bool _boundsAnimationExists;
    _Bool _contentsAnimationExists;
    _Bool _doubleSidedAnimationExists;
    _Bool _doubleSidedInitialValue;
    _Bool _hiddenAnimationExists;
    _Bool _hiddenInitialValue;
    _Bool _opacityAnimationExists;
    _Bool _positionAnimationExists;
    _Bool _transformAnimationExists;
    _Bool _transformRotationAnimationExists;
    _Bool _transformRotationXAnimationExists;
    _Bool _transformRotationYAnimationExists;
    _Bool _transformRotationZAnimationExists;
    _Bool _transformScaleXAnimationExists;
    _Bool _transformScaleYAnimationExists;
    _Bool _transformScaleXYAnimationExists;
    _Bool _transformTranslationAnimationExists;
    _Bool _transformTranslationXAnimationExists;
    _Bool _transformTranslationYAnimationExists;
    _Bool _transformTranslationZAnimationExists;
    _Bool _zPositionAnimationExists;
    CALayer *_layer;
    CAAnimation *_animation;
    double _anchorPointZInitialValue;
    struct CGColor *_borderColorInitialValue;
    double _borderWidthInitialValue;
    struct CGImage *_contentsInitialValue;
    double _opacityInitialValue;
    double _transformRotationInitialValue;
    double _transformRotationXInitialValue;
    double _transformRotationYInitialValue;
    double _transformRotationZInitialValue;
    double _transformScaleXInitialValue;
    double _transformScaleYInitialValue;
    double _transformScaleXYInitialValue;
    double _transformTranslationXInitialValue;
    double _transformTranslationYInitialValue;
    double _transformTranslationZInitialValue;
    double _zPositionInitialValue;
    NSDictionary *_initialValues;
    struct CGPoint _anchorPointInitialValue;
    struct CGPoint _positionInitialValue;
    struct CGPoint _transformTranslationInitialValue;
    struct CGRect _boundsInitialValue;
    struct CATransform3D _transformInitialValue;
}

@property(readonly, nonatomic) NSDictionary *initialValues; // @synthesize initialValues=_initialValues;
@property(readonly, nonatomic) double zPositionInitialValue; // @synthesize zPositionInitialValue=_zPositionInitialValue;
@property(readonly, nonatomic) _Bool zPositionAnimationExists; // @synthesize zPositionAnimationExists=_zPositionAnimationExists;
@property(readonly, nonatomic) double transformTranslationZInitialValue; // @synthesize transformTranslationZInitialValue=_transformTranslationZInitialValue;
@property(readonly, nonatomic) _Bool transformTranslationZAnimationExists; // @synthesize transformTranslationZAnimationExists=_transformTranslationZAnimationExists;
@property(readonly, nonatomic) double transformTranslationYInitialValue; // @synthesize transformTranslationYInitialValue=_transformTranslationYInitialValue;
@property(readonly, nonatomic) _Bool transformTranslationYAnimationExists; // @synthesize transformTranslationYAnimationExists=_transformTranslationYAnimationExists;
@property(readonly, nonatomic) double transformTranslationXInitialValue; // @synthesize transformTranslationXInitialValue=_transformTranslationXInitialValue;
@property(readonly, nonatomic) _Bool transformTranslationXAnimationExists; // @synthesize transformTranslationXAnimationExists=_transformTranslationXAnimationExists;
@property(readonly, nonatomic) struct CGPoint transformTranslationInitialValue; // @synthesize transformTranslationInitialValue=_transformTranslationInitialValue;
@property(readonly, nonatomic) _Bool transformTranslationAnimationExists; // @synthesize transformTranslationAnimationExists=_transformTranslationAnimationExists;
@property(readonly, nonatomic) double transformScaleXYInitialValue; // @synthesize transformScaleXYInitialValue=_transformScaleXYInitialValue;
@property(readonly, nonatomic) _Bool transformScaleXYAnimationExists; // @synthesize transformScaleXYAnimationExists=_transformScaleXYAnimationExists;
@property(readonly, nonatomic) double transformScaleYInitialValue; // @synthesize transformScaleYInitialValue=_transformScaleYInitialValue;
@property(readonly, nonatomic) _Bool transformScaleYAnimationExists; // @synthesize transformScaleYAnimationExists=_transformScaleYAnimationExists;
@property(readonly, nonatomic) double transformScaleXInitialValue; // @synthesize transformScaleXInitialValue=_transformScaleXInitialValue;
@property(readonly, nonatomic) _Bool transformScaleXAnimationExists; // @synthesize transformScaleXAnimationExists=_transformScaleXAnimationExists;
@property(readonly, nonatomic) double transformRotationZInitialValue; // @synthesize transformRotationZInitialValue=_transformRotationZInitialValue;
@property(readonly, nonatomic) _Bool transformRotationZAnimationExists; // @synthesize transformRotationZAnimationExists=_transformRotationZAnimationExists;
@property(readonly, nonatomic) double transformRotationYInitialValue; // @synthesize transformRotationYInitialValue=_transformRotationYInitialValue;
@property(readonly, nonatomic) _Bool transformRotationYAnimationExists; // @synthesize transformRotationYAnimationExists=_transformRotationYAnimationExists;
@property(readonly, nonatomic) double transformRotationXInitialValue; // @synthesize transformRotationXInitialValue=_transformRotationXInitialValue;
@property(readonly, nonatomic) _Bool transformRotationXAnimationExists; // @synthesize transformRotationXAnimationExists=_transformRotationXAnimationExists;
@property(readonly, nonatomic) double transformRotationInitialValue; // @synthesize transformRotationInitialValue=_transformRotationInitialValue;
@property(readonly, nonatomic) _Bool transformRotationAnimationExists; // @synthesize transformRotationAnimationExists=_transformRotationAnimationExists;
@property(readonly, nonatomic) struct CATransform3D transformInitialValue; // @synthesize transformInitialValue=_transformInitialValue;
@property(readonly, nonatomic) _Bool transformAnimationExists; // @synthesize transformAnimationExists=_transformAnimationExists;
@property(readonly, nonatomic) struct CGPoint positionInitialValue; // @synthesize positionInitialValue=_positionInitialValue;
@property(readonly, nonatomic) _Bool positionAnimationExists; // @synthesize positionAnimationExists=_positionAnimationExists;
@property(readonly, nonatomic) double opacityInitialValue; // @synthesize opacityInitialValue=_opacityInitialValue;
@property(readonly, nonatomic) _Bool opacityAnimationExists; // @synthesize opacityAnimationExists=_opacityAnimationExists;
@property(readonly, nonatomic) _Bool hiddenInitialValue; // @synthesize hiddenInitialValue=_hiddenInitialValue;
@property(readonly, nonatomic) _Bool hiddenAnimationExists; // @synthesize hiddenAnimationExists=_hiddenAnimationExists;
@property(readonly, nonatomic) _Bool doubleSidedInitialValue; // @synthesize doubleSidedInitialValue=_doubleSidedInitialValue;
@property(readonly, nonatomic) _Bool doubleSidedAnimationExists; // @synthesize doubleSidedAnimationExists=_doubleSidedAnimationExists;
@property(readonly, nonatomic) struct CGImage *contentsInitialValue; // @synthesize contentsInitialValue=_contentsInitialValue;
@property(readonly, nonatomic) _Bool contentsAnimationExists; // @synthesize contentsAnimationExists=_contentsAnimationExists;
@property(readonly, nonatomic) struct CGRect boundsInitialValue; // @synthesize boundsInitialValue=_boundsInitialValue;
@property(readonly, nonatomic) _Bool boundsAnimationExists; // @synthesize boundsAnimationExists=_boundsAnimationExists;
@property(readonly, nonatomic) double borderWidthInitialValue; // @synthesize borderWidthInitialValue=_borderWidthInitialValue;
@property(readonly, nonatomic) _Bool borderWidthAnimationExists; // @synthesize borderWidthAnimationExists=_borderWidthAnimationExists;
@property(readonly, nonatomic) struct CGColor *borderColorInitialValue; // @synthesize borderColorInitialValue=_borderColorInitialValue;
@property(readonly, nonatomic) _Bool borderColorAnimationExists; // @synthesize borderColorAnimationExists=_borderColorAnimationExists;
@property(readonly, nonatomic) double anchorPointZInitialValue; // @synthesize anchorPointZInitialValue=_anchorPointZInitialValue;
@property(readonly, nonatomic) _Bool anchorPointZAnimationExists; // @synthesize anchorPointZAnimationExists=_anchorPointZAnimationExists;
@property(readonly, nonatomic) struct CGPoint anchorPointInitialValue; // @synthesize anchorPointInitialValue=_anchorPointInitialValue;
@property(readonly, nonatomic) _Bool anchorPointAnimationExists; // @synthesize anchorPointAnimationExists=_anchorPointAnimationExists;
@property(readonly, nonatomic) CAAnimation *animation; // @synthesize animation=_animation;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (double)zPositionCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)transformTranslationZCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)transformTranslationYCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)transformTranslationXCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (struct CGPoint)transformTranslationCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)transformScaleXYCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)transformScaleYCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)transformScaleXCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)transformRotationZCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)transformRotationYCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)transformRotationXCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)transformRotationCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (struct CATransform3D)transformCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (struct CGPoint)positionCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)opacityCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (_Bool)hiddenCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (_Bool)doubleSidedCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (struct CGRect)boundsCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)borderWidthCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (double)anchorPointZCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (struct CGPoint)anchorPointCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3;
- (void)dealloc;
- (id)initWithLayer:(id)arg1 animation:(id)arg2 overrideInitialValues:(id)arg3 cacheAnimationValues:(_Bool)arg4;
- (_Bool)verifyCache;
- (_Bool)p_setupAndCacheAnimationValues:(_Bool)arg1 verifyOnly:(_Bool)arg2;

@end

