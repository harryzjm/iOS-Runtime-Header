//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOCategorySearchResultSection, GEODirectionIntent, GEOMapRegion, GEOMapServiceTraits, GEOPDMerchantLookupResult, GEOPDPlaceSummaryLayoutMetadata, GEORelatedSearchSuggestion, GEOResolvedItem, GEOResultRefinementGroup, GEOSearchAutoRedoThreshold, GEOSearchSectionList, NSArray, NSString, geo_isolater;

__attribute__((visibility("hidden")))
@interface _GEOBatchReverseGeocodeRequestTicket
{
    CDUnknownBlockType _locationShifter;
    geo_isolater *_shiftIsolation;
}

- (void).cxx_destruct;
- (void)_handleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_submitRequest:(id)arg1 auditToken:(id)arg2 timeout:(double)arg3 withHandler:(CDUnknownBlockType)arg4 networkActivity:(CDUnknownBlockType)arg5;
- (void)_processRequest:(id)arg1 auditToken:(id)arg2 timeout:(double)arg3 withHandler:(CDUnknownBlockType)arg4 refinedHandler:(CDUnknownBlockType)arg5 networkActivity:(CDUnknownBlockType)arg6;
- (id)initWithRequest:(id)arg1 locationShifter:(CDUnknownBlockType)arg2 traits:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) NSArray *browseCategories;
@property(nonatomic) unsigned long long cachePolicy;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, nonatomic) GEOCategorySearchResultSection *categorySearchResultSection;
@property(readonly, nonatomic, getter=isChainResultSet) _Bool chainResultSet;
@property(readonly, nonatomic) GEOResolvedItem *clientResolvedResult;
@property(readonly, nonatomic) NSArray *collectionResults;
@property(readonly, nonatomic) CDStruct_026435ec dataRequestKind;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) GEODirectionIntent *directionIntent;
@property(readonly, nonatomic) _Bool disableAdditionalViewportPadding;
@property(readonly, nonatomic) NSArray *displayHeaderSubstitutes;
@property(readonly, nonatomic) NSArray *dotPlaces;
@property(readonly, nonatomic) unsigned int dymSuggestionVisibleTime;
@property(readonly, nonatomic) _Bool enableStructuredRAPAffordance;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) GEOPDMerchantLookupResult *merchantLookupResult;
@property(readonly, nonatomic) GEOPDPlaceSummaryLayoutMetadata *placeSummaryLayoutMetadata;
@property(readonly, nonatomic) NSArray *publisherResults;
@property(readonly, nonatomic) NSArray *relatedEntitySections;
@property(readonly, nonatomic) NSArray *relatedSearchSuggestions;
@property(readonly, nonatomic) GEOMapRegion *resultBoundingRegion;
@property(readonly, nonatomic) NSString *resultDisplayHeader;
@property(readonly, nonatomic) GEOResultRefinementGroup *resultRefinementGroup;
@property(readonly, nonatomic) NSString *resultSectionHeader;
@property(readonly, nonatomic) NSArray *retainedSearchMetadata;
@property(readonly, nonatomic) GEOSearchAutoRedoThreshold *searchAutoRedoThreshold;
@property(readonly, nonatomic) NSArray *searchResultSections;
@property(readonly, nonatomic) int searchResultType;
@property(readonly, nonatomic) int searchResultViewType;
@property(readonly, nonatomic) GEOSearchSectionList *searchSectionList;
@property(readonly, nonatomic) _Bool shouldEnableRedoSearch;
@property(readonly, nonatomic) _Bool showDymSuggestionCloseButton;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end

