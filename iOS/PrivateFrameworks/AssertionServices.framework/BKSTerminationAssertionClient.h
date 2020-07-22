//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSHashTable, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BKSTerminationAssertionClient
{
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_assertionEfficacyQueue;
    NSMutableDictionary *_efficaciesByBundleID;
}

- (void)_requestAllCurrentAssertions;
- (void)_notifyObserversOfEfficacyChangedTo:(unsigned long long)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_handleEfficacyChangedEvent:(id)arg1;
- (void)connectionWasDestroyed;
- (void)assertionQueue_handleEvent:(id)arg1 ofType:(unsigned long long)arg2;
- (void)assertionQueue_handleMessage:(id)arg1;
- (void)sendDestroyEvent:(id)arg1;
- (void)sendUpdateEvent:(id)arg1;
- (_Bool)sendCreateEvent:(id)arg1 error:(id *)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)terminationAssertionIsHeldForBundleIdentifier:(id)arg1 withEfficacy:(unsigned long long)arg2 error:(id *)arg3;
- (unsigned long long)terminationAssertionEfficacyForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (id)supportedAssertionType;
- (void)dealloc;
- (id)initWithMultiplexer:(id)arg1;

@end

