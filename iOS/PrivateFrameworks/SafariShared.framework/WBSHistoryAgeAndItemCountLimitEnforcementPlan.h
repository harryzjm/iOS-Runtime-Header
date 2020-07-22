//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, WBSHistoryDeletionPlan;
@protocol WBSHistoryStore;

@interface WBSHistoryAgeAndItemCountLimitEnforcementPlan : NSObject
{
    id <WBSHistoryStore> _store;
    NSSet *_items;
    double _ageLimit;
    unsigned long long _itemCountLimit;
    long long _reason;
    NSSet *_itemsToKeep;
    NSSet *_itemsToDiscard;
    WBSHistoryDeletionPlan *_deletionPlan;
}

@property(readonly, nonatomic) WBSHistoryDeletionPlan *deletionPlan; // @synthesize deletionPlan=_deletionPlan;
@property(readonly, nonatomic) NSSet *itemsToDiscard; // @synthesize itemsToDiscard=_itemsToDiscard;
@property(readonly, nonatomic) NSSet *itemsToKeep; // @synthesize itemsToKeep=_itemsToKeep;
- (void).cxx_destruct;
- (id)_itemsToDiscard;
- (void)execute;
- (void)prepare;
- (id)initWithSQLiteStore:(id)arg1 items:(id)arg2 ageLimit:(double)arg3 itemCountLimit:(unsigned long long)arg4 reason:(long long)arg5;

@end

