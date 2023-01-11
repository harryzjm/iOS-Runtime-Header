//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VectorKit/VKGesturingCameraController-Protocol.h>
#import <VectorKit/VKNavContextObserver-Protocol.h>
#import <VectorKit/VKNavigationCameraController-Protocol.h>

@class GEOMapRegion, NSString, VKAttachedNavGestureCameraBehavior, VKDetachedNavGestureCameraBehavior, VKGestureCameraBehavior, VKNavContext, VKSceneConfiguration, VKScreenCanvas, VKTimedAnimation;
@protocol VKInteractiveMap><VKMapDataAccess, VKNavGestureCameraBehavior;

__attribute__((visibility("hidden")))
@interface VKNavCameraController <VKNavigationCameraController, VKGesturingCameraController, VKNavContextObserver>
{
    unsigned char _cameraType;
    unsigned char _headingType;
    Unit_3d259e8a _puckCourse;
    Coordinate3D_bc242218 _puckCoordinate;
    Unit_3d259e8a _headingDelta;
    Unit_3d259e8a _headingMinDelta;
    CameraFrame_406dbd31 _lastCalculatedCameraFrame;
    CameraFrame_406dbd31 _cameraFrame;
    _Bool _needsUpdate;
    struct Spring<double, 1, md::SpringType::Linear> _pitchSpring;
    struct Spring<double, 1, md::SpringType::Angular> _headingSpring;
    struct Spring<double, 1, md::SpringType::Linear> _distanceFromTargetSpring;
    struct Spring<double, 2, md::SpringType::Linear> _screenPositionSpring;
    struct Unit<MeterUnitDescription, double> _cameraDistanceFromTarget;
    Unit_3d259e8a _cameraPitch;
    double _previousUpdateTime;
    double _maxZoomScale;
    double _minZoomScale;
    VKGestureCameraBehavior<VKNavGestureCameraBehavior> *_gestureBehavior;
    VKAttachedNavGestureCameraBehavior *_attachedGestureBehavior;
    VKDetachedNavGestureCameraBehavior *_detachedGestureBehavior;
    _Bool _isDetached;
    _Bool _panning;
    _Bool _rotating;
    _Bool _pitching;
    _Bool _zooming;
    VKTimedAnimation *_transitionAnimation;
    VKTimedAnimation *_snapPitchAnimation;
    VKTimedAnimation *_snapHeadingAnimation;
    CameraFrame_406dbd31 _transitionFrame;
    basic_string_23d93216 _currentStyleName;
    vector_36073df6 _coordinatesToFrame;
    unsigned char _styleManeuversToFrame;
    unsigned char _maneuversToFrame;
    double _minCameraHeight;
    double _maxCameraHeight;
    Unit_3d259e8a _minCameraPitch;
    Unit_3d259e8a _maxCameraPitch;
    struct VKEdgeInsets _framingEdgeInset;
    struct VKEdgeInsets _framingEdgeInsetProportional;
    struct VKEdgeInsets _clientFramingInsets;
    Matrix_8746f91e _puckMovementBoundsMin;
    Matrix_8746f91e _puckMovementBoundsMax;
    Matrix_8746f91e _puckScreenPosition;
    double _minHeightDeltaChangeHorizontal;
    double _maxHeightDeltaChangeHorizontal;
    double _minHeightDeltaChangeVertical;
    double _maxHeightDeltaChangeVertical;
    double _halfPuckSize;
    Box_3d7e3c2c _viewableScreenRect;
    Box_3d7e3c2c _framingScreenRect;
    _Bool _enablePan;
    _Bool _enableZoom;
    _Bool _enablePitch;
    _Bool _enableRotate;
    float _panReturnDelayTime;
    unsigned char _alternateFramingSource;
    double _maxFramingDistance;
    double _framingDistanceAfterManeuver;
    VKNavContext *_navContext;
    CDStruct_2c43369c _locationCoordinate;
    struct PolylineCoordinate _routeCoordinate;
    _Bool _frameAllGroupedManeuvers;
    unsigned char _maxManeuversToFrame;
    _Bool _ignorePointsBehind;
    _Bool _insetsAnimating;
    Coordinate3D_bc242218 _routeFocusCoordinate;
    unsigned long long _lastTargetStyleIdentifier;
    double _desiredZoomScale;
    float _animationTime;
    _Bool _isTracking;
    shared_ptr_e963992e _taskContext;
    double _depthNear;
    _Bool _sentZoomNotification;
    VKScreenCanvas<VKInteractiveMap><VKMapDataAccess> *_screenCanvas;
    VKSceneConfiguration *_sceneConfiguration;
    long long _baseDisplayRate;
}

