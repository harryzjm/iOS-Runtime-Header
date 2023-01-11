//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSRecursiveLock;

@interface CLSLRUMemoryCache : NSObject
{
    unsigned long long _numberOfSlots;
    NSMapTable *_cacheDictionary;
    NSRecursiveLock *_recursiveLock;
    struct _CLSLRUMemoryCacheList *_leastRecentUsedList;
    NSMapTable *_leastRecentUsedDictionary;
}

@property(nonatomic) unsigned long long numberOfSlots; // @synthesize numberOfSlots=_numberOfSlots;
- (_Bool)writeToURL:(id)arg1;
- (_Bool)loadFromURL:(id)arg1;
- (void)evictSlots:(unsigned long long)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)allKeys;
- (id)objectForKey:(id)arg1;
@property(readonly, nonatomic) unsigned long long currentUsedSlots;
- (void)_removeListElement:(struct _CLSLRUMemoryCacheListElement *)arg1;
- (void)_promoteListElement:(struct _CLSLRUMemoryCacheListElement *)arg1;
- (void)dealloc;
- (id)init;

@end
