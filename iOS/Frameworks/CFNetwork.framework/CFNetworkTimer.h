//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CFNetworkTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    double _interval;
    double _lastResumeTime;
    double _lastPauseTime;
    double _runTime;
}

- (void)setCancelCallbacks:(CDUnknownBlockType)arg1;
- (void)resumeCallbacksForTimer;
- (void)suspendCallbacksForTimer;
- (void)resumeTimer;
- (void)pauseTimer;
- (void)cancelTimer;
- (void)setTimer:(double)arg1;
- (id)initWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end

