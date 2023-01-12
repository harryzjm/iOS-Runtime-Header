//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSHashTable, NSMapTable, NSMutableArray, NSString, SKUIGradientView, SKUILockupViewElement, SKUIProductLockupLayout;

__attribute__((visibility("hidden")))
@interface SKUIProductLockupCollectionViewCell
{
    NSHashTable *_artworkRelatedChildViewElementViews;
    NSMapTable *_buyButtonDescriptorToButton;
    NSMapTable *_elementViews;
    NSMapTable *_imageViewToImageResourceCacheKey;
    SKUIProductLockupLayout *_layout;
    SKUILockupViewElement *_lockup;
    SKUIGradientView *_offerConfirmationGradientView;
    long long _offerMetadataPosition;
    NSHashTable *_offerViews;
    NSMutableArray *_segmentedControlControllers;
}

+ (void)_requestLayoutForViewElements:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;
- (void).cxx_destruct;
- (id)_viewElementForView:(id)arg1;
- (void)_updateLayoutToAnimateOfferTransitionForView:(id)arg1;
- (struct CGRect)_stackElements:(id)arg1 alignment:(long long)arg2 inRect:(struct CGRect)arg3;
- (struct CGRect)_stackBottomRightElements:(id)arg1 inRect:(struct CGRect)arg2;
- (void)_prepareOfferConfirmationGradientForView:(id)arg1;
- (void)_layoutConfirmationGradientRelativeToSection:(long long)arg1 alpha:(double)arg2;
- (struct CGRect)_frameForSection:(long long)arg1;
- (void)_showConfirmationAction:(id)arg1;
- (void)_imageTapAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)offerViewWillAnimateTransition:(id)arg1;
- (void)offerViewDidAnimateTransition:(id)arg1;
- (_Bool)offerViewAnimateTransition:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;
- (void)layoutSubviews;
- (id)viewForElementIdentifier:(id)arg1;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)updateForChangedDistanceFromVanishingPoint;
- (void)setVanishingPoint:(struct CGPoint)arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

