//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIViewElementView-Protocol.h>
#import <StoreKitUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSMapTable, NSString, SKUIImageDeckViewElement, UIDynamicAnimator, UIView;

@interface SKUIImageDeckView <UIGestureRecognizerDelegate, SKUIViewElementView>
{
    UIDynamicAnimator *_animator;
    double _fitWidth;
    SKUIImageDeckViewElement *_imageDeckViewElement;
    NSMapTable *_viewElementViews;
    NSArray *_imageViews;
    NSMapTable *_imageViewToImageResourceCacheKey;
    UIView *_selectedImageView;
    unsigned long long _selectedImageViewIndex;
    struct UIEdgeInsets _contentInset;
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(retain, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
- (void).cxx_destruct;
- (void)_layoutImages;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)viewForElementIdentifier:(id)arg1;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

