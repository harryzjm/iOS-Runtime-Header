//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSCache;
@protocol MPLazySectionedCollectionDataSource;

@interface MPLazySectionedCollection
{
    struct vector<long, std::__1::allocator<long>> _cachedNumberOfItemsInSections;
    long long _cachedNumberOfSections;
    _Bool _hasValidCachedNumberOfSections;
    NSCache *_itemsCache;
    NSCache *_sectionsCache;
    id <MPLazySectionedCollectionDataSource> _dataSource;
}

@property(retain, nonatomic) id <MPLazySectionedCollectionDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)lastSection;
- (id)itemsInSectionAtIndex:(long long)arg1;
- (id)firstSection;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateItemsInSectionAtIndex:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)updateCacheWithObject:(id)arg1 atIndexPath:(id)arg2;
- (id)cachedObjectAtIndexPath:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)sectionAtIndex:(long long)arg1;
- (long long)numberOfSections;
- (id)lastItem;
- (_Bool)hasSameContentAsSectionedCollection:(id)arg1;
- (id)firstItem;
- (id)initWithDataSource:(id)arg1;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (id)identifiersForSectionAtIndex:(long long)arg1;
- (id)identifiersForItemAtIndexPath:(id)arg1;

@end

