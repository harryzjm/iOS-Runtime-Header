//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VKTimedAnimation;

__attribute__((visibility("hidden")))
@interface VKARCameraController
{
    shared_ptr_e963992e _taskContext;
    void *_globeView;
    void *_mapEngine;
    double _currentZoomLevel;
    double _maxZoomLevel;
    double _height;
    double _altitudeOffset;
    Unit_5669e52e _fovy;
    RigidTransform_b9386d13 _offsetTransform;
    CameraFrame_b765d6d7 _cameraFrame;
    RigidTransform_b9386d13 _baseTransform;
    RigidTransform_b9386d13 _arTransform;
    RigidTransform_b9386d13 _currentARTransform;
    RigidTransform_b9386d13 _lastARTransform;
    struct Quaternion<double> _arOrientation;
    VKTimedAnimation *_transitionAnimation;
    long long _interfaceOrientation;
    struct Quaternion<double> _interfaceOrientationRotation;
    Coordinate2D_cb341d5f _currentCoordinate;
    _Bool _overrideARFieldOfView;
    Unit_6d5b752b _fieldOfView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) Unit_6d5b752b fieldOfView; // @synthesize fieldOfView=_fieldOfView;
@property(nonatomic) RigidTransform_b9386d13 offsetTransform; // @synthesize offsetTransform=_offsetTransform;
@property(nonatomic) _Bool overrideARFieldOfView; // @synthesize overrideARFieldOfView=_overrideARFieldOfView;
@property(nonatomic) void *mapEngine; // @synthesize mapEngine=_mapEngine;
@property(nonatomic) void *globeView; // @synthesize globeView=_globeView;
- (void)arSessionWasInterrupted:(unsigned long long)arg1;
- (void)updateCameraFrameFromARTransform;
@property(readonly, nonatomic) float heightScale;
- (RigidTransform_b9386d13)arCameraTransform;
- (void)trasitionToARModeFromCameraFrame:(const void *)arg1 withDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (CameraFrame_b765d6d7)cameraFrame;
- (void)trasitionToARModeAtCoordinate:(CDStruct_2c43369c)arg1 withDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setupPounceAnimation:(const void *)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateBaseTransform;
- (void)_updateARContext;
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;
- (void)updateWithARSession:(id)arg1;
- (void)setCamera:(shared_ptr_46708168)arg1;
- (void)setMaxZoomLevel:(double)arg1;
- (void)setCurrentZoomLevel:(double)arg1;
- (double)topDownMinimumZoomLevel;
- (double)currentZoomLevel;
- (double)maximumZoomLevel;
- (double)minimumZoomLevel;
- (double)_fovAdjustment;
- (double)pitch;
- (double)heading;
- (double)altitude;
- (double)distanceFromCenterCoordinate;
- (CDStruct_2c43369c)centerCoordinate;
- (id)mapRegionIgnoringEdgeInsets;
- (id)mapRegion;
- (Matrix_6e1d3589)_intersectAndResolveWorldCollision:(const void *)arg1;
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;
- (double)presentationYaw;
- (double)maxPitch;
- (double)minPitch;
- (_Bool)isFullyPitched;
- (_Bool)isPitched;
- (Geocentric_d8fde6f2)cameraPosition;
- (void)updateGlobeFromCamera;
- (long long)tileSize;
- (void)dealloc;
- (id)initWithTaskContext:(shared_ptr_e963992e)arg1 mapDataAccess:(struct MapDataAccess *)arg2 animationRunner:(struct AnimationRunner *)arg3 runLoopController:(struct RunLoopController *)arg4 cameraDelegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

