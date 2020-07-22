//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimatable-Protocol.h>
#import <SceneKit/SCNTechniqueSupport-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, SCNMaterialProperty, SCNOrderedDictionary, SCNTechnique;

@interface SCNCamera : NSObject <SCNAnimatable, SCNTechniqueSupport, NSCopying, NSSecureCoding>
{
    struct __C3DCamera *_camera;
    unsigned int _isPresentationInstance:1;
    unsigned int _custom:1;
    unsigned int _legacyFov:1;
    unsigned int _usesOrthographicProjection:1;
    unsigned int _automaticallyAdjustsZRange:1;
    unsigned int _fillMode:1;
    unsigned int _projectionDirection:1;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    NSString *_name;
    float _xFov;
    float _yFov;
    double _orthographicScale;
    double _zNear;
    double _zFar;
    float _fieldOfView;
    float _focalLength;
    float _sensorSize;
    float _fStop;
    float _focusDistance;
    float _dofIntensity;
    long long _bladeCount;
    long long _focalBlurSampleCount;
    float _aspectRatio;
    unsigned long long _categoryBitMask;
    struct SCNMatrix4 _projectionTransform;
    SCNTechnique *_technique;
    SCNMaterialProperty *_colorGrading;
    _Bool _wantsHDR;
    float _whitePoint;
    float _averageGray;
    float _exposureOffset;
    float _minimumExposure;
    float _maximumExposure;
    _Bool _wantsExposureAdaptation;
    float _exposureAdaptationDuration;
    float _exposureAdaptationBrighteningSpeedFactor;
    float _exposureAdaptationDarkeningSpeedFactor;
    double _exposureAdaptationHistogramRangeHighProbability;
    double _exposureAdaptationHistogramRangeLowProbability;
    long long _exposureAdaptationMode;
    float _bloomIntensity;
    float _bloomThreshold;
    float _bloomBlurRadius;
    float _motionBlurIntensity;
    float _vignettingPower;
    float _vignettingIntensity;
    float _colorFringeStrength;
    float _colorFringeIntensity;
    float _saturation;
    float _contrast;
    struct {
        float intensity;
        float radius;
        float bias;
        float depthThreshold;
        float normalThreshold;
        long long sampleCount;
        long long downSample;
    } _screenSpaceAmbientOcclusion;
}

