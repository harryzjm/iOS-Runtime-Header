//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomePubSub/BPSSubscriber-Protocol.h>

@class BPSSubscription, NSString;
@protocol BPSSubscriber;

@interface BPSFilterProducer <BPSSubscriber>
{
    struct os_unfair_lock_s _lock;
    id <BPSSubscriber> _downstream;
    long long _state;
    BPSSubscription *_subscription;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BPSSubscription *subscription; // @synthesize subscription=_subscription;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) id <BPSSubscriber> downstream; // @synthesize downstream=_downstream;
- (id)upstreamSubscriptions;
- (void)requestDemand:(long long)arg1;
- (void)cancel;
- (void)receiveSubscription:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveCompletion:(id)arg1;
- (id)receiveNewValue:(id)arg1;
- (id)initWithDownstream:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
