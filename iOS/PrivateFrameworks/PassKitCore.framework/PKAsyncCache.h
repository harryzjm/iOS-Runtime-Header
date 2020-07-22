//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSCache, NSMapTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PKAsyncCache : NSObject
{
    NSCache *_itemByKey;
    NSMapTable *_weakItemByKey;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_deliveryBlocksByKey;
}

- (void).cxx_destruct;
- (void)_executeRetrievalBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)retrieveItemForKey:(id)arg1 retrievalBlock:(CDUnknownBlockType)arg2 deliveryBlock:(CDUnknownBlockType)arg3;
- (id)initWithCache:(id)arg1;
- (id)init;

@end
