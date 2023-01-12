//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet;
@protocol NSFileProviderEnumerationObserver, NSFileProviderItem, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCRecentsEnumeratorBatch : NSObject
{
    NSMutableOrderedSet<NSFileProviderItem> *_toIndexItems;
    NSMutableOrderedSet *_deletedItemIDs;
    NSObject<OS_dispatch_queue> *_queue;
    id <NSFileProviderEnumerationObserver> _observer;
    unsigned long long _rank;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long rank; // @synthesize rank=_rank;
- (void)listItems:(CDUnknownBlockType)arg1;
- (id)description;
- (unsigned long long)batchCount;
- (void)addDeletionOfFileObjectID:(id)arg1 rank:(unsigned long long)arg2;
- (void)addIndexOfItem:(id)arg1;
- (id)init;

@end

