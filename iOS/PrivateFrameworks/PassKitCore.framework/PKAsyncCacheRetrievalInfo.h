//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PKAsyncCacheRetrievalInfo : NSObject
{
    struct os_unfair_lock_s _lock;
    _Bool _itemFetched;
    id _item;
    NSMutableArray *_deliveryBlocks;
}

- (void).cxx_destruct;
- (void)deliverItem:(id)arg1;
- (id)synchronouslyRetrieve:(CDUnknownBlockType)arg1 outDeliveryBlocks:(id *)arg2;
- (void)addDeliveryBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end
