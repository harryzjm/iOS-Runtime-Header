//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SceneKit/SCNSceneRenderer-Protocol.h>
#import <SceneKit/SCNTechniqueSupport-Protocol.h>

@class AVAudioEngine, AVAudioEnvironmentNode, CALayer, EAGLContext, NSArray, NSString, SCNCameraController, SCNDisplayLink, SCNJitterer, SCNNode, SCNRecursiveLock, SCNRenderer, SCNScene, SCNSpriteKitEventHandler, SCNTechnique, SKScene, UIColor;
@protocol SCNCameraControlConfiguration, SCNEventHandler, SCNSceneRendererDelegate;

@interface SCNView : UIView <SCNSceneRenderer, SCNTechniqueSupport>
{
    double _currentSystemTime;
    double _lastUpdate;
    NSString *__ibSceneName;
    unsigned long long __ibPreferredRenderingAPI;
    unsigned int _ibNoMultisampling:1;
    unsigned long long _renderingAPI;
    unsigned int _isOpaque:1;
    unsigned int _rendersContinuously:1;
    unsigned int _firstDrawDone:1;
    unsigned int _drawOnMainThreadPending:1;
    unsigned int _appIsDeactivated:1;
    unsigned int _viewIsOffscreen:1;
    unsigned int _autoPausedScene:1;
    unsigned int _inRenderQueueForLayerBackedGLRendering:1;
    unsigned int _disableLinearRendering:1;
    unsigned int _isInLiveResize:1;
    _Bool _didTriggerRedrawWhileRendering;
    id _delegate;
    SCNRenderer *_renderer;
    SCNScene *_scene;
    _Bool _displayLinkCreationRequested;
    SCNDisplayLink *_displayLink;
    long long _preferredFramePerSeconds;
    CALayer *_backingLayer;
    SCNJitterer *_jitterer;
    SCNRecursiveLock *_lock;
    UIColor *_backgroundColor;
    struct CGSize _boundsSize;
    char *_snapshotImageData;
    unsigned long long _snapshotImageDataLength;
    id <SCNEventHandler> _navigationCameraController;
    SCNSpriteKitEventHandler *_spriteKitEventHandler;
    NSArray *_controllerGestureRecognizers;
}

