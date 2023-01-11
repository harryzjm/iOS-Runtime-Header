//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;
@protocol BPSSubscriber;

@interface _BPSAbstractZip
{
    struct os_unfair_lock_s _lock;
    struct os_unfair_recursive_lock_s _downstreamLock;
    _Bool _cancelled;
    _Bool _errored;
    _Bool _finished;
    _Bool _recursive;
    id <BPSSubscriber> _downstream;
    NSMutableArray *_buffers;
    NSMutableArray *_subscriptions;
    NSMutableArray *_upstreamFinished;
    long long _upstreamCount;
    long long _pendingDemand;
}

- (void).cxx_destruct;
@property(nonatomic) long long pendingDemand; // @synthesize pendingDemand=_pendingDemand;
@property(nonatomic) _Bool recursive; // @synthesize recursive=_recursive;
@property(nonatomic) long long upstreamCount; // @synthesize upstreamCount=_upstreamCount;
@property(retain, nonatomic) NSMutableArray *upstreamFinished; // @synthesize upstreamFinished=_upstreamFinished;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) _Bool errored; // @synthesize errored=_errored;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) NSMutableArray *subscriptions; // @synthesize subscriptions=_subscriptions;
@property(retain, nonatomic) NSMutableArray *buffers; // @synthesize buffers=_buffers;
@property(retain, nonatomic) id <BPSSubscriber> downstream; // @synthesize downstream=_downstream;
- (id)upstreamSubscriptions;
- (id)convertValues:(id)arg1;
- (void)requestDemand:(long long)arg1;
- (void)resolvePendingDemandAndUnlock;
- (void)cancel;
- (void)lockSendCompletion:(id)arg1 index:(long long)arg2;
- (void)receiveCompletion:(id)arg1 index:(long long)arg2;
- (long long)receiveInput:(id)arg1 index:(long long)arg2;
- (void)receiveSubscription:(id)arg1 index:(long long)arg2;
- (id)initWithDownstream:(id)arg1 upstreamCount:(long long)arg2;

@end
