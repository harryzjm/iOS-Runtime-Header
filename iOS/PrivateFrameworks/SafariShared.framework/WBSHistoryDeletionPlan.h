//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableSet, NSSet;
@protocol WBSHistoryStore;

@interface WBSHistoryDeletionPlan : NSObject
{
    id <WBSHistoryStore> _store;
    NSSet *_excludedItems;
    NSSet *_excludedVisits;
    NSMutableSet *_discoveredItemsToDelete;
    _Bool _wasPrepared;
    NSSet *_triggeringItems;
    NSSet *_triggeringVisits;
    NSSet *_discoveredVisitsToDelete;
    NSMapTable *_updatedLastVisitsByItem;
}

@property(readonly, nonatomic) _Bool wasPrepared; // @synthesize wasPrepared=_wasPrepared;
@property(readonly, nonatomic) NSMapTable *updatedLastVisitsByItem; // @synthesize updatedLastVisitsByItem=_updatedLastVisitsByItem;
@property(readonly, nonatomic) NSSet *discoveredVisitsToDelete; // @synthesize discoveredVisitsToDelete=_discoveredVisitsToDelete;
@property(readonly, nonatomic) NSSet *discoveredItemsToDelete; // @synthesize discoveredItemsToDelete=_discoveredItemsToDelete;
@property(readonly, nonatomic) NSSet *triggeringVisits; // @synthesize triggeringVisits=_triggeringVisits;
@property(readonly, nonatomic) NSSet *triggeringItems; // @synthesize triggeringItems=_triggeringItems;
- (void).cxx_destruct;
- (id)_extraVisitsToDeleteWhenDeletingItems:(id)arg1 visits:(id)arg2 relatedVisitKey:(id)arg3 relatedVisitsQueryFactory:(CDUnknownBlockType)arg4;
- (id)_extraVisitsToDeleteWhenDeletingItems:(id)arg1 visits:(id)arg2;
- (void)_prepareWithTriggeringItems:(id)arg1 triggeringVisits:(id)arg2;
- (void)execute;
- (void)prepare;
@property(readonly, nonatomic) NSMapTable *allVisitsToDeleteByItemExcludingItemsBeingDeleted;
@property(readonly, nonatomic) NSSet *allVisitsToDeleteExcludingVisitsFromItemsBeingDeleted;
@property(readonly, nonatomic) NSSet *allItemsToDelete;
- (id)initWithSQLiteStore:(id)arg1 triggeringVisits:(id)arg2 excludingItems:(id)arg3 visits:(id)arg4;
- (id)initWithSQLiteStore:(id)arg1 triggeringItems:(id)arg2 excludingItems:(id)arg3 visits:(id)arg4 reason:(long long)arg5;

@end

