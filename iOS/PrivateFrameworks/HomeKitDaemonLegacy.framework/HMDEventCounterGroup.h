//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol HMDEventCounterContext;

__attribute__((visibility("hidden")))
@interface HMDEventCounterGroup : HMFObject
{
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_mutableEventCounters;
    id <HMDEventCounterContext> _context;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <HMDEventCounterContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) NSMutableDictionary *mutableEventCounters; // @synthesize mutableEventCounters=_mutableEventCounters;
- (void)forceSave;
- (void)resetEventCounters;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (_Bool)_resetEventCounterForEventName:(id)arg1;
- (void)resetEventCounterForEventName:(id)arg1;
- (unsigned long long)maxCounterName:(id *)arg1;
@property(readonly, nonatomic) unsigned long long summedEventCounters;
@property(readonly, nonatomic) NSDictionary *eventCounters;
- (id)objectForKeyedSubscript:(id)arg1;
- (unsigned long long)fetchEventCounterForEventName:(id)arg1;
- (void)incrementEventCounterForEventName:(id)arg1;
- (void)incrementEventCounterForEventName:(id)arg1 withValue:(unsigned long long)arg2;
- (id)_getOrCreateEventCounterForEventName:(id)arg1;
- (void)addObserver:(id)arg1 forEventName:(id)arg2;
- (id)initWithContext:(id)arg1 serializedEventCounters:(id)arg2;

@end

