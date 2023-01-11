//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSEnumerator;
@protocol BPSSubscriber;

@interface _BPSSequenceInner
{
    struct os_unfair_lock_s _lock;
    _Bool _recursion;
    id <BPSSubscriber> _downstream;
    NSArray *_sequence;
    long long _pendingDemand;
    id _next;
    NSEnumerator *_enumerator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSEnumerator *enumerator; // @synthesize enumerator=_enumerator;
@property(retain, nonatomic) id next; // @synthesize next=_next;
@property(nonatomic) _Bool recursion; // @synthesize recursion=_recursion;
@property(nonatomic) long long pendingDemand; // @synthesize pendingDemand=_pendingDemand;
@property(retain, nonatomic) NSArray *sequence; // @synthesize sequence=_sequence;
@property(retain, nonatomic) id <BPSSubscriber> downstream; // @synthesize downstream=_downstream;
- (id)upstreamSubscriptions;
- (void)cancel;
- (void)requestDemand:(long long)arg1;
- (id)initWithDownstream:(id)arg1 sequence:(id)arg2;

@end
