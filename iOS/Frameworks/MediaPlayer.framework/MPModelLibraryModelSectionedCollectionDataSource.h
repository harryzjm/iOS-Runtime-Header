//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPMediaLibraryEntityTranslationContext, MPModelLibraryRequest, NSString;

__attribute__((visibility("hidden")))
@interface MPModelLibraryModelSectionedCollectionDataSource : NSObject
{
    MPMediaLibraryEntityTranslationContext *_itemTranslationContext;
    MPMediaLibraryEntityTranslationContext *_sectionTranslationContext;
    vector_1ee95920 _allowedSectionPersistentIDs;
    struct map<long long, unsigned long, std::less<long long>, std::allocator<std::pair<const long long, unsigned long>>> _allowedSectionPersistentIDToSectionQueryResultsIndexMap;
    MPModelLibraryRequest *_request;
    shared_ptr_e975541e _itemEntityQueryResults;
    shared_ptr_274c5e8b _sectionEntityQueryResult;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) MPModelLibraryRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) shared_ptr_274c5e8b sectionEntityQueryResult; // @synthesize sectionEntityQueryResult=_sectionEntityQueryResult;
@property(readonly, nonatomic) shared_ptr_e975541e itemEntityQueryResults; // @synthesize itemEntityQueryResults=_itemEntityQueryResults;
- (_Bool)_allowedEntityIdentifiersContainsAllPersistentIDs;
- (unsigned long long)_adjustedIndexForSectionIndex:(long long)arg1;
- (void)_populateIndexMap;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (id)identifiersForSectionAtIndex:(long long)arg1;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (_Bool)hasSameContentAsDataSource:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)initWithRequest:(id)arg1 sectionQueryResults:(shared_ptr_274c5e8b)arg2 itemQueryResults:(void *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

