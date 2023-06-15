//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SUUIClientContext, SUUIFocusedTouchGestureRecognizer, SUUISearchBarViewElement, SUUISearchFieldController, UISearchBar, UIViewController;

__attribute__((visibility("hidden")))
@interface SUUISearchBarController : NSObject
{
    SUUIFocusedTouchGestureRecognizer *_cancelTouchGestureRecognizer;
    SUUIClientContext *_clientContext;
    _Bool _displaysSearchBarInNavigationBar;
    UIViewController *_parentViewController;
    UISearchBar *_searchBar;
    SUUISearchFieldController *_searchFieldController;
    _Bool _showsResultsForEmptyField;
    _Bool _usesSearchFieldController;
    SUUISearchBarViewElement *_viewElement;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showsResultsForEmptyField; // @synthesize showsResultsForEmptyField=_showsResultsForEmptyField;
@property(retain, nonatomic) SUUISearchBarViewElement *searchBarViewElement; // @synthesize searchBarViewElement=_viewElement;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) _Bool displaysSearchBarInNavigationBar; // @synthesize displaysSearchBarInNavigationBar=_displaysSearchBarInNavigationBar;
@property(retain, nonatomic) SUUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (id)_searchFieldController;
- (void)_removeCancelTouchGestureRecognizer;
- (id)_newSearchFieldController;
- (void)_dispatchSubmitEventWithText:(id)arg1 URL:(id)arg2 searchHintOriginalTerm:(id)arg3 searchHintIndex:(id)arg4;
- (void)_dispatchChangeEventWithText:(id)arg1;
- (void)_customizeSearchFieldController:(id)arg1;
- (void)_customizeSearchBar:(id)arg1;
- (void)_cancelGestureAction:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchFieldController:(id)arg1 searchBarDidChangeText:(id)arg2;
- (void)searchFieldController:(id)arg1 requestSearch:(id)arg2;
@property(readonly, nonatomic) UISearchBar *searchBar;
- (void)resignActive:(_Bool)arg1;
- (void)becomeActive;
@property(readonly, nonatomic) _Bool canBecomeActive;
- (void)reloadAfterDocumentUpdate;
- (void)dealloc;
- (id)initWithSearchBarViewElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

