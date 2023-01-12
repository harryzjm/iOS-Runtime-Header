//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileSafariUI/CompletionItem-Protocol.h>

@class NSString, SFSearchResult, WBSCompletionQuery, WBSQuerySuggestion;
@protocol CompletionItemActionHandler;

@interface SearchSuggestion : NSObject <CompletionItem>
{
    _Bool _recentSearch;
    _Bool _searchEngineSuggestion;
    SFSearchResult *_sfSearchResultValue;
    WBSCompletionQuery *_userQuery;
    id <CompletionItemActionHandler> _handler;
    _Bool _handlingAccessoryButtonTap;
    _Bool _goesToURL;
    long long _parsecQueryID;
    NSString *_string;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool goesToURL; // @synthesize goesToURL=_goesToURL;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) long long parsecQueryID; // @synthesize parsecQueryID=_parsecQueryID;
- (_Bool)isEquivalentTo:(id)arg1;
@property(readonly, nonatomic) unsigned long long engagementDestination;
@property(readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property(readonly, nonatomic) _Bool needsSectionHeader;
- (id)reflectedStringForUserTypedString:(id)arg1;
@property(readonly, nonatomic) _Bool restoresSearchState;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
- (void)auditAcceptedCompletionWithRank:(unsigned long long)arg1;
- (double)completionTableViewCellCustomHeightForCompletionList:(id)arg1;
- (id)completionTableViewCellForCompletionList:(id)arg1;
- (id)completionTableViewCellReuseIdentifier;
- (void)acceptCompletionWithActionHandler:(id)arg1;
- (void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2;
@property(retain, nonatomic) id <CompletionItemActionHandler> handlerForActionItem;
- (void)_accessoryButtonTapped:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithSearchEngineSuggestion:(id)arg1 userQuery:(id)arg2;
- (id)initWithRecentSearchString:(id)arg1 userQuery:(id)arg2;
- (id)initWithUserTypedQuery:(id)arg1;
- (id)_initWithString:(id)arg1 userQuery:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) NSString *completionTableHeaderViewReuseIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lastSearchQuery;
@property(nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property(retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool usesDefaultHeaderView;

@end
