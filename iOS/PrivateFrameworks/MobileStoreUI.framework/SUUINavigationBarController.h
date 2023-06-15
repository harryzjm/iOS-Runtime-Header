//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray, NSString, SUUIButtonViewElement, SUUIClientContext, SUUINavigationBarButtonsController, SUUINavigationBarContext, SUUINavigationBarViewElement, SUUINavigationPaletteController, UIView, UIViewController;
@protocol SUUINavigationBarControllerDelegate;

__attribute__((visibility("hidden")))
@interface SUUINavigationBarController : NSObject
{
    SUUINavigationBarButtonsController *_buttonsController;
    SUUIClientContext *_clientContext;
    SUUINavigationBarContext *_navigationBarContext;
    SUUINavigationPaletteController *_paletteController;
    UIViewController *_parentViewController;
    NSMutableArray *_reusableSearchBarControllers;
    NSMapTable *_searchBarControllers;
    NSMutableArray *_sections;
    SUUINavigationBarViewElement *_viewElement;
    SUUIButtonViewElement *_titleButtonViewElement;
    id <SUUINavigationBarControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SUUINavigationBarControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) SUUINavigationBarViewElement *navigationBarViewElement; // @synthesize navigationBarViewElement=_viewElement;
@property(retain, nonatomic) SUUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_titleButtonAction:(id)arg1;
- (id)_resourceImageForImageElement:(id)arg1;
- (id)_navigationBarContext;
- (void)_fullyReloadSections:(id)arg1 withNavigationItem:(id)arg2;
- (id)_buttonWithElement:(id)arg1 width:(double)arg2;
- (id)_barButtonItemWithViewElement:(id)arg1;
- (id)_barButtonItemWithSearchBarViewElement:(id)arg1;
- (id)_barButtonItemWithButtonViewElement:(id)arg1;
- (double)_availableWidth;
- (id)_attributedStringForButtonText:(id)arg1 type:(long long)arg2 style:(id)arg3;
- (id)_attributedStringForButton:(id)arg1;
- (id)_addSearchBarControllerWithViewElement:(id)arg1;
- (void)_viewElementEventNotification:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (id)viewForElementIdentifier:(id)arg1;
- (void)updateNavigationItem:(id)arg1;
- (id)titleViewWithViewElement:(id)arg1;
- (void)setReusableSearchBarControllers:(id)arg1;
@property(readonly, nonatomic) UIView *navigationPaletteView;
- (id)fallbackTitleView;
@property(readonly, nonatomic) NSArray *existingSearchBarControllers;
- (void)detachNavigationItemControllers;
- (void)detachFromNavigationItem:(id)arg1;
- (id)barButtonItemForElementIdentifier:(id)arg1;
- (void)attachToNavigationItem:(id)arg1;
- (void)dealloc;
- (id)initWithNavigationBarViewElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

