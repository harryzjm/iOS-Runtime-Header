//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SuggestionsSpotlightMetrics/SFFeedbackListener-Protocol.h>

@class NSCache, NSString, SGSMMutableSearchState;
@protocol SGSuggestionsServiceEventsProtocol;

@interface SGSMFeedbackListener : NSObject <SFFeedbackListener>
{
    SGSMMutableSearchState *_searchState;
    SGSMMutableSearchState *_previousState;
    id <SGSuggestionsServiceEventsProtocol> _suggestionsService;
    NSCache *_eventLastInteractionTime;
}

- (void).cxx_destruct;
- (void)searchViewDidDisappear:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (void)didEngageSuggestion:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)didRankSections:(id)arg1;
- (void)resultsDidBecomeVisible:(id)arg1;
- (id)_eventIdentifierFromSearchResult:(id)arg1;
- (void)_resetState;
- (void)_restoreStateIfUnset;
- (void)_saveAndUnsetState;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

