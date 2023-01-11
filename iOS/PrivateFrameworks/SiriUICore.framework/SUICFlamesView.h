//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CADisplayLink, EAGLContext, FlameGroup, MISSING_TYPE, NSMutableArray, NSMutableSet, SUICAudioLevelSmoother, UIColor, UIImage, UIImageView, UIScreen;
@protocol SUICFlamesViewDelegate;

@interface SUICFlamesView : UIView
{
    CADisplayLink *_displayLink;
    EAGLContext *_eaglContext;
    EAGLContext *_previousContext;
    long long _currentContextCount;
    NSMutableSet *_renderingDisabledReasons;
    unsigned int _framebufferHandle;
    unsigned int _renderbufferHandle;
    int _flameProgramHandle;
    int _auraProgramHandle;
    int _vShadID;
    int _fShadID;
    unsigned int _vertexArrayObjectHandle;
    unsigned int _vertexBufferHandle;
    unsigned int _elementArrayHandle;
    unsigned int _numVertices;
    unsigned int _numAuraIndices;
    unsigned int _numAuraIndicesCulled;
    unsigned int _numWaveIndices;
    unsigned int _maxVertexCircles;
    unsigned int _auraVertexCircles;
    float _maxSubdivisionLevel;
    float _auraMinSubdivisionLevel;
    float _auraMaxSubdivisionLevel;
    NSMutableArray *_flameGroups;
    FlameGroup *_currentFlameGroup;
    int _viewWidth;
    int _viewHeight;
    float _dictationUnitSize;
    UIScreen *_screen;
    UIImageView *_overlayImageView;
    double _startTime;
    double _dictationRedColor;
    double _dictationGreenColor;
    double _dictationBlueColor;
    SUICAudioLevelSmoother *_levelSmoother;
    int _fidelity;
    double _frameRateScalingFactor;
    _Bool _transitionFinished;
    _Bool _isInitialized;
    _Bool _hasCustomActiveFrame;
    _Bool _shadersAreCompiled;
    _Bool _reduceMotionEnabled;
    _Bool _showAura;
    _Bool _freezesAura;
    _Bool _reduceFrameRate;
    _Bool _reduceThinkingFramerate;
    _Bool _renderInBackground;
    _Bool _paused;
    _Bool _accelerateTransitions;
    int _mode;
    int _state;
    id <SUICFlamesViewDelegate> _delegate;
    UIImage *_overlayImage;
    UIColor *_dictationColor;
    double _horizontalScaleFactor;
    struct CGRect _activeFrame;
}

+ (void)setIndexCacheSize:(unsigned long long)arg1;
+ (id)_indexCache;
+ (void)prewarmShadersForScreen:(id)arg1 initialFrame:(struct CGRect)arg2 activeFrame:(struct CGRect)arg3 fidelity:(int)arg4 prewarmInBackground:(_Bool)arg5;
+ (void)prewarmShadersForScreen:(id)arg1 activeFrame:(struct CGRect)arg2 fidelity:(int)arg3;
+ (void)prewarmShadersForScreen:(id)arg1 size:(struct CGSize)arg2 fidelity:(int)arg3 prewarmInBackground:(_Bool)arg4;
+ (void)prewarmShadersForScreen:(id)arg1 size:(struct CGSize)arg2 fidelity:(int)arg3;
+ (void)prewarmShadersForScreen:(id)arg1 size:(struct CGSize)arg2;
+ (_Bool)_supportsAdaptiveFramerate;
+ (Class)layerClass;
@property(nonatomic) _Bool accelerateTransitions; // @synthesize accelerateTransitions=_accelerateTransitions;
@property(nonatomic) double horizontalScaleFactor; // @synthesize horizontalScaleFactor=_horizontalScaleFactor;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) _Bool renderInBackground; // @synthesize renderInBackground=_renderInBackground;
@property(retain, nonatomic) UIColor *dictationColor; // @synthesize dictationColor=_dictationColor;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(nonatomic) struct CGRect activeFrame; // @synthesize activeFrame=_activeFrame;
@property(nonatomic) _Bool reduceThinkingFramerate; // @synthesize reduceThinkingFramerate=_reduceThinkingFramerate;
@property(nonatomic) _Bool reduceFrameRate; // @synthesize reduceFrameRate=_reduceFrameRate;
@property(nonatomic) _Bool freezesAura; // @synthesize freezesAura=_freezesAura;
@property(nonatomic) _Bool showAura; // @synthesize showAura=_showAura;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <SUICFlamesViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (float)_currentMicPowerLevel;
- (void)_didFinishTransition;
- (void)_updateCurveLayer:(id)arg1;
- (_Bool)_isOriginatingProcessInBackground;
@property(readonly, nonatomic) _Bool isRenderingEnabled;
- (void)stopRenderingAndCleanupGL;
- (_Bool)inDictationMode;
- (_Bool)inSiriMode;
- (void)_tearDownDisplayLink;
- (_Bool)_deviceNeeds2xFlamesWithCurrentScale:(double)arg1;
- (double)_currentDisplayScale;
- (void)layoutSubviews;
- (void)_updateOrthoProjection;
- (_Bool)_resizeFromLayer:(id)arg1;
- (void)_cleanupGL;
- (_Bool)_initGLAndSetupDisplayLink:(_Bool)arg1;
- (_Bool)_setupVertexBuffer;
- (int)_generateIndicesForNumCircleShapes:(int)arg1 withMaxSubdivisionLevel:(float)arg2 startingWithNumSubdivisionLevel:(float)arg3 forIndices:(unsigned int **)arg4 atStartIndex:(int)arg5 withFill:(_Bool)arg6 withCullingForAura:(_Bool)arg7 forVertices:(struct *)arg8;
- (MISSING_TYPE *)_predeterminedVertexPositionForAuraWithPolarVertex: /* Error: Ran out of types for this method. */;
- (unsigned int)_numVerticesPerCircle;
- (_Bool)_setupShaders;
- (_Bool)_setupFramebuffer;
- (void)_setupDisplayLink;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_reduceMotionStatusChanged:(id)arg1;
- (void)_restoreCurrentContext;
- (_Bool)_setCurrentContext;
- (void)setRenderingEnabled:(_Bool)arg1 forReason:(id)arg2;
- (void)resetAndReinitializeGL:(_Bool)arg1;
- (void)_prewarmShaders;
- (void)prewarmShadersForCurrentMode;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)_updateDisplayLinkPausedState;
- (void)_setPreferredFramesPerSecond;
- (void)fadeOutCurrentAura;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 screenScale:(double)arg2 fidelity:(int)arg3;
- (id)initWithFrame:(struct CGRect)arg1 screen:(id)arg2 fidelity:(int)arg3;
- (void)_setValuesForFidelity:(int)arg1;

@end

