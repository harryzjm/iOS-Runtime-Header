//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VKNavCameraController, VKTimedAnimation;

__attribute__((visibility("hidden")))
@interface VKDetachedNavGestureCameraBehavior
{
    VKNavCameraController *_navCameraController;
    double _startZoomScale;
    Unit_5669e52e _startPitch;
    VKTimedAnimation *_tapZoomAnimation;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updatePitch:(struct CGPoint)arg1 degrees:(double)arg2;
- (void)updatePitch:(struct CGPoint)arg1 translation:(double)arg2;
- (void)beginPitch:(struct CGPoint)arg1;
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithNavCameraController:(id)arg1;

@end

