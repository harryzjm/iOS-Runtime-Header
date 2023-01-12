//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewController.h"

@class NSString, SKUIItemListTableViewController, SKUISyncWishlistOperation, SKUIWishlist, UIBarButtonItem, _UIBackdropView, _UIContentUnavailableView;
@protocol SKUIWishlistDelegate;

__attribute__((visibility("hidden")))
@interface SKUIWishlistViewController : SKUIViewController
{
    _UIBackdropView *_backdropView;
    id <SKUIWishlistDelegate> _delegate;
    UIBarButtonItem *_deleteButton;
    _Bool _editing;
    _UIContentUnavailableView *_emptyWishlistView;
    SKUIItemListTableViewController *_itemListViewController;
    _Bool _reloadOnNextAppear;
    SKUISyncWishlistOperation *_syncOperation;
    SKUIWishlist *_wishlist;
    long long _wishlistState;
}

+ (id)wishlistBarButtonItemWithClientContext:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SKUIWishlistDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_wishlistState;
- (id)_wishlist;
- (void)_updateDeleteButton;
- (void)_syncWishlist;
- (void)_setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_reloadWishlist;
- (void)_reloadNavigationBarAnimated:(_Bool)arg1;
- (void)_reloadForAccountsChanged;
- (void)_reloadChildView;
- (id)_itemListViewController;
- (_Bool)_isEditingEnabled;
- (void)_finishSyncWithResult:(_Bool)arg1 didChange:(_Bool)arg2 error:(id)arg3;
- (void)_finishSignInWithResponse:(id)arg1 error:(id)arg2;
- (id)_emptyWishlistView;
- (void)_destroyEmptyWishlistView;
- (void)_deleteItemsAtIndexPaths:(id)arg1;
- (void)_toggleEditAction:(id)arg1;
- (void)_signInAction:(id)arg1;
- (void)_doneAction:(id)arg1;
- (void)_deleteAction:(id)arg1;
- (void)_wishlistDidChangeNotification:(id)arg1;
- (void)itemList:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemList:(id)arg1 didRemoveItemAtIndexPath:(id)arg2;
- (void)itemList:(id)arg1 didDeselectItem:(id)arg2 atIndexPath:(id)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)contentScrollView;
- (void)setClientContext:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

