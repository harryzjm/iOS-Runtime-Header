//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSString, SUUINavigationBarViewElement;

__attribute__((visibility("hidden")))
@interface SUUINavigationBarButtonsController
{
    NSMapTable *_buttonItemElements;
    NSMapTable *_buttonItemToImageResourceCacheKey;
    SUUINavigationBarViewElement *_navigationBarElement;
}

- (void).cxx_destruct;
- (void)_updateItemOfferButton:(id)arg1 withButtonViewElement:(id)arg2;
- (void)_updateButtonItem:(id)arg1 withButtonViewElement:(id)arg2;
- (void)_reloadButtonItem:(id)arg1 withButtonViewElement:(id)arg2;
- (struct UIEdgeInsets)_imageInsetsForImageViewElement:(id)arg1;
- (id)_imageForImageViewElement:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)_showConfirmationAction:(id)arg1;
- (void)_itemOfferAction:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)reloadAfterDocumentUpdateWithNavigationItem:(id)arg1;
- (void)disconnectAllButtons;
- (id)barButtonItemForElementIdentifier:(id)arg1;
- (id)addButtonItemWithButtonViewElement:(id)arg1;
- (void)dealloc;
- (id)initWithNavigationBarViewElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

