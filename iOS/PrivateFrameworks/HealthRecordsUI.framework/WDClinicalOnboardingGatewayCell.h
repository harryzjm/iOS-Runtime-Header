//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WDMedicalRecordGroupableCell.h"

@class HKBorderLineView, NSLayoutConstraint, UILabel, UIStackView, WDBrandLogoView;

__attribute__((visibility("hidden")))
@interface WDClinicalOnboardingGatewayCell : WDMedicalRecordGroupableCell
{
    WDBrandLogoView *_logoView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_detailLabel;
    HKBorderLineView *_featureDownloadView;
    HKBorderLineView *_featureSharingView;
    UILabel *_featureDownloadTitleLabel;
    UILabel *_featureDownloadTextLabel;
    UILabel *_featureSharingTitleLabel;
    UILabel *_featureSharingTextLabel;
    NSLayoutConstraint *_featureDownloadBottomConstraint;
    NSLayoutConstraint *_featureSharingBottomConstraint;
    UILabel *_tapToConnectLabel;
    NSLayoutConstraint *_tapToConnectLabelHeightConstraint;
    UIStackView *_outerSpecContainerView;
    UIStackView *_verticalSpecContainerView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIStackView *verticalSpecContainerView; // @synthesize verticalSpecContainerView=_verticalSpecContainerView;
@property(readonly, nonatomic) UIStackView *outerSpecContainerView; // @synthesize outerSpecContainerView=_outerSpecContainerView;
@property(readonly, nonatomic) NSLayoutConstraint *tapToConnectLabelHeightConstraint; // @synthesize tapToConnectLabelHeightConstraint=_tapToConnectLabelHeightConstraint;
@property(readonly, nonatomic) UILabel *tapToConnectLabel; // @synthesize tapToConnectLabel=_tapToConnectLabel;
@property(readonly, nonatomic) NSLayoutConstraint *featureSharingBottomConstraint; // @synthesize featureSharingBottomConstraint=_featureSharingBottomConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *featureDownloadBottomConstraint; // @synthesize featureDownloadBottomConstraint=_featureDownloadBottomConstraint;
@property(readonly, nonatomic) UILabel *featureSharingTextLabel; // @synthesize featureSharingTextLabel=_featureSharingTextLabel;
@property(readonly, nonatomic) UILabel *featureSharingTitleLabel; // @synthesize featureSharingTitleLabel=_featureSharingTitleLabel;
@property(readonly, nonatomic) UILabel *featureDownloadTextLabel; // @synthesize featureDownloadTextLabel=_featureDownloadTextLabel;
@property(readonly, nonatomic) UILabel *featureDownloadTitleLabel; // @synthesize featureDownloadTitleLabel=_featureDownloadTitleLabel;
@property(readonly, nonatomic) HKBorderLineView *featureSharingView; // @synthesize featureSharingView=_featureSharingView;
@property(readonly, nonatomic) HKBorderLineView *featureDownloadView; // @synthesize featureDownloadView=_featureDownloadView;
@property(readonly, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) WDBrandLogoView *logoView; // @synthesize logoView=_logoView;
- (void)tintColorDidChange;
- (void)_setAccessibilityIdentifiers;
- (void)_updateBasedOnAccessibilityCategory:(_Bool)arg1;
- (void)_updateForContentSizeCategory:(id)arg1;
- (void)_updateLabelVisibility;
- (void)configureWithGateway:(id)arg1 dataProvider:(id)arg2 connected:(_Bool)arg3;
- (void)_positionTapToConnectLabel;
- (id)_contentViewMarginsGuide;
- (void)_constrainStackViewContainerWithinContentView;
- (void)setUpConstraints;
- (void)_createOuterSpecContainerView;
- (void)_createVerticalSpecContainerView;
- (void)_createTapToConnectLabel;
- (void)_createSharingAvailableView;
- (void)_createDownloadAvailableView;
- (void)_createDetailLabel;
- (void)_createSubtitleLabel;
- (void)_createTitleLabel;
- (void)_createLogoView;
- (void)setupSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

