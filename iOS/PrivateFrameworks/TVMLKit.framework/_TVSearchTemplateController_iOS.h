//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/IKAppKeyboardDelegate-Protocol.h>
#import <TVMLKit/UISearchResultsUpdating-Protocol.h>

@class IKAppKeyboard, IKTextFieldElement, IKViewElement, NSString, UISearchController, UIView, _TVStackCollectionViewController;

@interface _TVSearchTemplateController_iOS <UISearchResultsUpdating, IKAppKeyboardDelegate>
{
    UIView *_nonResultsView;
    _TVStackCollectionViewController *_resultsViewController;
    UISearchController *_searchController;
    IKTextFieldElement *_searchFieldElement;
    IKAppKeyboard *_ikKeyboard;
    IKViewElement *_nonResultsElement;
    IKViewElement *_collectionListElement;
    struct CGRect _keyboardFrame;
    IKViewElement *_viewElement;
}

@property(readonly, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (void).cxx_destruct;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)_setNonResultsView:(id)arg1;
- (void)_updateKeyboardText;
- (void)_updateSearchFieldText;
- (void)textDidChangeForKeyboard:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)updateNavigationItem:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)updateWithViewElement:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
