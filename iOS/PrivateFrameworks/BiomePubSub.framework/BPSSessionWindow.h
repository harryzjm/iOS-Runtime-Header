//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BPSSubscriptionStatus, NSDateInterval, NSString;

@interface BPSSessionWindow
{
    struct os_unfair_lock_s _lock;
    BPSSubscriptionStatus *_status;
    NSString *_identifier;
    _Bool _downstreamRequested;
    CDUnknownBlockType _timestamp;
    NSDateInterval *_dateInterval;
    double _gap;
    id _accumulator;
    CDUnknownBlockType _closure;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType closure; // @synthesize closure=_closure;
@property(readonly, nonatomic) id accumulator; // @synthesize accumulator=_accumulator;
@property(readonly, nonatomic) double gap; // @synthesize gap=_gap;
@property(readonly, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
- (void)requestDemand:(long long)arg1;
- (void)cancel;
- (void)receiveSubscription:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveCompletion:(id)arg1;
- (id)metadata;
- (id)identifier;
- (id)initWithDateInterval:(id)arg1 gap:(double)arg2 timestamp:(CDUnknownBlockType)arg3 aggregator:(id)arg4 identifier:(id)arg5;

@end
