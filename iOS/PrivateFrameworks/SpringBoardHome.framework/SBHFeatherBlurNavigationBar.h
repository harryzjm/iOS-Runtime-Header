//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationBar.h>

@class NSArray, SBHFeatherBlurView, UILabel, UINavigationBarAppearance, UINavigationItem, UIView;

@interface SBHFeatherBlurNavigationBar : UINavigationBar
{
    UINavigationBarAppearance *_barAppearance;
    UILabel *_featherBlurTitleLabel;
    UINavigationItem *_configuredForItem;
    NSArray *_maskLayers;
    double _largeTextHeight;
    UIView *_capturedLargeTextLabelContainerView;
    UIView *_capturedTinyTextLabelContainerView;
    _Bool _allowsAnimatedUpdating;
    SBHFeatherBlurView *_featherBlurBackgroundView;
    double _sb_minimumNavbarHeight;
    double _sb_maximumNavbarHeight;
    struct CGRect _gradientMaskFrame;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowsAnimatedUpdating; // @synthesize allowsAnimatedUpdating=_allowsAnimatedUpdating;
@property(readonly, nonatomic) double sb_maximumNavbarHeight; // @synthesize sb_maximumNavbarHeight=_sb_maximumNavbarHeight;
@property(readonly, nonatomic) double sb_minimumNavbarHeight; // @synthesize sb_minimumNavbarHeight=_sb_minimumNavbarHeight;
@property(readonly, nonatomic) struct CGRect gradientMaskFrame; // @synthesize gradientMaskFrame=_gradientMaskFrame;
@property(retain, nonatomic) SBHFeatherBlurView *featherBlurBackgroundView; // @synthesize featherBlurBackgroundView=_featherBlurBackgroundView;
- (void)_updateLabel;
- (void)_updateAppearance;
- (void)_updateHeights;
- (struct CGRect)_calculateCompactNavBarFrame;
- (struct CGRect)_calculateFeatherBlurBackgroundViewFrame;
- (id)_capturedLargeTextLabelContainerView;
- (id)_capturedTinyTextLabelContainerView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (long long)barPosition;
- (id)initWithFrame:(struct CGRect)arg1;

@end
