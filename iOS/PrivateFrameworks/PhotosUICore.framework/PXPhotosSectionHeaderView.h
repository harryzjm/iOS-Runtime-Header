//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

#import <PhotosUICore/PXGReusableView-Protocol.h>

@class NSArray, NSDate, NSString, PXCuratedLibraryOverlayButton, PXCuratedLibrarySectionHeaderLayoutSpec, UIImage, UIImageView, UILabel, UIView, UIVisualEffectView;
@protocol NSCopying, PXPhotosSectionHeaderViewDelegate;

@interface PXPhotosSectionHeaderView : UICollectionReusableView <PXGReusableView>
{
    UILabel *_titleLabel;
    UILabel *_locationsLabel;
    UILabel *_separatorLabel;
    UILabel *_dateLabel;
    UIImageView *_disclosureIconView;
    PXCuratedLibraryOverlayButton *_actionButton;
    _Bool _highlightViewVisible;
    _Bool _inLayoutTransition;
    _Bool _performingBatchDateDependentUpdate;
    _Bool _dateDependentPropertiesDidChange;
    UIVisualEffectView *_visualEffectView;
    UIImageView *_backgroundImageView;
    UIView *_highlightView;
    _Bool _useYearOnlyForDefaultTitle;
    _Bool _wantsBackground;
    _Bool _showsActionButton;
    _Bool _allowsPhotosDetailsInteraction;
    NSString *_backdropViewGroupName;
    id <PXPhotosSectionHeaderViewDelegate> _delegate;
    long long _style;
    unsigned long long _backgroundStyle;
    UIImage *_backgroundImage;
    double _backgroundImageOverhang;
    double _backgroundImageAlpha;
    long long _sectionIndex;
    NSString *_sectionTitle;
    NSArray *_sectionLocations;
    NSDate *_sectionStartDate;
    NSDate *_sectionEndDate;
    NSString *_actionButtonTitle;
    PXCuratedLibrarySectionHeaderLayoutSpec *_buttonSpec;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _highlightInsets;
}

+ (_Bool)_hasAccessibilityLargeText;
+ (_Bool)shouldUseAccessibilityLargeTextLayoutWithTraitCollecton:(id)arg1;
+ (_Bool)shouldUsePhoneLayoutWithTraitCollection:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool allowsPhotosDetailsInteraction; // @synthesize allowsPhotosDetailsInteraction=_allowsPhotosDetailsInteraction;
@property(retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *buttonSpec; // @synthesize buttonSpec=_buttonSpec;
@property(copy, nonatomic) NSString *actionButtonTitle; // @synthesize actionButtonTitle=_actionButtonTitle;
@property(nonatomic) _Bool showsActionButton; // @synthesize showsActionButton=_showsActionButton;
@property(readonly, nonatomic) NSDate *sectionEndDate; // @synthesize sectionEndDate=_sectionEndDate;
@property(readonly, nonatomic) NSDate *sectionStartDate; // @synthesize sectionStartDate=_sectionStartDate;
@property(retain, nonatomic) NSArray *sectionLocations; // @synthesize sectionLocations=_sectionLocations;
@property(copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(nonatomic) struct UIEdgeInsets highlightInsets; // @synthesize highlightInsets=_highlightInsets;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) double backgroundImageAlpha; // @synthesize backgroundImageAlpha=_backgroundImageAlpha;
@property(nonatomic) double backgroundImageOverhang; // @synthesize backgroundImageOverhang=_backgroundImageOverhang;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) _Bool wantsBackground; // @synthesize wantsBackground=_wantsBackground;
@property(nonatomic) unsigned long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <PXPhotosSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *backdropViewGroupName; // @synthesize backdropViewGroupName=_backdropViewGroupName;
- (void)_hideHighlightView;
- (void)_updateHighlightView;
- (void)_setHighlightViewVisible:(_Bool)arg1;
- (_Bool)allowLocationTapForTouch:(id)arg1;
- (void)prepareForReuse;
- (void)didEndDisplaying;
- (void)_layoutSubviewsForCurentStyle;
- (void)layoutSubviews;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_dateRangeFormatterChanged:(id)arg1;
- (id)_dateRangeYearFormatter;
- (id)_dateRangeLongFormatter;
- (id)_dateRangeCompactFormatter;
- (void)_updateBackdropViewGroupName;
- (void)_updateBackgroundAnimated:(_Bool)arg1;
- (void)_updateActionButton;
- (void)_updateDateLabel;
- (void)_updateLocationsLabelVisibility;
- (void)_updateDisclosureIcon;
- (void)_updateTitleLabel;
- (void)_updateDateDependentLabels;
- (void)_handleActionButton:(id)arg1;
- (void)_handleSignificantDateChange:(id)arg1;
- (_Bool)_disableRasterizeInAnimations;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)applyLayoutAttributes:(id)arg1;
- (void)_updateLabelsForTextStyle;
@property(readonly, nonatomic) double baselineToBottomSpacing;
- (void)setSectionStartDate:(id)arg1 endDate:(id)arg2;
@property(nonatomic) _Bool useYearOnlyForDefaultTitle;
- (void)performBatchUpdateOfDateDependentPropertiesWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)_usingDateAsTitle;
@property(readonly, nonatomic) NSString *synthesizedSectionTitle;
- (void)setWantsBackground:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)becomeReusable;
@property(copy, nonatomic) id <NSCopying> userData;
@property(nonatomic) struct CGRect clippingRect;

@end
