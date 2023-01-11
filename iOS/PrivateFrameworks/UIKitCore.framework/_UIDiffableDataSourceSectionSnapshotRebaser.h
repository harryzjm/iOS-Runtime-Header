//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDiffableDataSourceSnapshot, NSMapTable, _UIDiffableDataSourceDiffer;

__attribute__((visibility("hidden")))
@interface _UIDiffableDataSourceSectionSnapshotRebaser : NSObject
{
    NSDiffableDataSourceSnapshot *_initialSnapshot;
    NSDiffableDataSourceSnapshot *_finalSnapshot;
    _UIDiffableDataSourceDiffer *_dataSourceDiffer;
    NSMapTable *_initialSectionSnapshots;
    NSMapTable *_rebasedSectionSnapshots;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMapTable *rebasedSectionSnapshots; // @synthesize rebasedSectionSnapshots=_rebasedSectionSnapshots;
- (id)_computeSectionTransactionsIncludingSectionDifferences:(_Bool)arg1;
- (id)_transactionIncludingSectionDifferences:(_Bool)arg1 source:(long long)arg2;
- (id)computeApplyTransactionIncludingSectionDifferences:(_Bool)arg1;
- (id)computeReorderingTransaction;
- (void)_rebaseForInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 initialSectionSnapshots:(id)arg3 dataSourceDiffer:(id)arg4 shouldPerformChildSnapshotMoves:(_Bool)arg5;
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 initialSectionSnapshots:(id)arg3 dataSourceDiffer:(id)arg4 shouldPerformChildSnapshotMoves:(_Bool)arg5;
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 initialSectionSnapshots:(id)arg3 dataSourceDiffer:(id)arg4;
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 initialSectionSnapshots:(id)arg3;

@end
