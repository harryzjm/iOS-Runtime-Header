//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSLayoutConstraint, UIButton, UIImageView, UILabel, UISPasteVariant, UIStackView, _UISlotView;
@protocol _UIContextMenuCellLayout;

__attribute__((visibility("hidden")))
@interface _UIContextMenuCellContentView : UIView
{
    _Bool _needsConstraintRebuild;
    _Bool _isEmphasized;
    unsigned long long _options;
    long long _selectedIconBehavior;
    unsigned long long _preferredLineLimit;
    unsigned long long _overrideNumberOfTitleLines;
    id <_UIContextMenuCellLayout> _layout;
    UIImageView *_decorationImageView;
    UIImageView *_iconImageView;
    UIButton *_accessoryButton;
    UILabel *_emphasizedTitleLabel;
    UIImageView *_emphasizediconImageView;
    NSLayoutConstraint *_nonSymbolImageWidth;
    NSLayoutConstraint *_nonSymbolImageHeight;
    unsigned long long _controlState;
    _UISlotView *_securePasteButtonSlotView;
    UIStackView *_labelStackView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UISPasteVariant *_pasteVariant;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UISPasteVariant *pasteVariant; // @synthesize pasteVariant=_pasteVariant;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIStackView *labelStackView; // @synthesize labelStackView=_labelStackView;
@property(nonatomic) __weak _UISlotView *securePasteButtonSlotView; // @synthesize securePasteButtonSlotView=_securePasteButtonSlotView;
@property(nonatomic) unsigned long long controlState; // @synthesize controlState=_controlState;
@property(nonatomic) _Bool isEmphasized; // @synthesize isEmphasized=_isEmphasized;
@property(nonatomic) _Bool needsConstraintRebuild; // @synthesize needsConstraintRebuild=_needsConstraintRebuild;
@property(retain, nonatomic) NSLayoutConstraint *nonSymbolImageHeight; // @synthesize nonSymbolImageHeight=_nonSymbolImageHeight;
@property(retain, nonatomic) NSLayoutConstraint *nonSymbolImageWidth; // @synthesize nonSymbolImageWidth=_nonSymbolImageWidth;
@property(retain, nonatomic) UIImageView *emphasizediconImageView; // @synthesize emphasizediconImageView=_emphasizediconImageView;
@property(retain, nonatomic) UILabel *emphasizedTitleLabel; // @synthesize emphasizedTitleLabel=_emphasizedTitleLabel;
@property(retain, nonatomic) UIButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *decorationImageView; // @synthesize decorationImageView=_decorationImageView;
@property(readonly, nonatomic) id <_UIContextMenuCellLayout> layout; // @synthesize layout=_layout;
@property(nonatomic) unsigned long long overrideNumberOfTitleLines; // @synthesize overrideNumberOfTitleLines=_overrideNumberOfTitleLines;
@property(nonatomic) unsigned long long preferredLineLimit; // @synthesize preferredLineLimit=_preferredLineLimit;
@property(nonatomic) long long selectedIconBehavior; // @synthesize selectedIconBehavior=_selectedIconBehavior;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (_Bool)_hasTrailingAccessory;
- (id)_childIndicatorImage;
- (id)_mixedSelectionImage;
- (id)_selectionImage;
- (id)_decorationSymbolImageConfiguration;
- (struct CGSize)_maxImageSize;
- (id)_subtitleTextColor;
- (id)_childIndicatorColorForCurrentState;
- (id)_primaryContentColorForCurrentState;
- (id)_iconSymbolConfigurationForCurrentTraitsUsingBoldFont:(_Bool)arg1;
- (void)_updateSubtitleLabelNumberOfLines;
- (void)_updateTitleLabelNumberOfLines;
- (long long)_subtitleLabelRenderingMode;
- (id)_subtitleLabelFilterForCurrentTraitsAndState;
- (id)_primaryCompositingFilterForCurrentTraitsAndState;
- (void)_updateLabelsForCurrentState;
- (void)_updateCompositingFiltersForCurrentState;
- (void)setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;
- (void)updateConstraints;
- (void)_updateIconImageAppearanceForStateChange;
- (void)_updateAppearanceForStateChange;
- (void)_updateAttachedConstraintsForViewHierarchyChange;
- (id)_contentImageViewForImage:(id)arg1;
- (void)_installSubtitleLabelIfNeeded;
- (id)_primaryTitleLabel;
- (void)_installTitleLabelIfNeeded;
- (void)_createLabelStackViewIfNeeded;
- (unsigned int)_secureName;
- (void)_updateSecureView;
- (void)prepareForReuse;
- (void)_hideContents;
@property(readonly, nonatomic) unsigned long long measuredNumberOfTitleLines;
- (void)_updateForOptionsChangeFromPreviousOptions:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)_setNeedsConstraintRebuild;
- (void)_setDecorationImage:(id)arg1;
- (void)setAccessoryAction:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setTitle:(id)arg1;
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets backgroundViewInsets;
@property(readonly, nonatomic) _Bool shouldHighlightOnHover;
@property(readonly, nonatomic) UIView *iconView;
@property(readonly, nonatomic) UIView *decorationView;
- (void)setLayoutClass:(Class)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