+ (id)currentUIFocusEnvironment;
+ (Class)layerClass;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)_kvoKeysForwardedToRenderer;
+ (_Bool)lowLatency;
+ (_Bool)_isMetalSupported;
+ (unsigned long long)renderingAPIForOptions:(id)arg1;
- (long long)_preferredFocusMovementStyle;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (id)_focusedItemRegionContainer;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (struct CGRect)_focusFrameForSCNNode:(id)arg1;
- (id)_getFocusableNodes;
- (void)safeAreaInsetsDidChange;
- (void)_enterBackground:(id)arg1;
- (void)_flushDisplayLink;
- (void)_enterForeground:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToWindow;
- (void)resumeDisplayLink;
- (void)pauseDisplayLink;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_setGestureRecognizers:(id)arg1;
- (void)_updateGestureRecognizers;
- (_Bool)_controlsOwnScaleFactor;
- (void)drawRect:(struct CGRect)arg1;
- (void)displayLayer:(id)arg1;
- (void)setContentScaleFactor:(double)arg1;
@property(retain, nonatomic) EAGLContext *eaglContext;
- (double)_runFPSTestWithDuration:(double)arg1;
@property(readonly, nonatomic) unsigned long long renderingAPI;
- (void)setIbWantsMultisampling:(_Bool)arg1;
- (_Bool)ibWantsMultisampling;
- (void)setIbSceneName:(id)arg1;
- (id)ibSceneName;
- (void)setIbPreferredRenderingAPI:(int)arg1;
- (int)ibPreferredRenderingAPI;
- (void)set_ibPreferredRenderingAPI:(int)arg1;
- (int)_ibPreferredRenderingAPI;
- (void)set_ibWantsMultisampling:(_Bool)arg1;
- (_Bool)_ibWantsMultisampling;
- (void)set_ibSceneName:(id)arg1;
- (id)_ibSceneName;
@property(nonatomic) unsigned long long antialiasingMode;
- (id)_authoringEnvironment;
- (void)set_showsAuthoringEnvironment:(_Bool)arg1;
- (_Bool)_showsAuthoringEnvironment;
@property(nonatomic) unsigned long long debugOptions;
- (void)_updateProbes:(id)arg1 withProgress:(id)arg2;
- (void)set_disableLinearRendering:(_Bool)arg1;
- (_Bool)_disableLinearRendering;
- (void)set_enablesDeferredShading:(_Bool)arg1;
- (_Bool)_enablesDeferredShading;
- (void)switchToNextCamera;
- (void)switchToCameraNamed:(id)arg1;
- (_Bool)_isEditor;
@property(readonly, copy) NSString *description;
- (const void *)__CFObject;
- (void)unlock;
- (void)lock;
- (id)snapshot;
@property(nonatomic) _Bool showsStatistics;
- (void)_sceneDidUpdate:(id)arg1;
- (void)_systemTimeAnimationStarted:(id)arg1;
- (void)_setNeedsDisplay;
@property(nonatomic) long long preferredFramesPerSecond;
- (_Bool)_checkAndUpdateDisplayLinkStateIfNeeded;
- (void)_createDisplayLinkIfNeeded;
- (double)_renderThreadPriority;
- (void)setDisplayLink:(id)arg1;
- (id)displayLink;
- (void)set_wantsSceneRendererDelegationMessages:(_Bool)arg1;
- (_Bool)_wantsSceneRendererDelegationMessages;
@property(retain, nonatomic) SKScene *overlaySKScene;
- (void)prepareObjects:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)prepareObject:(id)arg1 shouldAbortBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) void *context;
@property(nonatomic) _Bool autoenablesDefaultLighting;
@property(nonatomic) double sceneTime;
- (_Bool)isOpaque;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)_updateOpacity;
- (void)_backgroundDidChange;
- (id)_defaultBackgroundColor;
- (void)eventHandlerWantsRedraw;
- (void)setNavigationCameraController:(id)arg1;
- (id)navigationCameraController;
- (id)eventHandler;
- (void)setEventHandler:(id)arg1;
@property(nonatomic) __weak id <SCNSceneRendererDelegate> delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct SCNVector3)unprojectPoint:(struct SCNVector3)arg1;
- (struct SCNVector3)projectPoint:(struct SCNVector3)arg1;
- (id)nodesInsideFrustumWithPointOfView:(id)arg1;
- (_Bool)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
- (id)hitTestWithSegmentFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 options:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 options:(id)arg2;
- (struct SCNVector4)_viewport;
- (double)_flipY:(double)arg1;
- (void)stop:(id)arg1;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
@property(nonatomic) _Bool rendersContinuously;
@property(getter=isPlaying) _Bool playing;
@property(nonatomic) _Bool loops;
@property(readonly, nonatomic) SCNCameraController *defaultCameraController;
@property(readonly, nonatomic) id <SCNCameraControlConfiguration> cameraControlConfiguration;
@property(nonatomic) _Bool allowsCameraControl;
@property(copy, nonatomic) SCNTechnique *technique;
@property(retain, nonatomic) SCNNode *audioListener;
@property(readonly, nonatomic) AVAudioEnvironmentNode *audioEnvironmentNode;
@property(readonly, nonatomic) AVAudioEngine *audioEngine;
- (id)pointOfCulling;
- (void)setPointOfCulling:(id)arg1;
@property(retain, nonatomic) SCNNode *pointOfView;
- (void)setPointOfView:(id)arg1 animate:(_Bool)arg2;
- (void)layoutSubviews;
- (void)_drawAtTime:(double)arg1;
- (struct CGSize)_updateBackingSize;
- (void)_updateContentsScaleFactor;
- (void)_resetContentsScaleFactor;
- (void)updateAtTime:(double)arg1;
- (void)SCN_displayLinkCallback:(double)arg1;
- (id)_renderingQueue;
- (_Bool)scn_inLiveResize;
- (_Bool)_canJitter;
- (_Bool)_supportsJitteringSyncRedraw;
- (void)_jitterRedisplay;
@property(nonatomic, getter=isJitteringEnabled) _Bool jitteringEnabled;
- (void)scn_setBackingLayer:(id)arg1;
- (id)scn_backingLayer;
- (id)renderer;
- (unsigned long long)_renderOptions;
- (void)set_renderOptions:(unsigned long long)arg1;
- (struct SCNMatrix4)_screenTransform;
- (void)set_screenTransform:(struct SCNMatrix4)arg1;
- (double)_superSamplingFactor;
- (void)set_superSamplingFactor:(double)arg1;
@property(retain, nonatomic) SCNScene *scene;
- (void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_selectRenderingAPIWithOptions:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1 options:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit:(id)arg1;
- (void)_initializeDisplayLink;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

