//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray, NSThread, NSTimer;

__attribute__((visibility("hidden")))
@interface _UIScrollViewGestureSimulator : NSObject
{
    struct __CFRunLoopSource *_mainThreadRunLoopSource;
    NSMutableArray *_simulatedGestures;
    NSThread *_workThread;
    CADisplayLink *_displayLink;
    NSTimer *_timer;
    _Bool _hasSimulatedGestures;
    double _lastWakeUpTime;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_update;
- (void)_setHasSimulatedGestures:(id)arg1;
- (void)_signalMainThreadIfNecessary;
- (void)_displayLinkDidFire:(id)arg1;
- (void)_threadMain;
- (void)simulateGestureWithDuration:(double)arg1 begin:(CDUnknownBlockType)arg2 update:(CDUnknownBlockType)arg3 end:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

@end

