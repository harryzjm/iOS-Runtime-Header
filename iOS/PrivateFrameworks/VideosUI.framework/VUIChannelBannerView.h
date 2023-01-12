//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIView, VUILabel, VUIProductUberBackgroundView, VUISeparatorView;

__attribute__((visibility("hidden")))
@interface VUIChannelBannerView
{
    _Bool _isDescriptionPreferredOnPhoneSizeClass;
    UIView *_appleTVChannelLogoView;
    UIView *_subscribeButton;
    VUILabel *_disclaimerTextLabel;
    UIView *_descriptionTextView;
    NSArray *_textLabels;
    VUIProductUberBackgroundView *_bgImageView;
    UIView *_bgColorView;
    double _logoHeight;
    double _height;
    double _subscribeButtonHeight;
    VUISeparatorView *_separatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VUISeparatorView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) double subscribeButtonHeight; // @synthesize subscribeButtonHeight=_subscribeButtonHeight;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) _Bool isDescriptionPreferredOnPhoneSizeClass; // @synthesize isDescriptionPreferredOnPhoneSizeClass=_isDescriptionPreferredOnPhoneSizeClass;
@property(nonatomic) double logoHeight; // @synthesize logoHeight=_logoHeight;
@property(retain, nonatomic) UIView *bgColorView; // @synthesize bgColorView=_bgColorView;
@property(retain, nonatomic) VUIProductUberBackgroundView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) NSArray *textLabels; // @synthesize textLabels=_textLabels;
@property(retain, nonatomic) UIView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) VUILabel *disclaimerTextLabel; // @synthesize disclaimerTextLabel=_disclaimerTextLabel;
@property(retain, nonatomic) UIView *subscribeButton; // @synthesize subscribeButton=_subscribeButton;
@property(retain, nonatomic) UIView *appleTVChannelLogoView; // @synthesize appleTVChannelLogoView=_appleTVChannelLogoView;
- (void)_layoutLabels:(id)arg1 withOrigin:(struct CGPoint)arg2 maxWidth:(double)arg3;
- (double)_subscribeButtonHeight;
- (_Bool)_isSubscribed;
- (struct CGSize)_layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;
@property(readonly, nonatomic) double topThreshold;
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;
- (void)setVuiBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

