//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomePubSub/BPSSubscriber-Protocol.h>

@class BPSSubscription, NSString;
@protocol BMBookmark, BPSSubscriber;

@interface _BPSBookmarkedInner <BPSSubscriber>
{
    struct os_unfair_lock_s _lock;
    id <BPSSubscriber> _downstream;
    NSString *_upstreamClassName;
    BPSSubscription *_subscription;
    id <BMBookmark> _upstreamBookmark;
    id _state;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id state; // @synthesize state=_state;
@property(retain, nonatomic) id <BMBookmark> upstreamBookmark; // @synthesize upstreamBookmark=_upstreamBookmark;
@property(retain, nonatomic) BPSSubscription *subscription; // @synthesize subscription=_subscription;
@property(copy, nonatomic) NSString *upstreamClassName; // @synthesize upstreamClassName=_upstreamClassName;
@property(retain, nonatomic) id <BPSSubscriber> downstream; // @synthesize downstream=_downstream;
- (void)_updateBookmarkWhenLocked;
- (id)newBookmark;
- (void)requestDemand:(long long)arg1;
- (void)cancel;
- (void)receiveSubscription:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveCompletion:(id)arg1;
- (id)initWithUpstream:(id)arg1 downstream:(id)arg2 state:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
