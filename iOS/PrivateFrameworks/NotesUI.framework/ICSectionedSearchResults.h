//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ICSectionedSearchResults : NSObject
{
    _Bool _disableAutomaticUpdates;
    NSMutableDictionary *_searchResultsBySection;
}

+ (id)newSearchResultsBySection;
@property(retain, nonatomic) NSMutableDictionary *searchResultsBySection; // @synthesize searchResultsBySection=_searchResultsBySection;
@property(nonatomic) _Bool disableAutomaticUpdates; // @synthesize disableAutomaticUpdates=_disableAutomaticUpdates;
- (void).cxx_destruct;
- (void)updateForSortTypeChange;
- (_Bool)replaceSearchResultObject:(id)arg1 withObject:(id)arg2;
- (_Bool)hideSearchResultsForObjects:(id)arg1;
- (_Bool)hideSearchResultsForIdentifier:(id)arg1;
- (void)filterSearchResultsUsingVisiblityTesting:(id)arg1;
- (_Bool)addSearchResults:(id)arg1 removingFoundIdentifiers:(id)arg2 passingVisibilityTesting:(id)arg3;
- (unsigned long long)addSearchResultsBySection:(id)arg1;
- (id)searchResultsBySectionForSearchResults:(id)arg1 passingVisibilityTesting:(id)arg2;
- (_Bool)passesVisibilityTesting:(id)arg1 forSearchResult:(id)arg2;
- (unsigned long long)removeSearchResultsWithIdentifiers:(id)arg1 forHiding:(_Bool)arg2;
- (_Bool)removeSearchResultWithIdentifier:(id)arg1 forHiding:(_Bool)arg2;
- (_Bool)removeSearchResultWithIdentifier:(id)arg1 fromSection:(unsigned long long)arg2 forHiding:(_Bool)arg3;
- (id)removeSearchResultAtRow:(long long)arg1 section:(unsigned long long)arg2;
- (void)addSearchResults:(id)arg1 toSection:(unsigned long long)arg2;
- (void)addSearchResult:(id)arg1 toSection:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setSearchResults:(id)arg1 forSection:(unsigned long long)arg2;
- (id)searchResultObjectsInSection:(unsigned long long)arg1;
- (id)searchResultsInSection:(unsigned long long)arg1;
- (id)searchResultSectionForSectionIndex:(unsigned long long)arg1;
- (id)searchResultAtRow:(long long)arg1 section:(unsigned long long)arg2;
- (unsigned long long)sectionForSearchResult:(id)arg1;
- (unsigned long long)countForSection:(unsigned long long)arg1;
- (_Bool)hasSearchResults;
- (void)clear;
- (void)noteWillBeUndeletedOrUntrashed:(id)arg1;
- (void)objectsDidChange:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end
