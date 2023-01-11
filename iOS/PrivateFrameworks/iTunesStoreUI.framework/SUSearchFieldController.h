//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/ISStoreURLOperationDelegate-Protocol.h>
#import <iTunesStoreUI/SUScriptTextFieldDelegate-Protocol.h>
#import <iTunesStoreUI/UISearchDisplayDelegate-Protocol.h>
#import <iTunesStoreUI/UITableViewDataSource-Protocol.h>
#import <iTunesStoreUI/UITableViewDelegate-Protocol.h>

@class ISStoreURLOperation, NSArray, NSNumber, NSString, SUClientInterface, SUScriptTextFieldDelegate, SUSearchDisplayController, SUSearchFieldConfiguration, UIControl, UISearchBar;

@interface SUSearchFieldController : NSObject <ISStoreURLOperationDelegate, SUScriptTextFieldDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate>
{
    SUClientInterface *_clientInterface;
    NSArray *_completions;
    ISStoreURLOperation *_completionsOperation;
    SUSearchFieldConfiguration *_configuration;
    UIControl *_dimmerView;
    UISearchBar *_searchBar;
    SUSearchDisplayController *_searchController;
    long long _searchFieldStyle;
    SUScriptTextFieldDelegate *_textFieldDelegate;
    _Bool _hasLoadedSearchResultsTableView;
}

@property(nonatomic) long long searchFieldStyle; // @synthesize searchFieldStyle=_searchFieldStyle;
@property(copy, nonatomic) SUSearchFieldConfiguration *searchFieldConfiguration; // @synthesize searchFieldConfiguration=_configuration;
- (void)_tearDownDimmerView;
- (id)_targetViewController;
- (void)_showDimmerView;
- (void)_sendOnXEventWithTerm:(id)arg1 URL:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_searchGroupForSearchKind:(id)arg1;
- (void)_saveSearchTermToDefaults:(id)arg1;
- (void)_resizeSearchBarForOrientation:(long long)arg1;
- (void)_reloadSearchBar;
- (void)_reloadCompletionsForSearchString:(id)arg1;
- (id)_newTransientViewController;
- (id)_newSearchDisplayControllerWithContentsController:(id)arg1;
- (id)_newSearchBar;
- (id)_newBlankStorePageViewController;
- (_Bool)_focusTransientViewController;
- (void)_fetchResultsForURLRequestProperties:(id)arg1;
- (void)_fetchResultsForTerm:(id)arg1 URL:(id)arg2;
- (void)_fetchCompletions;
- (id)_defaultSearchTerm;
- (void)_cancelCompletionsOperation;
- (id)_cancelButtonView;
- (void)_savedSearchTermChangedNotification:(id)arg1;
- (void)_dimmerViewAction:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchBarWillRemoveFromSuperview:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)scriptDidChangeTextForField:(id)arg1;
- (void)operationDidFinish:(id)arg1;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1;
@property(readonly, nonatomic) UISearchBar *searchBar;
- (id)newRequestPropertiesWithSearchTerm:(id)arg1 kind:(id)arg2;
- (id)newRequestPropertiesWithSearchTerm:(id)arg1;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)handleSearchURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3;
- (void)dealloc;
- (id)initWithContentsController:(id)arg1 clientInterface:(id)arg2 style:(long long)arg3;
- (id)initWithContentsController:(id)arg1 clientInterface:(id)arg2;
- (id)initWithContentsController:(id)arg1 style:(long long)arg2;
- (id)initWithContentsController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end
