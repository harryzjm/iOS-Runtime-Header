//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, UIScreen;
@protocol LAUIRenderLoopDelegate;

__attribute__((visibility("hidden")))
@interface LAUIRenderLoop : NSObject
{
    id <LAUIRenderLoopDelegate> _delegate;
    _Bool _drawing;
    _Bool _invalidated;
    CADisplayLink *_display_link;
    _Bool _has_high_fps_reason;
    _Bool _background;
    _Bool _delegate_observes_effective_paused;
    _Bool _delegate_observes_runnable;
    _Bool _in_application_context;
    _Bool _effective_paused;
    _Bool _paused;
    _Bool _runnable;
    unsigned int _high_fps_reason;
    UIScreen *_screen;
    struct CAFrameRateRange _preferred_fps_range;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <LAUIRenderLoopDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isRunnable) _Bool runnable; // @synthesize runnable=_runnable;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(readonly, nonatomic, getter=isDrawing) _Bool drawing; // @synthesize drawing=_drawing;
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) __weak UIScreen *screen; // @synthesize screen=_screen;
@property(readonly, nonatomic, getter=effectiveIsPaused) _Bool effectivePaused; // @synthesize effectivePaused=_effective_paused;
@property(nonatomic) unsigned int highFrameRateReason; // @synthesize highFrameRateReason=_high_fps_reason;
@property(nonatomic) struct CAFrameRateRange preferredFrameRateRange; // @synthesize preferredFrameRateRange=_preferred_fps_range;
@property(nonatomic, getter=isInApplicationContext) _Bool inApplicationContext; // @synthesize inApplicationContext=_in_application_context;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_didDraw;
- (void)_willDraw;
- (_Bool)_isForcingPause;
- (void)_didInvalidate;
- (void)invalidate;
- (_Bool)attachToScreen:(id)arg1;
- (void)dealloc;
- (id)init;

@end

