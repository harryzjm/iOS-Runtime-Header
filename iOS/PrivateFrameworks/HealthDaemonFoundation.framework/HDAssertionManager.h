//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDAssertionManager : NSObject
{
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableDictionary *_assertionRecordsByIdentifier;
    NSMutableDictionary *_observerSetsByAssertionIdentifier;
    _Bool _invalidated;
    _Bool _consumeBudgets;
    NSObject<OS_dispatch_source> *_budgetConsumptionTimer;
    NSObject<OS_dispatch_queue> *_budgetTimerQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *budgetTimerQueue; // @synthesize budgetTimerQueue=_budgetTimerQueue;
- (void)_releaseAssertion:(id)arg1;
- (void)invalidate;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forAssertionIdentifier:(id)arg2;
- (void)addObserver:(id)arg1 forAssertionIdentifier:(id)arg2 queue:(id)arg3;
- (void)suspendBudgetConsumption;
- (void)resumeBudgetConsumption;
- (_Bool)takeAssertion:(id)arg1;
- (id)ownerIdentifiersForAssertionIdentifier:(id)arg1;
- (id)allAssertionsForIdentifier:(id)arg1;
- (id)activeAssertionsForIdentifier:(id)arg1;
- (_Bool)hasActiveAssertion:(id)arg1;
- (_Bool)hasActiveAssertionForIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;

@end
