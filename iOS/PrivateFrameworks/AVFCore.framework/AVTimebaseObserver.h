//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVWeakReference;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AVTimebaseObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_timerQueue;
    AVWeakReference *_weakReference;
    NSObject<OS_dispatch_source> *_timerSource;
    struct OpaqueCMTimebase *_timebase;
    _Bool _isObservingTimebase;
    double _lastRate;
    double _currentRate;
    _Bool _invalid;
}

@property(readonly, nonatomic, getter=_weakReference) AVWeakReference *weakReference; // @synthesize weakReference=_weakReference;
- (void)_stopObservingTimebaseNotifications;
- (void)_startObservingTimebaseNotifications;
- (void)_removeTimebaseFromTimerSource;
- (void)_finishInitializationWithTimerEventHandler:(CDUnknownBlockType)arg1;
- (void)_attachTimerSourceToTimebase;
@property(readonly, nonatomic) _Bool invalidated;
- (void)_effectiveRateChanged;
- (void)_handleTimeDiscontinuity;
- (void)_resetNextFireTime;
- (void)_reallyInvalidate;
- (void)invalidate;
@property(readonly) struct OpaqueCMTimebase *timebase;
- (void)dealloc;
- (id)initWithTimebase:(struct OpaqueCMTimebase *)arg1 queue:(id)arg2;

@end

