//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ISObservable : NSObject
{
    long long _nestedChanges;
    NSMutableArray *_pendingChangeBlocks;
    long long _numAppliedPendingChanges;
    unsigned long long _currentChange;
    _Bool _isEnumeratingObservers;
    NSObject<OS_dispatch_queue> *_observersQueue;
    _Bool _observersQueue_shouldCopyChangeObserversOnWrite;
    NSMapTable *_observersQueue_changeObserversWithContexts;
    _Bool _hasObservers;
}

@property(readonly, nonatomic) _Bool hasObservers; // @synthesize hasObservers=_hasObservers;
- (void).cxx_destruct;
- (void)_observersQueue_copyChangeObserversForWriteIfNeeded;
- (void)_applyPendingChanges;
- (void)_publishChanges;
- (void)_didChange;
- (void)_willChange;
- (void)_setHasObservers:(_Bool)arg1;
- (void)enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;
- (void)signalChange:(unsigned long long)arg1;
- (void)hasObserversDidChange;
- (void)didPublishChanges;
- (void)didPerformChanges;
- (void)willPerformChanges;
- (id)mutableChangeObject;
- (void)unregisterChangeObserver:(id)arg1 context:(void *)arg2;
- (void)registerChangeObserver:(id)arg1 context:(void *)arg2;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)init;

@end

