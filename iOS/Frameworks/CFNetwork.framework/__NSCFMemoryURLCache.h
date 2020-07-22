//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __NSCFMemoryURLCache : NSObject
{
    id _internal;
    unsigned long long _memoryCapacity;
    unsigned long long _currentLength;
    NSMutableDictionary *_memoryStorage;
    NSMutableArray *_memoryStorageLRU;
    NSObject<OS_dispatch_queue> *_memoryQueue;
}

+ (void)initialize;
- (unsigned long long)currentDiskUsage;
- (unsigned long long)currentMemoryUsage;
- (void)setDiskCapacity:(unsigned long long)arg1;
- (void)setMemoryCapacity:(unsigned long long)arg1;
- (unsigned long long)diskCapacity;
- (unsigned long long)memoryCapacity;
- (void)removeAllCachedResponses;
- (void)removeCachedResponseForRequest:(id)arg1;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (id)cachedResponseForRequest:(id)arg1;
- (id)description;
- (id)initMemoryCache;
- (id)initEmptyCache;
- (void)dealloc;
- (id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3;
- (id)initByCallingSuperSuperInit;

@end