+ (_Bool)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingFocalLength;
+ (id)keyPathsForValuesAffectingFieldOfView;
+ (id)camera;
+ (id)cameraWithCameraRef:(struct __C3DCamera *)arg1;
+ (id)cameraWithMDLCamera:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_didDecodeSCNCamera:(id)arg1;
@property(nonatomic) double focalSize;
@property(nonatomic) double focalDistance;
- (void)_customEncodingOfSCNCamera:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
@property(readonly, nonatomic) SCNMaterialProperty *colorGrading;
- (struct SCNMatrix4)projectionTransformWithViewportSize:(struct CGSize)arg1;
@property(nonatomic) struct SCNMatrix4 projectionTransform;
- (struct __C3DCamera *)cameraRef;
- (_Bool)useLegacyFov;
- (void)setYMag:(double)arg1;
- (double)yMag;
- (void)setXMag:(double)arg1;
- (double)xMag;
- (void)setAspectRatio:(double)arg1;
- (double)aspectRatio;
@property(nonatomic) long long projectionDirection;
- (void)setFieldOfViewOrientation:(long long)arg1;
- (long long)fieldOfViewOrientation;
- (void)setFillMode:(long long)arg1;
- (long long)fillMode;
@property(nonatomic) double focusDistance;
@property(nonatomic) long long focalBlurSampleCount;
@property(nonatomic) long long apertureBladeCount;
@property(nonatomic) double fStop;
@property(nonatomic) double aperture;
@property(nonatomic) double focalLength;
@property(nonatomic) double sensorHeight;
@property(nonatomic) double fieldOfView;
- (void)_updateFocalLength;
- (void)_updateFov;
@property(nonatomic) double zNear;
@property(nonatomic) double zFar;
@property(nonatomic) double yFov;
@property(nonatomic) double xFov;
@property(nonatomic) double whitePoint;
@property(nonatomic) _Bool wantsHDR;
@property(nonatomic) _Bool wantsExposureAdaptation;
@property(nonatomic) double vignettingPower;
@property(nonatomic) double vignettingIntensity;
@property(nonatomic) _Bool usesOrthographicProjection;
@property(nonatomic) double saturation;
@property(nonatomic) double orthographicScale;
@property(nonatomic) double motionBlurIntensity;
@property(nonatomic) double minimumExposure;
@property(nonatomic) double maximumExposure;
@property(nonatomic) double focalBlurRadius;
- (void)setDofIntensity:(float)arg1;
- (float)dofIntensity;
@property(nonatomic) _Bool wantsDepthOfField;
@property(nonatomic) double exposureOffset;
- (void)setExposureAdaptationMode:(long long)arg1;
- (long long)exposureAdaptationMode;
- (void)setExposureAdaptationHistogramRangeLowProbability:(double)arg1;
- (double)exposureAdaptationHistogramRangeLowProbability;
- (void)setExposureAdaptationHistogramRangeHighProbability:(double)arg1;
- (double)exposureAdaptationHistogramRangeHighProbability;
- (void)setExposureAdaptationDuration:(double)arg1;
- (double)exposureAdaptationDuration;
@property(nonatomic) double exposureAdaptationDarkeningSpeedFactor;
@property(nonatomic) double exposureAdaptationBrighteningSpeedFactor;
@property(nonatomic) double contrast;
@property(nonatomic) double colorFringeIntensity;
@property(nonatomic) double colorFringeStrength;
@property(nonatomic) unsigned long long categoryBitMask;
@property(nonatomic) double bloomThreshold;
@property(nonatomic) double bloomIntensity;
@property(nonatomic) double bloomBlurRadius;
@property(nonatomic) double averageGray;
@property(nonatomic) _Bool automaticallyAdjustsZRange;
- (void)setScreenSpaceAmbientOcclusionDownSample:(long long)arg1;
- (long long)screenSpaceAmbientOcclusionDownSample;
- (void)setScreenSpaceAmbientOcclusionSampleCount:(long long)arg1;
- (long long)screenSpaceAmbientOcclusionSampleCount;
@property(nonatomic) double screenSpaceAmbientOcclusionNormalThreshold;
@property(nonatomic) double screenSpaceAmbientOcclusionDepthThreshold;
@property(nonatomic) double screenSpaceAmbientOcclusionBias;
@property(nonatomic) double screenSpaceAmbientOcclusionRadius;
@property(nonatomic) double screenSpaceAmbientOcclusionIntensity;
- (_Bool)hasCustomProjectionTransform;
- (void)_registerAsObserver;
- (_Bool)isPausedOrPausedByInheritance;
- (id)presentationInstance;
- (id)presentationCamera;
@property(copy, nonatomic) SCNTechnique *technique;
- (void)_syncObjCModel;
- (void)unbindAnimatablePath:(id)arg1;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)_scnBindings;
- (_Bool)isAnimationForKeyPaused:(id)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)_pauseAnimation:(_Bool)arg1 forKey:(id)arg2 pausedByNode:(_Bool)arg3;
- (id)animationPlayerForKey:(id)arg1;
- (void)_copyAnimationsFrom:(id)arg1;
- (id)_scnAnimationForKey:(id)arg1;
- (id)animationForKey:(id)arg1;
- (void)_syncObjCAnimations;
@property(readonly) NSArray *animationKeys;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (_Bool)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager *)animationManager;
- (const void *)__CFObject;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (void)_syncEntityObjCModel;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initPresentationCameraWithCameraRef:(struct __C3DCamera *)arg1;
- (id)initWithCameraRef:(struct __C3DCamera *)arg1;
- (id)init;
- (id)debugQuickLookData;
- (id)debugQuickLookObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

