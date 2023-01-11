//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IKImageElement, IKViewElement, VUICardView, VUICardViewLayoutFactory;

__attribute__((visibility("hidden")))
@interface VUICardCollectionViewCell
{
    VUICardView *_cardView;
    VUICardViewLayoutFactory *_layoutFactory;
    IKViewElement *_viewElement;
    IKImageElement *_mainImageViewElement;
}

+ (id)_imageLayoutForImageElement:(id)arg1 cardLayout:(id)arg2 cardWidth:(double)arg3;
+ (long long)_cardLayoutTypeForElement:(id)arg1;
+ (id)cardCellWithElement:(id)arg1 existingCell:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) IKImageElement *mainImageViewElement; // @synthesize mainImageViewElement=_mainImageViewElement;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(retain, nonatomic) VUICardViewLayoutFactory *layoutFactory; // @synthesize layoutFactory=_layoutFactory;
@property(retain, nonatomic) VUICardView *cardView; // @synthesize cardView=_cardView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setCardView:(id)arg1 force:(_Bool)arg2;
@property(readonly, nonatomic) double mainImageCornerRadius;
- (id)initWithFrame:(struct CGRect)arg1;

@end
