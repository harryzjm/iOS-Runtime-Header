//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSString;

__attribute__((visibility("hidden")))
@interface _MPLazySectionedCollectionStorage : NSObject
{
    struct vector<long, std::allocator<long>> _cachedNumberOfItemsInSections;
    long long _cachedNumberOfSections;
    _Bool _hasValidCachedNumberOfSections;
    NSCache *_itemsCache;
    struct map<long, MPIdentifierSet *, std::less<long>, std::allocator<std::pair<const long, MPIdentifierSet *>>> _itemIdentifierSetMap;
    NSCache *_sectionsCache;
    struct map<long, MPIdentifierSet *, std::less<long>, std::allocator<std::pair<const long, MPIdentifierSet *>>> _sectionIdentifierSetMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_stateDumpObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

