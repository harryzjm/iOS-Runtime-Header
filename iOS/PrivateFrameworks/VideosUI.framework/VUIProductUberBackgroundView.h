//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UIVisualEffectView, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIProductUberBackgroundView : UIView
{
    _Bool _isChannelBanner;
    _TVImageView *_imageView;
    long long _configuredBlurInterfaceStyle;
    CAGradientLayer *_maskGradientLayer;
    UIVisualEffectView *_blurEffectView;
    double _contentOffset;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(nonatomic) double contentOffset; // @synthesize contentOffset=_contentOffset;
@property(retain, nonatomic) UIVisualEffectView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(retain, nonatomic) CAGradientLayer *maskGradientLayer; // @synthesize maskGradientLayer=_maskGradientLayer;
@property(nonatomic) long long configuredBlurInterfaceStyle; // @synthesize configuredBlurInterfaceStyle=_configuredBlurInterfaceStyle;
@property(retain, nonatomic) _TVImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) _Bool isChannelBanner; // @synthesize isChannelBanner=_isChannelBanner;
- (void)layoutSubviews;
- (void)setImageOffset:(double)arg1;
- (void)configureBlurWithInterfaceStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
