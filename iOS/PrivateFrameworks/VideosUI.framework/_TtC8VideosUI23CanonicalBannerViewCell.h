//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIBaseCollectionViewCell.h"

@class MISSING_TYPE, NSArray, UIView, VUIImageView, VUILabel, VUIMediaTagsView, _TtC8VideosUI16RolesSummaryView;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI23CanonicalBannerViewCell : VUIBaseCollectionViewCell
{
    MISSING_TYPE *bannerViewModel;
    MISSING_TYPE *bannerLayout;
    MISSING_TYPE *collectionViewFrameSize;
    MISSING_TYPE *titleImageView;
    MISSING_TYPE *contentTitleView;
    MISSING_TYPE *contentSubtitleView;
    MISSING_TYPE *episodeInfoTextView;
    MISSING_TYPE *promoTextView;
    MISSING_TYPE *coverArtImageView;
    MISSING_TYPE *buttonViews;
    MISSING_TYPE *availabilityTextView;
    MISSING_TYPE *availabilityImageView;
    MISSING_TYPE *disclaimerTextView;
    MISSING_TYPE *descriptionTextView;
    MISSING_TYPE *rolesSummaryView;
    MISSING_TYPE *tagsView;
    MISSING_TYPE *infoTagsView;
    MISSING_TYPE *uberBackgroundView;
    MISSING_TYPE *backgroundImageViewModel;
    MISSING_TYPE *gradientLayer;
    MISSING_TYPE *gradientLayerView;
    MISSING_TYPE *descComputationLabel;
    MISSING_TYPE *tagsComputationLabel;
    MISSING_TYPE *transitionBackgroundView;
    MISSING_TYPE *isUberLayout;
    MISSING_TYPE *isPhoneSizeClass;
    MISSING_TYPE *isBackgroundTransitioning;
    MISSING_TYPE *isImageLoadedForBackgroundTransitioning;
    MISSING_TYPE *bannerButtonSpacing;
    MISSING_TYPE *disclaimerTextBottomSpacing;
    MISSING_TYPE *contentOffset;
    MISSING_TYPE *$__lazy_storage_$_separatorView;
}

- (void).cxx_destruct;
@property(nonatomic, readonly) VUIMediaTagsView *accessibilityTagsView;
@property(nonatomic, readonly) _TtC8VideosUI16RolesSummaryView *accessibilityRolesSummaryView;
@property(nonatomic, readonly) UIView *accessibilityDescriptionTextView;
@property(nonatomic, readonly) VUILabel *accessibilityDisclaimerTextView;
@property(nonatomic, readonly) VUIImageView *accessibilityAvailabilityImageView;
@property(nonatomic, readonly) VUILabel *accessibilityAvailabilityTextView;
@property(nonatomic, readonly) NSArray *accessibilityButtonViews;
@property(nonatomic, readonly) VUILabel *accessibilityPromoTextView;
@property(nonatomic, readonly) VUILabel *accessibilityEpisodeInfoTextView;
@property(nonatomic, readonly) VUILabel *accessibilityContentSubtitleView;
@property(nonatomic, readonly) VUILabel *accessibilityContentTitleView;
@property(nonatomic, readonly) VUIImageView *accessibilityTitleImageView;
- (void)vui_cellWillBeDisplayed;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (void)vui_prepareForReuse;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

