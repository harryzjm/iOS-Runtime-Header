//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VKDaVinciGestureCameraController
{
    void *_cameraManager;
    double _beganDoublePanPitch;
    double _currentDoublePanPitch;
    _Bool _isPitchIncreasing;
}

- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;
- (_Bool)isPitchIncreasing;
- (void)endPitch:(struct CGPoint)arg1;
- (void)updatePitch:(struct CGPoint)arg1 degrees:(double)arg2;
- (void)updatePitch:(struct CGPoint)arg1 translation:(double)arg2;
- (void)beginPitch:(struct CGPoint)arg1;
- (void)endRotate:(struct CGPoint)arg1;
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;
- (void)beginRotate:(struct CGPoint)arg1;
- (void)endPan:(struct CGPoint)arg1;
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;
- (void)beginPan:(struct CGPoint)arg1;
- (void)endZoom:(struct CGPoint)arg1;
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)beginZoom:(struct CGPoint)arg1;
- (id)initWithCameraController:(id)arg1 cameraManager:(void *)arg2;

@end

