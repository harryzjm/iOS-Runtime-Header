//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLSHBacklightEnvironmentPresentation, BLSHPresentationDateSpecifier, NSArray, NSMutableArray, NSMutableSet, NSString;
@protocol BLSHEngineRenderFlipbookSessionDelegate, BLSHFlipbook, BLSHOSInterfaceProviding, BSTimerScheduleQuerying><BSCancellable><BSInvalidatable;

__attribute__((visibility("hidden")))
@interface BLSHEngineRenderFlipbookSession : NSObject
{
    id <BLSHFlipbook> _flipbook;
    struct os_unfair_lock_s _lock;
    BLSHPresentationDateSpecifier *_lock_preparingSpecifier;
    NSMutableSet *_lock_pendingEnvironments;
    NSMutableArray *_lock_renderedFrames;
    id <BSTimerScheduleQuerying><BSCancellable><BSInvalidatable> _lock_timeoutTimer;
    id <BLSHEngineRenderFlipbookSessionDelegate> _lock_delegate;
    id <BLSHOSInterfaceProviding> _osInterfaceProvider;
    unsigned long long _stateHandler;
    double _sessionStartTime;
    double _lock_layoutStartTime;
    double _lock_accumulatedLayoutDuration;
    double _lock_accumulatedRenderDuration;
    int _lock_retryRenderCount;
    _Bool _lock_didFailToRender;
    _Bool _lock_timedOut;
    _Bool _lock_invalidated;
    _Bool _lock_didDisableFlipbookPowerSavings;
    BLSHBacklightEnvironmentPresentation *_presentation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BLSHBacklightEnvironmentPresentation *presentation; // @synthesize presentation=_presentation;
- (id)telemetryDataWithEndTime:(double)arg1 reasonEnded:(id)arg2 preventedSleepDuration:(double)arg3;
- (void)prepareAndRenderFrameSpecifier:(id)arg1;
- (void)invalidate;
@property(readonly, nonatomic) NSArray *renderedFrames;
@property(readonly, nonatomic) unsigned long long memoryUsage;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 flipbook:(id)arg2 presentation:(id)arg3 osInterfaceProvider:(id)arg4;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

