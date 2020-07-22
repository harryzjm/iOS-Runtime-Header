//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/SearchUIResultViewController.h>

#import <SpotlightUI/SPSearchAgentDelegate-Protocol.h>

@class NSArray, SFResultSection, SFSearchResult;
@protocol SPUIResultViewDelegate;

@interface SPUIResultViewController : SearchUIResultViewController <SPSearchAgentDelegate>
{
    _Bool _hasResultsWaitingToUpdate;
    NSArray *_resultSections;
    SFResultSection *_suggestionsSection;
    SFResultSection *_searchThroughSection;
}

+ (unsigned long long)defaultStyle;
@property(retain) SFResultSection *searchThroughSection; // @synthesize searchThroughSection=_searchThroughSection;
@property _Bool hasResultsWaitingToUpdate; // @synthesize hasResultsWaitingToUpdate=_hasResultsWaitingToUpdate;
@property(retain) SFResultSection *suggestionsSection; // @synthesize suggestionsSection=_suggestionsSection;
@property(retain) NSArray *resultSections; // @synthesize resultSections=_resultSections;
- (void).cxx_destruct;
- (void)_pushSectionsUpdate;
- (_Bool)_hasRealSuggestions;
- (void)_updateCombinedSections;
- (void)clearSuggestionSection;
- (void)searchStringUpdated:(id)arg1 wantsCompletions:(_Bool)arg2;
- (id)_newSuggestionSection;
@property(readonly) SFSearchResult *actualSearchSuggestionResult;
- (void)searchAgentClearedResults:(id)arg1;
- (void)_truncateResultsSectionToFit;
- (void)searchAgentUpdatedResults:(id)arg1;
- (_Bool)isResultOriginalSearchSuggestion:(id)arg1;
- (id)initWithSearchModel:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <SPUIResultViewDelegate> delegate; // @dynamic delegate;

@end

