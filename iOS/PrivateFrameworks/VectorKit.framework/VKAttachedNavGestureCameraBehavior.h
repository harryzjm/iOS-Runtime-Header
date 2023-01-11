//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VectorKit/VKNavGestureCameraBehavior-Protocol.h>

@class NSString, VKNavCameraController, VKTimedAnimation;

__attribute__((visibility("hidden")))
@interface VKAttachedNavGestureCameraBehavior <VKNavGestureCameraBehavior>
{
    VKNavCameraController *_navCameraController;
    double _startZoomScale;
    VKTimedAnimation *_tapZoomAnimation;
}

- (void)updatePitch:(struct CGPoint)arg1 degrees:(double)arg2;
- (void)updatePitch:(struct CGPoint)arg1 translation:(double)arg2;
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)beginZoom:(struct CGPoint)arg1;
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_startZoomAnimationFrom:(double)arg1 to:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithNavCameraController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
