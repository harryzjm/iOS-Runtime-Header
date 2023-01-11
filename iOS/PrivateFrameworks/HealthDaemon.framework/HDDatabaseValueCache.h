//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HDDatabaseValueCache : NSObject
{
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    NSString *_threadLocalKey;
}

@property(copy, nonatomic) NSString *threadLocalKey; // @synthesize threadLocalKey=_threadLocalKey;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue; // @synthesize resourceQueue=_resourceQueue;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)_commitTransactionStorage:(id)arg1;
- (id)_transactionStorageWithDatabase:(id)arg1 createIfNecessary:(_Bool)arg2;
- (void)removeAllObjectsWithDatabase:(id)arg1;
- (void)removeObjectForKey:(id)arg1 database:(id)arg2;
- (void)_resourceQueue_removeAllObjectsWithDatabase:(id)arg1;
- (void)_resourceQueue_storeObject:(id)arg1 forKey:(id)arg2 database:(id)arg3;
- (id)_resourceQueue_objectForKey:(id)arg1 database:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)fetchObjectForKey:(id)arg1 database:(id)arg2 error:(id *)arg3 faultHandler:(CDUnknownBlockType)arg4;
- (id)init;

@end

