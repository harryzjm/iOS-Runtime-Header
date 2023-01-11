//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView, UIButton, UILabel, UIVisualEffectView;
@protocol CAMDescriptionOverlayViewDelegate;

@interface CAMDescriptionOverlayView : UIView
{
    id <CAMDescriptionOverlayViewDelegate> _delegate;
    long long _orientation;
    double _contentTopInset;
    UIVisualEffectView *__blurEffectView;
    CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView *__primaryVibrancyEffectView;
    UILabel *__titleLabel;
    UILabel *__descriptionLabel;
    UILabel *__infoLabel;
    UIButton *__acknowledgmentButton;
    double __descriptionFontSizeMultiplier;
    double __infoFontSizeMultiplier;
    UIView *__topBlackoutView;
}

@property(retain, nonatomic) UIView *_topBlackoutView; // @synthesize _topBlackoutView=__topBlackoutView;
@property(nonatomic, setter=_setInfoFontSizeMultiplier:) double _infoFontSizeMultiplier; // @synthesize _infoFontSizeMultiplier=__infoFontSizeMultiplier;
@property(nonatomic, setter=_setDescriptionFontSizeMultiplier:) double _descriptionFontSizeMultiplier; // @synthesize _descriptionFontSizeMultiplier=__descriptionFontSizeMultiplier;
@property(readonly, nonatomic) UIButton *_acknowledgmentButton; // @synthesize _acknowledgmentButton=__acknowledgmentButton;
@property(readonly, nonatomic) UILabel *_infoLabel; // @synthesize _infoLabel=__infoLabel;
@property(readonly, nonatomic) UILabel *_descriptionLabel; // @synthesize _descriptionLabel=__descriptionLabel;
@property(readonly, nonatomic) UILabel *_titleLabel; // @synthesize _titleLabel=__titleLabel;
@property(readonly, nonatomic) CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView *_primaryVibrancyEffectView; // @synthesize _primaryVibrancyEffectView=__primaryVibrancyEffectView;
@property(readonly, nonatomic) UIVisualEffectView *_blurEffectView; // @synthesize _blurEffectView=__blurEffectView;
@property(nonatomic) double contentTopInset; // @synthesize contentTopInset=_contentTopInset;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) __weak id <CAMDescriptionOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)additionalSpacing;
- (double)maxInfoTextWidthForNarrowWidth:(_Bool)arg1 isLandscape:(_Bool)arg2 usingFontSizeMultiplier:(double)arg3;
- (double)maxDescriptionTextWidthForNarrowWidth:(_Bool)arg1 isLandscape:(_Bool)arg2 usingFontSizeMultiplier:(double)arg3;
- (id)infoTextUsingNarrowWidth:(_Bool)arg1;
- (id)descriptionTextUsingNarrowWidth:(_Bool)arg1;
- (id)acknowledgmentTextUsingNarrowWidth:(_Bool)arg1;
- (id)titleTextUsingNarrowWidth:(_Bool)arg1;
- (void)setVisible:(_Bool)arg1 animationDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_isVisible;
- (void)_updateTopBlackoutViewForVisible:(_Bool)arg1;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_handleAcknowledgmentButtonTapped:(id)arg1;
@property(nonatomic, getter=isAcknowledgmentButtonHighlighted) _Bool acknowledgmentButtonHighlighted;
- (void)layoutSubviews;
- (void)_updateTextUsingNarrowWidth:(_Bool)arg1;
- (void)_updateFontsUsingNarrowWidth:(_Bool)arg1;
- (void)updateToContentSize:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

