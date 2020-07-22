//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, TSUReadWriteQueue;

__attribute__((visibility("hidden")))
@interface TSUConcurrentMutableDictionaryCache : NSObject
{
    NSMutableDictionary *_cache;
    TSUReadWriteQueue *_readWriteQueue;
    NSString *_name;
    unsigned long long _count;
}

@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) TSUReadWriteQueue *readWriteQueue; // @synthesize readWriteQueue=_readWriteQueue;
- (void).cxx_destruct;
- (void)performSyncWriteWithUnderlyingDictionary:(CDUnknownBlockType)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)description;
- (void)removeObjectForKey:(id)arg1 andWait:(_Bool)arg2;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeAllObjects;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)p_didEnterBackground:(id)arg1;
- (void)p_didReceiveMemoryWarning:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)init;

@end

