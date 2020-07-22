//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _HKExpiringCompletionTimer;
@protocol OS_dispatch_queue;

@interface _HDFTMProducerMetricTracker : NSObject
{
    _HKExpiringCompletionTimer *_timer;
    CDUnknownBlockType _timeoutHandler;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _paused;
    _Bool _metricAvailable;
}

@property(readonly, nonatomic) _Bool metricAvailable; // @synthesize metricAvailable=_metricAvailable;
- (void).cxx_destruct;
- (void)_startTimer;
- (void)resume;
- (void)pause;
- (void)invalidate;
- (void)metricReceived;
- (id)initWithTimeoutHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;

@end

