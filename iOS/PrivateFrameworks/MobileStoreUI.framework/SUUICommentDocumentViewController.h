//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewController.h"

@class NSArray, NSMutableSet, NSString, SUUICommentPostBarView, SUUICommentTemplateViewElement, SUUILayoutCache, SUUIMediaSocialAuthor, SUUIStackDocumentViewController, SUUIStackTemplateElement, SUUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SUUICommentDocumentViewController : SUUIViewController
{
    SUUIMediaSocialAuthor *_authorForActiveAccount;
    SUUIStackDocumentViewController *_childViewController;
    NSArray *_commenters;
    _Bool _didShowKeyboard;
    _Bool _keyboardVisible;
    struct CGRect _keyboardRect;
    SUUIViewElementLayoutContext *_layoutContext;
    NSMutableSet *_observedArtworkRequestIDs;
    SUUICommentPostBarView *_postView;
    _Bool _scrollNewCommentToView;
    long long _selectedCommenter;
    SUUIStackTemplateElement *_stackTemplateElement;
    SUUICommentTemplateViewElement *_templateElement;
    SUUILayoutCache *_textLayoutCache;
}

- (void).cxx_destruct;
- (void)_setSelectedCommenter:(long long)arg1;
- (void)_reloadContentSize:(double)arg1;
- (void)_preloadCommenterImages;
- (_Bool)_loadImageForURL:(id)arg1 cacheKey:(id)arg2 dataConsumer:(id)arg3 reason:(long long)arg4;
- (void)_layoutKeyboard;
- (void)_layoutScrollView:(double)arg1;
- (id)_layoutContext;
- (id)_getSelectedCommenter;
- (void)_checkAdminStatus;
- (void)_changeCommenter;
- (id)_backgroundColor;
- (void)_keyboardWillChangeNotification:(id)arg1 accountForGuideLines:(_Bool)arg2 applyKeyboardOffset:(_Bool)arg3;
- (void)_keyboardDidHideChangeNotification:(id)arg1;
- (void)_keyboardWillChangeFrameNotification:(id)arg1;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (void)commentPostBarView:(id)arg1 changeCommenter:(id)arg2;
- (void)commentPostBarView:(id)arg1 text:(id)arg2 as:(id)arg3;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)updateStackElement:(id)arg1 withView:(id)arg2;
- (void)documentDidUpdate:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithTemplateElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

