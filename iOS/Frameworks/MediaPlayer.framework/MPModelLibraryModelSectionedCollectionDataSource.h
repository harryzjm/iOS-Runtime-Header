//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPModelLazySectionedCollectionDataSource-Protocol.h>

@class MPMediaLibraryEntityTranslationContext, MPModelLibraryRequest, NSString;

@interface MPModelLibraryModelSectionedCollectionDataSource : NSObject <MPModelLazySectionedCollectionDataSource>
{
    MPMediaLibraryEntityTranslationContext *_itemTranslationContext;
    MPMediaLibraryEntityTranslationContext *_sectionTranslationContext;
    MPModelLibraryRequest *_request;
    shared_ptr_87e3a99b _itemEntityQueryResults;
    shared_ptr_274c5e8b _sectionEntityQueryResult;
}

@property(readonly, nonatomic) MPModelLibraryRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) shared_ptr_274c5e8b sectionEntityQueryResult; // @synthesize sectionEntityQueryResult=_sectionEntityQueryResult;
@property(readonly, nonatomic) shared_ptr_87e3a99b itemEntityQueryResults; // @synthesize itemEntityQueryResults=_itemEntityQueryResults;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (id)identifiersForSectionAtIndex:(long long)arg1;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (_Bool)hasSameContentAsDataSource:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)initWithRequest:(id)arg1 sectionQueryResults:(shared_ptr_274c5e8b)arg2 itemQueryResults:(map_be45dc27 *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

