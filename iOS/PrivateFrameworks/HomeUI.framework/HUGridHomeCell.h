//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFItem, HUCCInfoMosaicGridView, HUMosaicLayoutGeometry, NSArray, UIImage, UIImageView, UILabel, UIStackView, UIVisualEffectView;

@interface HUGridHomeCell
{
    _Bool _shouldShowHomeName;
    _Bool _shouldShowAsEmptyHome;
    HFItem *_item;
    UIImageView *_iconView;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIStackView *_verticalStackView;
    UIImage *_homeImage;
    UIVisualEffectView *_secondaryLabelEffectView;
    NSArray *_cellConstraints;
    HUCCInfoMosaicGridView *_infoView;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(retain, nonatomic) HUCCInfoMosaicGridView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) NSArray *cellConstraints; // @synthesize cellConstraints=_cellConstraints;
@property(retain, nonatomic) UIVisualEffectView *secondaryLabelEffectView; // @synthesize secondaryLabelEffectView=_secondaryLabelEffectView;
@property(retain, nonatomic) UIImage *homeImage; // @synthesize homeImage=_homeImage;
@property(nonatomic) _Bool shouldShowAsEmptyHome; // @synthesize shouldShowAsEmptyHome=_shouldShowAsEmptyHome;
@property(nonatomic) _Bool shouldShowHomeName; // @synthesize shouldShowHomeName=_shouldShowHomeName;
@property(retain, nonatomic) UIStackView *verticalStackView; // @synthesize verticalStackView=_verticalStackView;
@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void)setItem:(id)arg1;
- (id)item;
- (void)updateConstraints;
- (void)_invalidateConstraints;
- (void)layoutOptionsDidChange;
- (void)updateUIWithAnimation:(_Bool)arg1;
@property(retain, nonatomic) HUMosaicLayoutGeometry *mosaicLayoutGeometry;
- (void)_updatePrimaryLabel;
- (id)cellLayoutOptions;
- (void)_setupCell;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
