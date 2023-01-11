//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class IKViewElement, NSShadow, TVImageLayout, VUILabel, VUITextLayout, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUITabItemCollectionViewCell : UICollectionViewCell
{
    IKViewElement *_viewElement;
    VUILabel *_titleLabel;
    VUITextLayout *_titleLayout;
    _TVImageView *_imageView;
    TVImageLayout *_imageLayout;
    NSShadow *_shadow;
}

+ (id)tabItemTextLayout;
+ (struct CGSize)_glyphSizeForContentSizeCategory:(id)arg1 preferredNormalImageWidth:(double)arg2;
+ (struct UIEdgeInsets)_tabItemPaddingForContentSizeCategory:(id)arg1 hasTitle:(_Bool)arg2;
+ (double)_tabItemImageToTextMarginForContentSizeCategory:(id)arg1;
+ (double)_preferredHeightForContentSizeCategory:(id)arg1;
+ (id)_findChildElementWithLongestTextInSectionElement:(id)arg1;
+ (_Bool)_isContentSizeCategoryBetweenAX1toAX3:(id)arg1;
+ (_Bool)_shouldDisplayTitleInTwoLinesForElement:(id)arg1 tabItemSize:(struct CGSize)arg2 labelSize:(struct CGSize)arg3 contentSizeCategory:(id)arg4 numberOfTabs:(unsigned long long)arg5;
+ (double)_imageElementWidthForElement:(id)arg1;
+ (double)_columnWidthForElement:(id)arg1 numberOfTabs:(unsigned long long)arg2;
+ (double)_windowWidthForElement:(id)arg1;
+ (_Bool)_shouldDoubleGlyphSizeForElement:(id)arg1 numberOfTabs:(unsigned long long)arg2;
+ (id)configureViewWithElement:(id)arg1 existingCell:(id)arg2;
+ (_Bool)shouldDoubleGlyphSizeForSectionElement:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property(retain, nonatomic) TVImageLayout *imageLayout; // @synthesize imageLayout=_imageLayout;
@property(retain, nonatomic) _TVImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) VUITextLayout *titleLayout; // @synthesize titleLayout=_titleLayout;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (_Bool)scalesLargeContentImage;
- (id)largeContentImage;
- (id)largeContentTitle;
- (id)_imageLayout;
- (id)_titleLayout;
- (struct CGSize)_layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;
- (struct CGSize)_adjustedTabItemSizeForViewElement:(id)arg1 tabItemSize:(struct CGSize)arg2 labelSize:(struct CGSize)arg3 numberOfTabs:(unsigned long long)arg4;
- (double)_updatedLabelWidthWithTwoLinesTitleForText:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
