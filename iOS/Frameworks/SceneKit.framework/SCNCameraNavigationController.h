//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SceneKit/SCNCameraControllerDelegate-Protocol.h>
#import <SceneKit/SCNEventHandler-Protocol.h>

@class MISSING_TYPE, NSDictionary, NSString, SCNCameraController, SCNNode, SCNView, UIGestureRecognizer;
@protocol SCNCameraNavigationControllerDelegate;

@interface SCNCameraNavigationController : NSObject <SCNEventHandler, SCNCameraControllerDelegate>
{
    UIGestureRecognizer *_pressGesture;
    UIGestureRecognizer *_tapGesture;
    UIGestureRecognizer *_pinchGesture;
    UIGestureRecognizer *_panGesture;
    UIGestureRecognizer *_rotateGesture;
    _Bool _isDraggingWithOneFinger;
    long long _lastGestureFingerCount;
    long long _browseMode;
    float _cameraOriginalFieldOfView;
    float _fieldOfViewZoomFactor;
    float _originalOrthoScale;
    float _orthographicZoomFactor;
    _Bool _enabled;
    _Bool _translationAllowed;
    _Bool _didEverFocusNode;
    _Bool _isSceneBoundingSphereComputed;
    _Bool _cameraTargetComputed;
    _Bool _pinchShouldMoveCamera;
    _Bool _shouldUpdateTarget;
    _Bool _shouldIgnoreMomentumEvents;
    _Bool _isOrbiting;
    _Bool _recordingPointOfViewEvents;
    _Bool _mouseDown;
    CDUnion_915c2b1f _sceneBoundingSphere;
    MISSING_TYPE *_translationOrigin;
    float _initialZoom;
    MISSING_TYPE *_initialPointOfViewWorldPosition;
    double _lastKeyInputTime;
    double _flyModeVelocity;
    double _panSensitivity;
    double _truckSensitivity;
    double _rotationSensitivity;
    struct CGPoint _initialInputLocation;
    struct CGPoint _lastInputLocation;
    struct CGPoint _accumulatedDrag;
    double _lastRotationAngle;
    struct os_unfair_lock_s _drawAtTimeLock;
    struct {
        _Bool stickyMoveEnabled;
        unsigned long long direction__pickedAxis;
        unsigned long long userStickyAxis;
    } _stickyAxis;
    struct {
        _Bool automaticLocationUpToDate;
        _Bool hasAutomatic;
    } _target;
    struct {
        struct CGPoint lastDragLocation;
        struct CGPoint velocity;
        double lastDragTime;
    } _inertia;
    struct {
        struct os_unfair_lock_s lock;
        NSDictionary *keyCodeConfiguration;
        struct set<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short>> keyDown;
        struct vector<unsigned short, std::__1::allocator<unsigned short>> forward;
        struct vector<unsigned short, std::__1::allocator<unsigned short>> backward;
        struct vector<unsigned short, std::__1::allocator<unsigned short>> left;
        struct vector<unsigned short, std::__1::allocator<unsigned short>> right;
    } _keyboard;
    struct {
        _Bool hasShift;
        _Bool hasOption;
    } _scrollWheelModifiers;
    _Bool _enableFreeCamera;
    _Bool _autoSwitchToFreeCamera;
    SCNCameraController *_cameraController;
    id <SCNCameraNavigationControllerDelegate> _delegate;
    SCNView *_view;
    SCNNode *_freeViewCameraNode;
}