@property(nonatomic) long long baseDisplayRate; // @synthesize baseDisplayRate=_baseDisplayRate;
@property(nonatomic) struct VKEdgeInsets clientFramingInsets; // @synthesize clientFramingInsets=_clientFramingInsets;
@property(nonatomic) VKSceneConfiguration *sceneConfiguration; // @synthesize sceneConfiguration=_sceneConfiguration;
@property(nonatomic) VKScreenCanvas<VKInteractiveMap><VKMapDataAccess> *screenCanvas; // @synthesize screenCanvas=_screenCanvas;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned char)cameraHeadingType;
- (void)canvasDidLayout;
- (void)setCamera:(id)arg1;
- (void)stopAnimations;
- (void)setCameraFrame:(CameraFrame_406dbd31)arg1;
- (CameraFrame_406dbd31)cameraFrame;
- (void)_snapHeading;
- (void)_snapPitch;
- (void)edgeInsetsDidEndAnimating;
- (void)edgeInsetsWillBeginAnimating;
- (Unit_3d259e8a)maxCameraPitch;
- (Unit_3d259e8a)minCameraPitch;
- (double)maxZoomHeight;
- (double)minZoomHeight;
- (double)maxZoomScale;
- (double)minZoomScale;
@property(nonatomic) double zoomScale;
- (void)_updateZoomScaleLimts;
- (void)_setNeedsUpdate;
- (void)navContextCameraHeadingOverrideDidChange:(id)arg1;
- (void)navContextStateDidChange:(id)arg1;
- (void)updateSpringsForFramingCamera;
- (void)_addAdditionalRoutePointsToFrameToList:(vector_36073df6 *)arg1;
- (void)updatePointsToFrame;
- (void)updateManeuversToFrame;
- (Coordinate3D_bc242218)routeCoordinateAtDistance:(double)arg1;
- (Coordinate3D_bc242218)routeLocationAtDistance:(double)arg1 fromManeuver:(unsigned long long)arg2;
- (double)distanceToManeuver:(unsigned long long)arg1;
- (void)updateSpringsForTrackingCamera;
- (Box_3d7e3c2c)calculateViewableScreenRect;
- (Unit_3d259e8a)calculateHeading;
- (void)stop;
- (_Bool)isRotateEnabled;
- (_Bool)isPitchEnabled;
- (void)stopSnappingAnimations;
- (_Bool)_canZoomOut;
- (_Bool)canZoomOutForTileSize:(long long)arg1;
- (_Bool)_canZoomIn;
- (_Bool)canZoomInForTileSize:(long long)arg1;
- (double)topDownMinimumZoomLevel;
- (double)currentZoomLevel;
- (double)maximumZoomLevel;
- (double)minimumZoomLevel;
- (double)_normalizedZoomLevelForDisplayZoomLevel:(double)arg1;
- (_Bool)canEnter3DMode;
- (void)setNavContext:(id)arg1;
- (void)returnToPuck;
- (void)returnToTrackingWithDelay:(double)arg1 resetZoom:(_Bool)arg2;
- (void)animateCameraWithDuration:(float)arg1 fromFrame:(const CameraFrame_406dbd31 *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (CameraFrame_406dbd31)restingCameraFrame;
- (CameraFrame_406dbd31)currentCameraFrame;
@property(nonatomic) double pitch;
@property(nonatomic) double heading;
@property(readonly, nonatomic) double altitude;
@property(nonatomic) double distanceFromCenterCoordinate;
@property(nonatomic) CDStruct_c3b9c2ee centerCoordinate;
- (void)_updateStyles;
- (void)_updateSceneStyles:(_Bool)arg1;
- (void)stylesheetDidReload;
- (void)stylesheetDidChange;
- (_Bool)_updateSprings:(double)arg1;
- (Matrix_2bdd42a3)puckScreenPixel;
- (void)_updateDebugOverlay;
- (void)_updateDebugText;
- (id)_debugText:(_Bool)arg1 showNavCameraDebugConsoleAttributes:(_Bool)arg2;
- (id)detailedDescription;
- (_Bool)_hasRunningAnimation;
- (void)updateWithTimestamp:(double)arg1;
- (void)resetSpringsToResting;
- (void)updateCameraState;
- (_Bool)wantsTimerTick;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(const Coordinate3D_bc242218 *)arg2;
- (void)puckAnimatorDidStop:(id)arg1;
- (void)updateLocation:(const Coordinate3D_bc242218 *)arg1 andCourse:(const Unit_3d259e8a *)arg2;
- (void)puckAnimator:(id)arg1 updatedPosition:(const Coordinate3D_bc242218 *)arg2 course:(const Unit_3d259e8a *)arg3;
- (void)puckAnimator:(id)arg1 runAnimation:(id)arg2;
- (_Bool)isGesturing;
- (void)transferGestureState:(id)arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg1 translation:(double)arg2;
- (void)startPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)updateRotationWithFocusPoint:(struct CGPoint)arg1 newValue:(double)arg2;
- (void)startRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopPanningAtPoint:(struct CGPoint)arg1;
- (void)updatePanWithTranslation:(struct CGPoint)arg1;
- (void)startPanningAtPoint:(struct CGPoint)arg1 panAtStartPoint:(_Bool)arg2;
- (void)_updateObserverCouldZoomIn:(_Bool)arg1 couldZoomOut:(_Bool)arg2;
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setDetached:(_Bool)arg1;
- (void)startWithPounce:(_Bool)arg1 startLocation:(CDStruct_c3b9c2ee)arg2 startCourse:(double)arg3 pounceCompletionHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithTaskContext:(shared_ptr_e963992e)arg1 device:(struct Device *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isFullyPitched;
@property(readonly, nonatomic) _Bool isPitched;
@property(readonly, nonatomic) _Bool isRotated;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) double maxPitch;
@property(readonly) Class superclass;

@end

