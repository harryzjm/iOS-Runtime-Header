//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSPointerArray, PUPhotoDecoration, UIColor, UIImage, UIImageView;

@interface PUStackView : UIView
{
    struct CGAffineTransform _transforms[9];
    UIImageView *_combinedPhotoDecorationImageView;
    _Bool _imageHidden[9];
    _Bool _needsDynamicLayout;
    _Bool _combinesPhotoDecorations;
    _Bool _hasRoundedCorners;
    _Bool _empty;
    _Bool _highlighted;
    unsigned long long _style;
    PUPhotoDecoration *_photoDecoration;
    UIColor *_gridBackgroundColor;
    double _gridMargin;
    double _gridItemSpacing;
    double _posterSquareCornerRadius;
    double _posterSubitemCornerRadius;
    long long _numberOfVisibleItems;
    double _itemAlpha;
    UIImage *_emptyPlaceholderImage;
    long long __numberOfViews;
    NSArray *__photoViews;
    NSPointerArray *__imageSizes;
    NSArray *__photoDecorationVariants;
    UIView *__backgroundView;
    UIColor *_cornersBackgroundColor;
    struct CGSize _stackSize;
    struct UIOffset _stackOffset;
    struct UIOffset _stackPerspectiveOffset;
    struct CGPoint _stackPerspectiveFactor;
    struct UIEdgeInsets _stackPerspectiveInsets;
}

+ (long long)maximumNumberOfVisibleImagesForStyle:(unsigned long long)arg1;
+ (long long)maximumNumberOfVisibleItemsForStyle:(unsigned long long)arg1;
@property(retain, nonatomic) UIColor *cornersBackgroundColor; // @synthesize cornersBackgroundColor=_cornersBackgroundColor;
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property(copy, nonatomic, setter=_setPhotoDecorationVariants:) NSArray *_photoDecorationVariants; // @synthesize _photoDecorationVariants=__photoDecorationVariants;
@property(readonly, nonatomic) NSPointerArray *_imageSizes; // @synthesize _imageSizes=__imageSizes;
@property(readonly, nonatomic) NSArray *_photoViews; // @synthesize _photoViews=__photoViews;
@property(readonly, nonatomic) long long _numberOfViews; // @synthesize _numberOfViews=__numberOfViews;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isEmpty) _Bool empty; // @synthesize empty=_empty;
@property(retain, nonatomic) UIImage *emptyPlaceholderImage; // @synthesize emptyPlaceholderImage=_emptyPlaceholderImage;
@property(nonatomic) double itemAlpha; // @synthesize itemAlpha=_itemAlpha;
@property(nonatomic) long long numberOfVisibleItems; // @synthesize numberOfVisibleItems=_numberOfVisibleItems;
@property(nonatomic) _Bool hasRoundedCorners; // @synthesize hasRoundedCorners=_hasRoundedCorners;
@property(nonatomic) double posterSubitemCornerRadius; // @synthesize posterSubitemCornerRadius=_posterSubitemCornerRadius;
@property(nonatomic) double posterSquareCornerRadius; // @synthesize posterSquareCornerRadius=_posterSquareCornerRadius;
@property(nonatomic) double gridItemSpacing; // @synthesize gridItemSpacing=_gridItemSpacing;
@property(nonatomic) double gridMargin; // @synthesize gridMargin=_gridMargin;
@property(retain, nonatomic) UIColor *gridBackgroundColor; // @synthesize gridBackgroundColor=_gridBackgroundColor;
@property(nonatomic) struct CGPoint stackPerspectiveFactor; // @synthesize stackPerspectiveFactor=_stackPerspectiveFactor;
@property(nonatomic) struct UIOffset stackPerspectiveOffset; // @synthesize stackPerspectiveOffset=_stackPerspectiveOffset;
@property(nonatomic) struct UIEdgeInsets stackPerspectiveInsets; // @synthesize stackPerspectiveInsets=_stackPerspectiveInsets;
@property(nonatomic) struct UIOffset stackOffset; // @synthesize stackOffset=_stackOffset;
@property(nonatomic) struct CGSize stackSize; // @synthesize stackSize=_stackSize;
@property(nonatomic) _Bool combinesPhotoDecorations; // @synthesize combinesPhotoDecorations=_combinesPhotoDecorations;
@property(retain, nonatomic) PUPhotoDecoration *photoDecoration; // @synthesize photoDecoration=_photoDecoration;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)setSubtitle:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setTitle:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setTitleFontName:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setCollectionTileLayoutTemplate:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setFeatureSpec:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)_updateDynamicLayout;
- (void)_setNeedsDynamicLayout;
- (id)_combinedPhotoDecorationsImage;
- (void)_getCenter:(struct CGPoint *)arg1 bounds:(struct CGRect *)arg2 forPhotoViewAtIndex:(long long)arg3;
- (struct CGRect)_getStackFrame;
- (void)_rebuildDecorationVariants;
- (void)_updatePhotoViews;
- (void)_updateSubviewsOrdering;
- (void)_updateHighlight;
- (void)_updateBackgroundView;
- (void)_updateNumberOfViews;
- (void)prepareForReuse;
- (id)newLayoutAttributesForVisbleItemsRelativeToView:(id)arg1 maxCount:(long long)arg2;
- (id)newLayoutAttributesForItemAtIndex:(long long)arg1 relativeToView:(id)arg2;
- (_Bool)wouldCoverAllItemsInStackView:(id)arg1;
@property(readonly, nonatomic) NSArray *stackItemViews;
@property(readonly, nonatomic) struct CGPoint topLeftCornerOfFrontStackItem;
- (struct CGRect)frameOfFrontStackItemRelativeToView:(id)arg1;
- (void)setHasRoundedCorners:(_Bool)arg1 withCornersBackgroundColor:(id)arg2;
- (void)setBadgeInfo:(struct PXAssetBadgeInfo)arg1 style:(long long)arg2 forItemAtIndex:(long long)arg3;
- (void)setBadgeInfo:(struct PXAssetBadgeInfo)arg1 forItemAtIndex:(long long)arg2;
- (void)setImageHidden:(_Bool)arg1 forItemAtIndex:(long long)arg2;
- (_Bool)isImageHiddenForItemAtIndex:(long long)arg1;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setImageSize:(struct CGSize)arg1 forItemAtIndex:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