@property(nonatomic) double rotationSensitivity; // @synthesize rotationSensitivity=_rotationSensitivity;
@property(nonatomic) double truckSensitivity; // @synthesize truckSensitivity=_truckSensitivity;
@property(nonatomic) double panSensitivity; // @synthesize panSensitivity=_panSensitivity;
@property(nonatomic) double flyModeVelocity; // @synthesize flyModeVelocity=_flyModeVelocity;
@property(nonatomic) _Bool autoSwitchToFreeCamera; // @synthesize autoSwitchToFreeCamera=_autoSwitchToFreeCamera;
@property(nonatomic) _Bool enableFreeCamera; // @synthesize enableFreeCamera=_enableFreeCamera;
@property(readonly, nonatomic) SCNNode *freeCamera; // @synthesize freeCamera=_freeViewCameraNode;
@property(nonatomic) SCNView *view; // @synthesize view=_view;
@property(nonatomic) id <SCNCameraNavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)__didChangePointOfView;
- (void)__willChangePointOfView;
- (void)_translateToViewPoint:(struct CGPoint)arg1;
- (void)_computeTranslationOrigin3DFromPoint:(struct CGPoint)arg1;
- (_Bool)_pointOfViewUsesOrthographicProjection;
- (void)_setPointOfViewOrthographicScale:(float)arg1;
- (float)_pointOfViewOrthographicScale;
- (void)_computeStickyAxisIfNeeded:(struct CGPoint)arg1;
- (_Bool)_computeBoundingSphereOmittingFloorsForNode:(struct __C3DNode *)arg1 sphere:(struct C3DSphere *)arg2;
- (CDUnion_915c2b1f)_sceneBoundingSphere;
- (void)_computeAutomaticTargetPointIfNeeded;
- (struct SCNVector3)cameraAutomaticTargetPoint;
- (MISSING_TYPE *)_defaultTargetForScene:(id)arg1;
- (void)_startBrowsingIfNeeded:(struct CGPoint)arg1;
- (MISSING_TYPE *)worldFront;
- (double)_modeSensitivity;
- (void)panWithGestureRecognizer:(id)arg1;
- (void)pinchWithGestureRecognizer:(id)arg1;
- (void)rotateWithGestureRecognizer:(id)arg1;
- (void)beginGesture:(id)arg1;
- (void)_handlePress:(id)arg1;
- (void)_handleDoubleTap:(id)arg1;
- (void)_handleRotation:(id)arg1;
- (void)_handlePan:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)gestureRecognizers;
- (void)_stopInertia;
- (void)cameraDidChange;
- (void)_willBeginInteraction;
- (void)_setupUpVector;
- (void)cameraWillChange;
- (void)viewDidDrawAtTime:(double)arg1;
- (void)viewWillDrawAtTime:(double)arg1;
- (void)sceneDidChange;
- (void)sceneWillChange;
- (void)cameraInertiaDidEndForController:(id)arg1;
- (void)cameraInertiaWillStartForController:(id)arg1;
- (void)translateByX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (void)setZoomFactor:(double)arg1;
- (float)_orthographicScaleForZoomFactor:(float)arg1;
- (float)_orthographicZoomFactorForProposedZoomFactor:(float)arg1;
- (id)pointOfView;
- (double)zoomFactor;
- (void)zoomBy:(float)arg1;
- (void)zoomBy:(float)arg1 animate:(_Bool)arg2;
- (void)rotateOf:(double)arg1;
- (float)_targetDistance;
- (float)_translationCoef;
- (float)_cappedTranslationDelta:(float)arg1;
- (void)_switchToFreeViewCamera;
- (void)_installFreeViewCameraIfNeeded;
- (void)_prepareFreeViewCamera;
- (_Bool)_freeCameraActivated;
- (void)_resetFreeViewCamera;
- (void)activateFreeCamera;
- (unsigned long long)_effectiveStickyAxis;
@property(nonatomic) unsigned long long stickyAxis;
- (void)focusNodes:(id)arg1;
- (void)focusNode:(id)arg1;
- (_Bool)wantsRedraw;
- (void)setGimbalLockVector:(struct SCNVector3)arg1;
- (struct SCNVector3)gimbalLockVector;
@property(nonatomic) _Bool gimbalLockMode;
@property(nonatomic) struct SCNVector3 cameraTarget;
- (void)invalidateCameraTarget;
@property(nonatomic) _Bool automaticCameraTarget;
@property(nonatomic) double friction;
@property(nonatomic) _Bool enableInertia;
@property(nonatomic) _Bool allowsTranslation;
@property(nonatomic) _Bool enabled;
@property(readonly, nonatomic) SCNCameraController *cameraController; // @synthesize cameraController=_cameraController;
- (void)dealloc;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

