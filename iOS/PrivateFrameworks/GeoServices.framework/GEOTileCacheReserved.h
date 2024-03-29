//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEOTileCacheReserved : NSObject
{
    struct mutex _reservedLock;
    struct list<CacheItem, std::allocator<CacheItem>> _reservedList;
    struct unordered_map<_GEOTileKey, std::__list_iterator<CacheItem, void *>, hashkey, eqkey, std::allocator<std::pair<const _GEOTileKey, std::__list_iterator<CacheItem, void *>>>> _reservedMap;
    unsigned long long _reservedMaxCapacity;
    unsigned long long _reservedMaxCost;
    unsigned long long _reservedCurrentCost;
    unsigned long long _reservedCurrentCount;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;

@end

