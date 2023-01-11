//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MTPeriodicQueue : NSObject
{
    _Bool _flushTimerEnabled;
    double _flushTimeInterval;
    long long _maximumBatchSize;
    CDUnknownBlockType _flushHandler;
    NSObject<OS_dispatch_queue> *_flushQueue;
    NSMutableArray *_mutableObjects;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_source> *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain, nonatomic) NSMutableArray *mutableObjects; // @synthesize mutableObjects=_mutableObjects;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *flushQueue; // @synthesize flushQueue=_flushQueue;
@property(copy, nonatomic) CDUnknownBlockType flushHandler; // @synthesize flushHandler=_flushHandler;
@property(nonatomic) long long maximumBatchSize; // @synthesize maximumBatchSize=_maximumBatchSize;
@property(nonatomic, getter=isFlushTimerEnabled) _Bool flushTimerEnabled; // @synthesize flushTimerEnabled=_flushTimerEnabled;
@property(nonatomic) double flushTimeInterval; // @synthesize flushTimeInterval=_flushTimeInterval;
- (void)__endFlushTimer;
- (void)_endFlushTimer;
- (void)__beginFlushTimer;
- (void)_beginFlushTimer;
- (void)__flushObjects:(id)arg1 maximumBatchSize:(long long)arg2 flushHandler:(CDUnknownBlockType)arg3;
- (void)__flushObjects:(id)arg1;
- (id)__clearObjects;
- (void)__flushObjects;
- (void)flushObjects;
- (void)insertObjects:(id)arg1;
- (void)insertObject:(id)arg1;
- (void)appendObject:(id)arg1;
- (void)dealloc;
- (id)init;

@end
