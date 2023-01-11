//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImage, UIImageView, _UILegibilitySettings;

@interface _UILegibilityView
{
    _Bool _hidesImage;
    _UILegibilitySettings *_settings;
    UIImage *_image;
    UIImage *_shadowImage;
    double _strength;
    UIImageView *_imageView;
    UIImageView *_shadowImageView;
    long long _options;
}

@property(nonatomic) long long options; // @synthesize options=_options;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool hidesImage; // @synthesize hidesImage=_hidesImage;
@property(nonatomic) double strength; // @synthesize strength=_strength;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) _UILegibilitySettings *settings; // @synthesize settings=_settings;
- (void)_updateFilters;
- (id)drawingColor;
- (_Bool)usesSecondaryColor;
@property(readonly, nonatomic) _Bool usesColorFilters;
- (void)layoutSubviews;
- (void)updateImage;
- (void)updateForChangedSettings:(id)arg1;
- (void)setSettings:(id)arg1 image:(id)arg2 shadowImage:(id)arg3;
- (void)setStyle:(long long)arg1 image:(id)arg2 shadowImage:(id)arg3;
- (void)setImage:(id)arg1 shadowImage:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) long long style; // @dynamic style;
- (void)dealloc;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 shadowImage:(id)arg4 options:(long long)arg5;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 shadowImage:(id)arg4;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3;
- (id)initWithStyle:(long long)arg1 image:(id)arg2 shadowImage:(id)arg3;
- (id)initWithStyle:(long long)arg1 image:(id)arg2;

@end
