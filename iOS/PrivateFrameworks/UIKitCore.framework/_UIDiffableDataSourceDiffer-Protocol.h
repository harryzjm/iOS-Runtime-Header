//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSHashTable, _UIIdentifierDiffer;
@protocol _UIDiffableDataSourceState;

@protocol _UIDiffableDataSourceDiffer
@property(readonly, nonatomic) NSHashTable *affectedSectionIdentifiers;
@property(readonly, nonatomic) _UIIdentifierDiffer *sectionIdentifierDiffer;
@property(readonly, nonatomic) _UIIdentifierDiffer *itemIdentifierDiffer;
@property(readonly, nonatomic) id <_UIDiffableDataSourceState> afterDataSourceState;
@property(readonly, nonatomic) id <_UIDiffableDataSourceState> beforeDataSourceState;
@property(readonly, nonatomic) NSArray *updates;
@property(readonly, nonatomic) _Bool snapshotsAreRelated;
@property(readonly, nonatomic) _Bool hasDifferences;
@end
