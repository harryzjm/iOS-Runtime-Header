//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class HUControlHostView, HUPillButton, HUQuickControlAuxiliaryHostView, HUQuickControlButtonRowView, HUQuickControlSummaryView, NSArray, NSLayoutConstraint, UILayoutGuide, _UIBackdropView, _UIBackdropViewSettings;
@protocol HUQuickControlContainerViewDelegate, HUQuickControlPresentableView;

@interface HUQuickControlContainerView : UIView
{
    _Bool _shouldShowDetailsButton;
    _Bool _shouldShowControls;
    _Bool _shouldShowAlternateControlButton;
    UIView<HUQuickControlPresentableView> *_primaryControlView;
    UIView<HUQuickControlPresentableView> *_secondaryControlView;
    double _controlTransitionProgress;
    double _blurTransitionProgress;
    double _chromeTransitionProgress;
    double _verticalDirectionalControlStretchFactor;
    double _horizontalControlCompressionFactor;
    double _initialSourceViewScale;
    unsigned long long _edgesForExtendedLayout;
    unsigned long long _activeControlType;
    HUQuickControlSummaryView *_summaryView;
    id <HUQuickControlContainerViewDelegate> _delegate;
    HUControlHostView *_controlHostView;
    UILayoutGuide *_controlViewLayoutGuide;
    NSArray *_contentConstraints;
    NSLayoutConstraint *_compactControlBottomConstraint;
    _UIBackdropView *_blurView;
    UIView *_blurTintView;
    _UIBackdropViewSettings *_blurSettings;
    HUQuickControlAuxiliaryHostView *_auxiliaryHostView;
    HUQuickControlButtonRowView *_buttonRowView;
    HUPillButton *_detailsButton;
    HUPillButton *_alternateControlButton;
    UILayoutGuide *_controlButtonSpacingLayoutGuide;
    UILayoutGuide *_topSummarySpacingLayoutGuide;
    struct CGRect _sourceRect;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) UILayoutGuide *topSummarySpacingLayoutGuide; // @synthesize topSummarySpacingLayoutGuide=_topSummarySpacingLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *controlButtonSpacingLayoutGuide; // @synthesize controlButtonSpacingLayoutGuide=_controlButtonSpacingLayoutGuide;
@property(retain, nonatomic) HUPillButton *alternateControlButton; // @synthesize alternateControlButton=_alternateControlButton;
@property(retain, nonatomic) HUPillButton *detailsButton; // @synthesize detailsButton=_detailsButton;
@property(retain, nonatomic) HUQuickControlButtonRowView *buttonRowView; // @synthesize buttonRowView=_buttonRowView;
@property(nonatomic) _Bool shouldShowAlternateControlButton; // @synthesize shouldShowAlternateControlButton=_shouldShowAlternateControlButton;
@property(retain, nonatomic) HUQuickControlAuxiliaryHostView *auxiliaryHostView; // @synthesize auxiliaryHostView=_auxiliaryHostView;
@property(retain, nonatomic) _UIBackdropViewSettings *blurSettings; // @synthesize blurSettings=_blurSettings;
@property(retain, nonatomic) UIView *blurTintView; // @synthesize blurTintView=_blurTintView;
@property(retain, nonatomic) _UIBackdropView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) NSLayoutConstraint *compactControlBottomConstraint; // @synthesize compactControlBottomConstraint=_compactControlBottomConstraint;
@property(retain, nonatomic) NSArray *contentConstraints; // @synthesize contentConstraints=_contentConstraints;
@property(retain, nonatomic) UILayoutGuide *controlViewLayoutGuide; // @synthesize controlViewLayoutGuide=_controlViewLayoutGuide;
@property(retain, nonatomic) HUControlHostView *controlHostView; // @synthesize controlHostView=_controlHostView;
@property(readonly, nonatomic) __weak id <HUQuickControlContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HUQuickControlSummaryView *summaryView; // @synthesize summaryView=_summaryView;
@property(readonly, nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(nonatomic) unsigned long long activeControlType; // @synthesize activeControlType=_activeControlType;
@property(nonatomic) unsigned long long edgesForExtendedLayout; // @synthesize edgesForExtendedLayout=_edgesForExtendedLayout;
@property(nonatomic) _Bool shouldShowControls; // @synthesize shouldShowControls=_shouldShowControls;
@property(nonatomic) _Bool shouldShowDetailsButton; // @synthesize shouldShowDetailsButton=_shouldShowDetailsButton;
@property(nonatomic) double initialSourceViewScale; // @synthesize initialSourceViewScale=_initialSourceViewScale;
@property(nonatomic) double horizontalControlCompressionFactor; // @synthesize horizontalControlCompressionFactor=_horizontalControlCompressionFactor;
@property(nonatomic) double verticalDirectionalControlStretchFactor; // @synthesize verticalDirectionalControlStretchFactor=_verticalDirectionalControlStretchFactor;
@property(nonatomic) double chromeTransitionProgress; // @synthesize chromeTransitionProgress=_chromeTransitionProgress;
@property(nonatomic) double blurTransitionProgress; // @synthesize blurTransitionProgress=_blurTransitionProgress;
@property(nonatomic) double controlTransitionProgress; // @synthesize controlTransitionProgress=_controlTransitionProgress;
- (void).cxx_destruct;
- (struct CGPoint)_controlHostCenterForPresentationProgress:(double)arg1;
- (struct CGPoint)_controlHostCenter;
- (struct CGPoint)_transformedPresentedControlHostCenterOffset;
- (struct CGAffineTransform)_controlHostTransform;
- (struct CGAffineTransform)_controlHostTransformForPresentationProgress:(double)arg1;
- (struct CGAffineTransform)sourceViewTransformForPresentationProgress:(double)arg1;
- (struct CGSize)_presentedControlHostSize;
@property(readonly, nonatomic) struct CGRect presentedControlFrame;
- (double)_summaryFirstBaselineToControlTopSpacing;
- (void)_updateCompactControlBottomConstraint;
- (void)_configureControlViewLayoutGuideConstraints:(id)arg1;
- (void)_configureRegularHeightConstraints:(id)arg1;
- (void)_configureCompactHeightConstraints:(id)arg1;
- (void)updateConstraints;
- (void)_updateControlHostLayout;
- (void)_updateContentAlignment;
- (void)_updateLayoutMargins;
- (void)layoutSubviews;
- (long long)_sizeSubclass;
- (_Bool)_useCompactHeightLayout;
- (void)traitCollectionDidChange:(id)arg1;
- (void)hideAuxiliaryView;
- (void)showAuxiliaryView:(id)arg1;
- (void)_alternateControlButtonTapped:(id)arg1;
- (void)_detailsButtonTapped:(id)arg1;
- (void)_updateAlternateControlButtonText;
- (void)_setupAlternateControlButtonIfNecessary;
- (void)_setupBlurView;
- (_Bool)_shouldShowControlView;
@property(readonly, nonatomic) UIView<HUQuickControlPresentableView> *secondaryControlView; // @synthesize secondaryControlView=_secondaryControlView;
@property(readonly, nonatomic) UIView<HUQuickControlPresentableView> *primaryControlView; // @synthesize primaryControlView=_primaryControlView;
@property(readonly, nonatomic) UIView<HUQuickControlPresentableView> *activeControlView;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 sourceRect:(struct CGRect)arg3;

@end
