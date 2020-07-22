//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKUpNextLoggable-Protocol.h>

@class NSHashTable, NSMutableArray, NSRecursiveLock, NSString;

@interface NTKUpNextElementCoordinator : NSObject <NTKUpNextLoggable>
{
    NSMutableArray *_displayElements;
    NSHashTable *_observers;
    NSRecursiveLock *_observersLock;
    _Bool _performingBatch;
    NSMutableArray *_updates;
}

+ (id)applicationPrewarmIdentifiers;
- (void).cxx_destruct;
- (id)loggedState;
- (id)logName;
- (void)postEvent:(id)arg1 fromObserver:(id)arg2;
- (void)elementAtIndexPathDidBecomeHidden:(id)arg1 fromObserver:(id)arg2;
- (void)elementAtIndexPathWillBecomeVisible:(id)arg1 fromObserver:(id)arg2;
- (void)observerDidUpdateDisabledDataSources:(id)arg1;
- (void)observerDidUpdateState:(id)arg1;
- (void)_performOperationsToDisplayElements:(id)arg1 toSection:(unsigned long long)arg2;
- (void)_performOperationsToDisplayElements:(id)arg1;
- (void)_performOperation:(id)arg1 toObserver:(id)arg2;
- (void)_enqueueOrPerformOperation:(id)arg1;
- (void)refreshElement:(id)arg1 atIndexPath:(id)arg2;
- (void)moveElement:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)removeElement:(id)arg1 atIndexPath:(id)arg2;
- (void)insertElement:(id)arg1 atIndexPath:(id)arg2;
- (void)reloadElement:(id)arg1 atIndexPath:(id)arg2;
- (void)performBatchUpdateBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)complicationDescriptors;
- (id)indexPathForElement:(id)arg1;
- (unsigned long long)numberOfElementsInSection:(unsigned long long)arg1;
- (id)elementAtIndexPath:(id)arg1;
- (id)displayElements;
- (unsigned long long)numberOfObservers;
- (void)enumerateObservers:(CDUnknownBlockType)arg1;
- (void)didRemoveObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)didAddObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

