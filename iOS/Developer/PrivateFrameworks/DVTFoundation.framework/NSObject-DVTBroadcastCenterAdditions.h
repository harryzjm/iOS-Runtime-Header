//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface NSObject (DVTBroadcastCenterAdditions)
+ (void)dvt_synthesizeInvalidationWithDeallocAssertionBehavior:(unsigned long long)arg1 multipleInvalidationAssertionBehavior:(unsigned long long)arg2;
+ (void)dvt_synthesizeInvalidation;
+ (_Bool)__classIsDVTInvalidation;
+ (id)_dvt_invalidatableClasses;
+ (void)synthesizeMutableSetProperty:(id)arg1 withInstanceVariable:(id)arg2;
+ (void)synthesizeMutableArrayProperty:(id)arg1 withInstanceVariable:(id)arg2;
+ (id)descriptionForAssertionMessage;
+ (Class)dvt_class;
+ (id)dvt_keyPathOnSelfForUserDefaultsKey:(id)arg1;
+ (id)dvt_creationBacktracesOfObservingTokensForObservedObject:(id)arg1;
+ (void)dvt_cancelAllObservingTokensForOwner:(id)arg1;
- (void)dvt_broadcast:(id)arg1 userInfo:(id)arg2;
- (void)dvt_broadcast:(id)arg1;
- (id)dvt_subscribeToBroadcast:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)dvt_subscribeToBroadcast:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)dvt_subscribeToBroadcast:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)dvt_subscribeToBroadcast:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dvt_performAdditionalInvalidation;
- (_Bool)__isKVOInvalidationZombie;
- (_Bool)__isInvalidationZombie;
- (_Bool)__isDVTInvalidation;
- (void)_dvt_removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)_dvt_removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)_dvt_addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)dvt_cloneByArchiving;
- (void)dvt_logReferenceTree;
@property(setter=dvt_setLeakingFatal:) _Bool dvt_isLeakingFatal;
- (void)dvt_shouldDeallocate;
- (id)dvt_performAfterDelay:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)dvt_performAfterDelay:(double)arg1 inModes:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)dvt_performOnRunLoop:(id)arg1 inModes:(id)arg2 order:(long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)_DVTRunLoopToken_perform:(id)arg1;
- (void)dvt_performVoidReturningSelector:(SEL)arg1 withObject:(id)arg2;
- (void)dvt_performVoidReturningSelector:(SEL)arg1;
- (id)dvt_performNonOwnershipTransferingSelector:(SEL)arg1 withObject:(id)arg2;
- (id)dvt_performNonOwnershipTransferingSelector:(SEL)arg1;
- (id)dvt_extraArchiveData;
- (void)dvt_setExtraArchiveData:(id)arg1;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (id)descriptionForAssertionMessage;
- (void)_dvt_treeDescription:(id)arg1 ofKeyPathsAffectingValueForKey:(id)arg2 depth:(int)arg3;
- (id)dvt_treeDescriptionOfKeyPathsAffectingValueForKey:(id)arg1;
- (id)dvt_observationInfoSummary;
- (id)_dvt_standardUserDefaults;
- (void)dvt_changeValueForKeys:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)dvt_changeValueForKey:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)dvt_newSharedObserverForKeyPath:(id)arg1 observeInitial:(_Bool)arg2 withHandlerBlock:(CDUnknownBlockType)arg3;
- (id)dvt_newObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 withHandlerBlock:(CDUnknownBlockType)arg3;
- (id)dvt_newObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 owner:(id)arg3 withHandlerBlock:(CDUnknownBlockType)arg4;
- (id)_dvt_newObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 owner:(id)arg3 creationBacktrace:(id)arg4 withHandlerBlock:(CDUnknownBlockType)arg5;
- (void)dvt_addObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 owner:(id)arg3 withHandlerBlock:(CDUnknownBlockType)arg4;
- (void)dvt_unregisterValueChangedCallbackForKeyPath:(id)arg1;
- (void)dvt_unregisterValueChangedCallbackForKeyPath:(id)arg1 ofObject:(id)arg2;
- (void)dvt_registerValueChangedCallback:(SEL)arg1 forKeyPath:(id)arg2;
- (void)dvt_registerValueChangedCallback:(SEL)arg1 forKeyPath:(id)arg2 ofObject:(id)arg3;
- (void)_dvt_setObserverTokensForKeyPath:(id)arg1;
- (id)_dvt_observerTokensForKeyPath;
- (void)dvt_removeSharedObserverForKeyPath:(id)arg1;
- (id)dvt_sharedObserverForKeyPath:(id)arg1;
- (void)_dvt_removeObserverFromSharedObserver:(id)arg1 fromKeyPath:(id)arg2 trackingIndexProvider:(CDUnknownBlockType)arg3;
- (id)_dvt_addSharedObserverForKeyPath:(id)arg1 observeInitial:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
@property(nonatomic, readonly) NSArray *dvt_reflectingDebugDescriptionKeyPaths;
@end

