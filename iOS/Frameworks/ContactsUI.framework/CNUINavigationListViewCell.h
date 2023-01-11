//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class CNUINavigationListStyleApplier, NSLayoutConstraint, UIImageView, UILabel, UILayoutGuide;
@protocol CNUINavigationListStyle;

__attribute__((visibility("hidden")))
@interface CNUINavigationListViewCell : UITableViewCell
{
    _Bool _accessoryControlExpanded;
    _Bool _contentViewConstraintsLoaded;
    _Bool _showSeparator;
    UIImageView *_accessoryImageView;
    UILabel *_subtitleLabel;
    UIImageView *_titleImageView;
    UILabel *_titleLabel;
    id <CNUINavigationListStyle> _navigationListStyle;
    CNUINavigationListStyleApplier *_styleApplier;
    NSLayoutConstraint *_contentViewBottomAnchorConstraint;
    NSLayoutConstraint *_subtitleLabelFirstBaselineAnchorConstraint;
    NSLayoutConstraint *_subtitleLabelLeadingAnchorConstraint;
    NSLayoutConstraint *_subtitleLabelTrailingAnchorConstraint;
    NSLayoutConstraint *_titleLabelFirstBaselineAnchorConstraint;
    NSLayoutConstraint *_titleLabelLeadingAnchorConstraint;
    NSLayoutConstraint *_titleLabelTrailingAnchorConstraint;
    UILayoutGuide *_accessoryImageViewLayoutGuide;
    UILayoutGuide *_titleImageViewLayoutGuide;
}

+ (id)expandedAccessoryImageViewAccessibilityLabel;
+ (id)accessoryImageViewAccessibilityLabel;
+ (id)highlightedDisclosureImage;
+ (id)disclosureImage;
+ (id)reuseIdentifier;
+ (struct CGSize)desiredContentSizeForTitle:(id)arg1 subTitle:(id)arg2 navigationListStyle:(id)arg3;
+ (double)subtitleLabelFirstBaselineAnchorConstraintConstantForSubtitle:(id)arg1 navigationListStyle:(id)arg2;
+ (double)contentViewBottomAnchorConstraintConstantForNavigationListStyle:(id)arg1;
+ (double)titleLabelFirstBaselineAnchorConstraintConstantForNavigationListStyle:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool showSeparator; // @synthesize showSeparator=_showSeparator;
@property(readonly, nonatomic) UILayoutGuide *titleImageViewLayoutGuide; // @synthesize titleImageViewLayoutGuide=_titleImageViewLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *accessoryImageViewLayoutGuide; // @synthesize accessoryImageViewLayoutGuide=_accessoryImageViewLayoutGuide;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTrailingAnchorConstraint; // @synthesize titleLabelTrailingAnchorConstraint=_titleLabelTrailingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelLeadingAnchorConstraint; // @synthesize titleLabelLeadingAnchorConstraint=_titleLabelLeadingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelFirstBaselineAnchorConstraint; // @synthesize titleLabelFirstBaselineAnchorConstraint=_titleLabelFirstBaselineAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleLabelTrailingAnchorConstraint; // @synthesize subtitleLabelTrailingAnchorConstraint=_subtitleLabelTrailingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleLabelLeadingAnchorConstraint; // @synthesize subtitleLabelLeadingAnchorConstraint=_subtitleLabelLeadingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleLabelFirstBaselineAnchorConstraint; // @synthesize subtitleLabelFirstBaselineAnchorConstraint=_subtitleLabelFirstBaselineAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewBottomAnchorConstraint; // @synthesize contentViewBottomAnchorConstraint=_contentViewBottomAnchorConstraint;
@property(nonatomic, getter=isContentViewConstraintsLoaded) _Bool contentViewConstraintsLoaded; // @synthesize contentViewConstraintsLoaded=_contentViewConstraintsLoaded;
@property(nonatomic, getter=isAccessoryControlExpanded) _Bool accessoryControlExpanded; // @synthesize accessoryControlExpanded=_accessoryControlExpanded;
@property(retain, nonatomic) CNUINavigationListStyleApplier *styleApplier; // @synthesize styleApplier=_styleApplier;
@property(retain, nonatomic) id <CNUINavigationListStyle> navigationListStyle; // @synthesize navigationListStyle=_navigationListStyle;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateVisualStateAnimated:(_Bool)arg1;
- (void)updateConstraintsConstants;
- (void)updateConstraints;
- (void)loadContentViewConstraints;
- (void)setSeparatorStyle:(long long)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setAccessoryControlExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)setupAccessoryImageViewInView:(id)arg1;
- (void)loadContentView;
- (void)applyStyle;
- (void)styleUpdated;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (double)titleLabelFirstBaselineAnchorConstraintConstant;
- (double)subtitleLabelFirstBaselineAnchorConstraintConstant;
- (double)contentViewBottomAnchorConstraintConstant;
- (double)minimumContentHeight;

@end
