//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSNumberFormatter, NSString, PXRoundedCornerOverlayView, UIImage, UIImageView, UILabel, UIView;

@interface PXPeopleDetailSettingsCollectionViewCell : UICollectionViewCell
{
    NSNumberFormatter *_quantityNumberFormatter;
    struct CGRect _unitRect;
    _Bool _isFavorite;
    _Bool _isReordering;
    UIImageView *_avatarView;
    NSString *_name;
    unsigned long long _photoQuantity;
    double _textAlpha;
    UILabel *_quantityLabel;
    UILabel *_nameLabel;
    UIView *_actionIndicatorView;
    UIView *_selectionView;
    PXRoundedCornerOverlayView *_roundCornerOverlay;
}

+ (double)preferredHeightForWidth:(double)arg1 forAvatarPercentage:(double)arg2 withSizeClass:(long long)arg3 isFavorite:(_Bool)arg4;
@property(retain, nonatomic) PXRoundedCornerOverlayView *roundCornerOverlay; // @synthesize roundCornerOverlay=_roundCornerOverlay;
@property(retain, nonatomic) UIView *selectionView; // @synthesize selectionView=_selectionView;
@property(retain, nonatomic) UIView *actionIndicatorView; // @synthesize actionIndicatorView=_actionIndicatorView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic, setter=setReordering:) _Bool isReordering; // @synthesize isReordering=_isReordering;
@property(retain, nonatomic) UILabel *quantityLabel; // @synthesize quantityLabel=_quantityLabel;
@property(nonatomic) _Bool isFavorite; // @synthesize isFavorite=_isFavorite;
@property(nonatomic) double textAlpha; // @synthesize textAlpha=_textAlpha;
@property(nonatomic) unsigned long long photoQuantity; // @synthesize photoQuantity=_photoQuantity;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (struct UIColor *)_placeHolderColor;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updateType;
- (long long)_preferredSizeClass;
- (double)avatarCenterYOffset;
- (void)setSelected:(_Bool)arg1;
@property(nonatomic, getter=isActionIndicatorHidden) _Bool actionIndicatorHidden;
@property(retain, nonatomic) UIImage *image;
- (void)setImage:(id)arg1 normalizedFaceRect:(struct CGRect)arg2;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

