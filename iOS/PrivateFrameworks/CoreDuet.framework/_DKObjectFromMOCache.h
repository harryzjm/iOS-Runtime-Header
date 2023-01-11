//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _DKObjectFromMOCache : NSObject
{
    NSMutableDictionary *_cache;
    NSMutableDictionary *_cacheEntries;
    NSMutableDictionary *_cacheHits;
    NSMutableDictionary *_cacheMisses;
}

@property(retain) NSMutableDictionary *cacheMisses; // @synthesize cacheMisses=_cacheMisses;
@property(retain) NSMutableDictionary *cacheHits; // @synthesize cacheHits=_cacheHits;
@property(retain) NSMutableDictionary *cacheEntries; // @synthesize cacheEntries=_cacheEntries;
@property(retain) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)deduplicateString:(id)arg1;
- (id)objectForKey:(id)arg1 type:(id)arg2 setIfMissingWithBlock:(CDUnknownBlockType)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 type:(id)arg3;
- (void)removeObjectForKey:(id)arg1 type:(id)arg2;
- (id)objectForKey:(id)arg1 type:(id)arg2;
- (void)reportMetrics;
- (id)initWithReporting;
- (id)init;

@end

