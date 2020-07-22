//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSCondition, NSThread, TSUPointerKeyDictionary, TSURetainedPointerKeyDictionary;
@protocol TSUiOSMemoryWarningFlushable;

__attribute__((visibility("hidden")))
@interface TSUFlushingManager : NSObject
{
    TSURetainedPointerKeyDictionary *_objects;
    struct set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerFlushingOrderLess, std::__1::allocator<TSUFlushableObjectInfo *>> *_sortedObjects;
    struct set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerTimeStampLess, std::__1::allocator<TSUFlushableObjectInfo *>> *_sortedNewObjects;
    TSUPointerKeyDictionary *_inactiveObjects;
    unsigned int _clock;
    _Bool _alwaysFlushing;
    _Bool _stopFlushing;
    _Bool _stopFlushingWhenQueueEmpty;
    _Bool _isFlushing;
    id <TSUiOSMemoryWarningFlushable> _flushingObject;
    NSCondition *_cond;
    NSCondition *_isFlushingCond;
    NSThread *_bgThread;
    unsigned long long _backgroundTransitionTaskId;
    unsigned long long _activeBgThreadTask;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;
+ (id)_singletonAlloc;
- (void)_bgThreadInactive;
- (void)_bgThreadActive;
- (void)_bgTaskFinished;
- (void)_bgTaskStarted;
- (void)_didUseObject:(id)arg1;
- (_Bool)controlsInactiveObject:(id)arg1;
- (_Bool)controlsActiveObject:(id)arg1;
- (void)advanceClock;
- (void)transferNewObjects;
- (void)insertObjectInfo:(struct TSUFlushableObjectInfo *)arg1;
- (struct TSUFlushableObjectInfo *)eraseInfoForObject:(id)arg1;
- (_Bool)isNewObject:(struct TSUFlushableObjectInfo *)arg1;
- (void)_backgroundThread:(id)arg1;
- (void)_stopFlushingObjects;
- (void)_startFlushingObjects;
- (void)_flushAllEligible;
- (void)didReceiveMemoryWarning;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)safeToFlush:(id)arg1 wasAccessed:(_Bool)arg2;
- (void)unsafeToFlush:(id)arg1;
- (void)doneWithObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

