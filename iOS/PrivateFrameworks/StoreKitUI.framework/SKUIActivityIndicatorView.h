//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSString, SKUIAttributedStringView, UIActivityIndicatorView, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUIActivityIndicatorView <SKUIViewElementView>
{
    unsigned long long _alignment;
    _Bool _animating;
    struct UIEdgeInsets _contentInset;
    UIImageView *_imageView;
    UIActivityIndicatorView *_indicatorView;
    SKUIAttributedStringView *_stringView;
    double _period;
}

+ (id)_attributedStringWithLabel:(id)arg1 context:(id)arg2;
+ (struct CGSize)_activityIndicatorSize;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (void)_updateSpinnerAnimation;
- (void)_stopAnimating;
- (void)_startAnimating;
- (_Bool)_isAnimating;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (id)viewForElementIdentifier:(id)arg1;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
