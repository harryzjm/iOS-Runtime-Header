//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VKDaVinciCameraController
{
    void *_mapEngine;
    void *_cameraManager;
    double _currentDoublePanPitch;
    _Bool _isPitching;
    _Bool _isRotating;
    _Bool _wasPitched;
    _Bool _couldEnter3DMode;
    double _lastRotation;
    struct CGPoint _panStartScreenPoint;
    struct CGPoint _panLastScreenPoint;
    double _beganDoublePanPitch;
    _Bool _updateHeight;
}

- (float)maxPitchForNormalizedZoomLevel:(float)arg1;
- (float)idealPitchForNormalizedZoomLevel:(float)arg1;
- (float)minPitchForNormalizedZoomLevel:(float)arg1;
- (double)topDownMinimumZoomLevel;
- (double)currentZoomLevel;
- (double)maximumZoomLevel;
- (double)minimumZoomLevel;
- (void)updateCameraLimits;
- (long long)tileSize;
- (float)minimumNormalizedZoomLevel;
- (float)maximumNormalizedZoomLevel;
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;
- (_Bool)usesVKCamera;
- (void)animateToRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;
- (void)setRegionRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;
- (void)animateRegionWithDuration:(double)arg1 timingFunction:(CDUnknownBlockType)arg2 stepHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setCenterCoordinateDistanceRange:(CDStruct_fbb5cfe5)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;
- (double)pitch;
- (double)heading;
- (double)altitude;
- (double)distanceFromCenterCoordinate;
- (CDStruct_2c43369c)centerCoordinate;
- (Coordinate2D_cb341d5f)centerCoordinateRad;
- (Coordinate2D_cb341d5f)_centerCoordinateForMapRegion:(id)arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (double)zoomForMapRegion:(id)arg1;
- (Unit_5669e52e)widestLatitudeForMapRegion:(id)arg1;
- (Unit_5669e52e)greatCircleMidPointLatitude:(Unit_5669e52e)arg1 fromLongitude:(Unit_5669e52e)arg2 toLongitude:(Unit_5669e52e)arg3;
- (double)earthRadiusAt:(Unit_5669e52e)arg1;
- (double)geocAngleBetween:(Coordinate2D_cb341d5f)arg1 andCoordinate:(Coordinate2D_cb341d5f)arg2;
- (id)mapRegionIgnoringEdgeInsets;
- (id)mapRegion;
- (vector_6baf6815)_getVisibleArea;
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;
- (double)presentationYaw;
- (void)updateCameraManager;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3 duration:(double)arg4 timingFunction:(CDUnknownBlockType)arg5;
- (void)setGesturing:(_Bool)arg1;
- (void)updateState;
- (void)_updateCanEnter3DMode;
- (void)_updateIsPitched;
- (double)maxPitch;
- (double)minPitch;
- (_Bool)isFullyPitched;
- (_Bool)isPitched;
- (_Bool)canEnter3DMode;
- (void)exit3DMode;
- (void)enter3DMode;
- (void)stopGlobeAnimations;
- (void)moveToZoomOutZoomInTransition:(Coordinate2D_cb341d5f)arg1 height:(double)arg2 useHeight:(_Bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;
- (CDUnknownBlockType)createMoveToZoomOutZoomInFrameFunction:(CameraFrame_b765d6d7)arg1 toLatLon:(CameraFrame_b765d6d7)arg2;
- (void)moveTo:(Coordinate2D_cb341d5f)arg1 height:(double)arg2 useHeight:(_Bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;
- (void)moveTo:(Coordinate2D_cb341d5f)arg1 zoom:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 duration:(double)arg5 timingCurve:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)zoomToDistance:(struct CGPoint)arg1 distance:(double)arg2 time:(double)arg3;
- (void)zoomToDistance:(struct CGPoint)arg1 distance:(double)arg2 time:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)tiltTo:(double)arg1 animated:(_Bool)arg2 exaggerate:(_Bool)arg3;
- (void)rotateTo:(double)arg1 animated:(_Bool)arg2;
- (_Bool)snapMapIfNecessary:(_Bool)arg1;
- (void)setCenterCoordinate3D:(CDStruct_071ac149)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)setCenterCoordinate:(CDStruct_2c43369c)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)pitch:(struct CGPoint)arg1 translation:(double)arg2;
- (void)rotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;
- (void)setCamera:(shared_ptr_46708168)arg1;
- (void)dealloc;
- (id)initWithMapDataAccess:(void *)arg1 animationRunner:(struct AnimationRunner *)arg2 runLoopController:(struct RunLoopController *)arg3 cameraDelegate:(id)arg4 mapEngine:(void *)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

