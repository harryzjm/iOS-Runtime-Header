//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationThrottlerDelegate-Protocol.h>

@class FCCacheCoordinatorFlushPolicy, FCThreadSafeMutableDictionary, NFUnfairLock, NSCountedSet, NSMutableSet, NSSet, NSString;
@protocol FCCacheCoordinatorDelegate, FCCacheCoordinatorLocking, FCOperationThrottler;

@interface FCCacheCoordinator : NSObject <FCOperationThrottlerDelegate>
{
    _Bool _flushingEnabled;
    id <FCCacheCoordinatorDelegate> _delegate;
    NSMutableSet *_storedKeys;
    NSCountedSet *_interestedKeys;
    FCThreadSafeMutableDictionary *_cacheHintsByKey;
    NFUnfairLock *_interestLock;
    id <FCCacheCoordinatorLocking> _underlyingLock;
    id <FCOperationThrottler> _flushThrottler;
    FCCacheCoordinatorFlushPolicy *_flushPolicy;
}

- (void).cxx_destruct;
@property(getter=isFlushingEnabled) _Bool flushingEnabled; // @synthesize flushingEnabled=_flushingEnabled;
@property(retain) FCCacheCoordinatorFlushPolicy *flushPolicy; // @synthesize flushPolicy=_flushPolicy;
@property(retain, nonatomic) id <FCOperationThrottler> flushThrottler; // @synthesize flushThrottler=_flushThrottler;
@property(retain, nonatomic) id <FCCacheCoordinatorLocking> underlyingLock; // @synthesize underlyingLock=_underlyingLock;
@property(retain, nonatomic) NFUnfairLock *interestLock; // @synthesize interestLock=_interestLock;
@property(retain, nonatomic) FCThreadSafeMutableDictionary *cacheHintsByKey; // @synthesize cacheHintsByKey=_cacheHintsByKey;
@property(retain, nonatomic) NSCountedSet *interestedKeys; // @synthesize interestedKeys=_interestedKeys;
@property(retain, nonatomic) NSMutableSet *storedKeys; // @synthesize storedKeys=_storedKeys;
@property(nonatomic) __weak id <FCCacheCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)performWriteSync:(CDUnknownBlockType)arg1;
- (void)performReadSync:(CDUnknownBlockType)arg1;
- (void)_modifyCacheHintForKeys:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)filterKeysForPreemptiveFlush:(id)arg1 cacheHints:(id)arg2;
- (void)didAccessKeys:(id)arg1;
- (void)removeInterestInKeys:(id)arg1;
- (void)addInterestInKeys:(id)arg1;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (void)enableFlushingWithPolicy:(id)arg1;
- (id)persistableHints;
- (void)didRemoveKeysFromCache:(id)arg1;
- (void)didInsertKeysIntoCache:(id)arg1 withLifetimeHints:(id)arg2;
- (void)didInsertKeyIntoCache:(id)arg1 withLifetimeHint:(long long)arg2;
- (_Bool)cacheContainsKey:(id)arg1;
- (void)performCacheWrite:(CDUnknownBlockType)arg1;
- (void)performCacheRead:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSSet *keysWithNonZeroInterest;
@property(readonly, nonatomic) NSSet *keysWithZeroInterest;
- (id)holdTokensForKeys:(id)arg1;
- (id)holdTokenForKeys:(id)arg1;
- (id)holdTokenForKey:(id)arg1;
- (void)setupWithInitialKeys:(id)arg1 persistedHints:(id)arg2;
- (void)setupWithInitialKeys:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
