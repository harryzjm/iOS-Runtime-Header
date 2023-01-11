//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group, PFCoalescerDelegate;

@interface PFCoalescer2 : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    struct mach_timebase_info _timebase;
    unsigned long long _activityDelay;
    unsigned long long _maxActivityDelay;
    unsigned long long _coalescingInterval;
    unsigned long long _processingDelay;
    _Bool _finished;
    _Bool _delegateProcessingInProgress;
    NSObject<OS_dispatch_group> *_postGroup;
    CDUnknownBlockType _leaveBlock;
    unsigned long long _coalesceStart;
    unsigned long long _fireDelay;
    CDUnknownBlockType _postNotice;
    id <PFCoalescerDelegate> _delegate;
}

@property(readonly) __weak id <PFCoalescerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long processingDelay;
@property(nonatomic) unsigned long long coalescingInterval;
@property(nonatomic) unsigned long long maxActivityDelay;
@property(nonatomic) unsigned long long activityDelay;
- (void)finish:(CDUnknownBlockType)arg1;
- (void)mutate:(CDUnknownBlockType)arg1;
- (void)coalesce:(CDUnknownBlockType)arg1;
- (void)postNotice;
- (void)processingComplete;
- (void)postFinishedNotice;
- (void)delayPostBy:(unsigned long long)arg1;
- (id)initWithDelegate:(id)arg1 activityDelay:(unsigned long long)arg2 maxActivityDelay:(unsigned long long)arg3 coalescingInterval:(unsigned long long)arg4 processingDelay:(unsigned long long)arg5;
- (id)initUIControlRefreshCoalescerWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 updateFrequency:(unsigned long long)arg2;
- (id)initWithDelegate:(id)arg1;

@end

