//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IDSTransactionQueue : NSObject
{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_transactions;
}

- (void).cxx_destruct;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *transactions; // @synthesize transactions=_transactions;
- (void)executeReadyItemsWithBlock:(CDUnknownBlockType)arg1;
- (void)_removeTransaction:(id)arg1;
- (void)_readyTransaction:(id)arg1;
- (void)_appendTransaction:(id)arg1;
- (void)_prependTransaction:(id)arg1;
- (CDUnknownBlockType)appendPendingItem:(id)arg1;
- (void)appendItem:(id)arg1;
- (void)prependItem:(id)arg1;
- (id)init;

@end
