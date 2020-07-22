//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PLCache : NSObject
{
    NSMutableDictionary *_cacheEntries;
    long long _countLimit;
    long long _currentCount;
    long long _totalCostLimit;
    long long _currentCost;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;
    struct entryList _lru;
}

- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(long long)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithCountLimit:(long long)arg1 totalCostLimit:(long long)arg2;

@end
