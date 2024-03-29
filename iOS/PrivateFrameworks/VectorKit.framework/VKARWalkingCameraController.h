//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VKARWalkingCameraController
{
    void *_arLogic;
    void *_elevationLogic;
    struct Quaternion<double> _rotationCorrectionQuaternion;
    Coordinate3D_b0aa8be1 _coordinate;
    struct EulerAngles _eulerAngles;
    Unit_6d5b752b _heading;
    struct vector<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent>, std::allocator<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent>>> _gestures;
    struct Monitorable<md::ConfigValue<GEOConfigKeyDouble, double>> _maxClipDistance;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stopTrackingAnnotation;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3 duration:(double)arg4 timingFunction:(CDUnknownBlockType)arg5;
- (double)maxPitch;
- (double)minPitch;
- (double)topDownMinimumZoomLevel;
- (double)currentZoomLevel;
- (double)maximumZoomLevel;
- (double)minimumZoomLevel;
- (_Bool)usesVKCamera;
- (double)pitch;
- (void)setPitch:(double)arg1;
- (double)presentationHeading;
- (double)heading;
- (void)setHeading:(double)arg1;
- (void)setAltitude:(double)arg1;
- (double)altitude;
- (double)distanceFromCenterCoordinate;
- (void)setDistanceFromCenterCoordinate:(double)arg1;
- (CDStruct_2c43369c)centerCoordinate;
- (void)setCenterCoordinate:(CDStruct_2c43369c)arg1;
- (void)setCamera:(shared_ptr_46708168)arg1;
- (void)setVkCamera:(id)arg1;
- (void)setCenterCoordinate:(CDStruct_2c43369c)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)_updateDebugOverlay:(void *)arg1;
- (id)_buildDebugString:(void *)arg1;
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;
- (void)_updateClipPlanes;
- (void *)_locationProvider;
- (void)pushGesture:(void *)arg1;
- (id)initWithTaskContext:(shared_ptr_e963992e)arg1 mapDataAccess:(void *)arg2 animationRunner:(struct AnimationRunner *)arg3 runLoopController:(struct RunLoopController *)arg4 cameraDelegate:(id)arg5 arLogic:(void *)arg6 elevationLogic:(void *)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

