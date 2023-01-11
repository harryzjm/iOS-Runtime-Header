//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary, REObserverStore;

@interface REElementCoordinator
{
    NSMutableDictionary *_displayElements;
    REObserverStore *_observers;
    _Bool _performingBatch;
    NSMutableArray *_updates;
}

+ (id)applicationPrewarmIdentifiers;
- (void).cxx_destruct;
- (void)collectLoggableState:(CDUnknownBlockType)arg1;
- (void)_performOperationsToDisplayElements:(id)arg1 toSection:(id)arg2;
- (void)_performOperationsToDisplayElements:(id)arg1;
- (void)_performOperation:(id)arg1 toObserver:(id)arg2;
- (void)_enqueueOrPerformOperation:(id)arg1;
- (void)refreshElement:(id)arg1 atPath:(id)arg2;
- (void)moveElement:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3;
- (void)removeElement:(id)arg1 atPath:(id)arg2;
- (void)insertElement:(id)arg1 atPath:(id)arg2;
- (void)reloadElement:(id)arg1 atPath:(id)arg2;
- (void)performBatchUpdateBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)pathForElement:(id)arg1;
- (unsigned long long)numberOfElementsInSection:(id)arg1;
- (id)elementAtPath:(id)arg1;
- (id)displayElements;
@property(readonly, nonatomic) unsigned long long numberOfObservers;
- (void)enumerateObservers:(CDUnknownBlockType)arg1;
- (void)didRemoveObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)didAddObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithRelevanceEngine:(id)arg1;

@end
