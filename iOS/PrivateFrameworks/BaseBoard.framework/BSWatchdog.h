//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSTimer, NSDate;
@protocol BSWatchdogDelegate, BSWatchdogProviding, OS_dispatch_queue;

@interface BSWatchdog : NSObject
{
    BSTimer *_timer;
    CDUnknownBlockType _completion;
    _Bool _invalidated;
    _Bool _completed;
    _Bool _hasFired;
    id <BSWatchdogDelegate> _delegate;
    id <BSWatchdogProviding> _provider;
    double _timeout;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_startDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=hasFired) _Bool fired; // @synthesize fired=_hasFired;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) id <BSWatchdogProviding> provider; // @synthesize provider=_provider;
@property(retain, nonatomic) id <BSWatchdogDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_watchdogTimerFired;
- (void)_watchdogInvalidated;
- (void)invalidate;
- (void)start;
- (id)description;
- (void)dealloc;
- (id)initWithTimeout:(double)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithTimeout:(double)arg1 queue:(id)arg2;
- (id)initWithProvider:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithProvider:(id)arg1 queue:(id)arg2;

@end
