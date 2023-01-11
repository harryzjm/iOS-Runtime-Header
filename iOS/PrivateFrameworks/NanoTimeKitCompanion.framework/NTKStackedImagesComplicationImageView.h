//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKComplicationImageView-Protocol.h>
#import <NanoTimeKitCompanion/NTKLegibilityView-Protocol.h>

@class CLKDevice, CLKImageProvider, NSString, NTKColoringImageView, UIColor, UIImage, UIImageView;

@interface NTKStackedImagesComplicationImageView : UIView <NTKComplicationImageView, NTKLegibilityView>
{
    CLKDevice *_device;
    NTKColoringImageView *_foregroundImageView;
    NTKColoringImageView *_backgroundImageView;
    UIImageView *_foregroundAccentImageView;
    NTKColoringImageView *_monochromeImageView;
    UIImageView *_monochromeShadowView;
    UIImageView *_multipartShadowView;
    UIImage *_multipartShadowViewSource;
    _Bool _isUsingLegibility;
    _Bool _isShadowImagesStale;
    double _shadowBlur;
    UIColor *_shadowColor;
    double _imageScaleFactor;
    CLKImageProvider *_imageProvider;
    UIColor *_color;
    UIColor *_overrideColor;
    double _multicolorAlpha;
    UIColor *_foregroundColor;
}

@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) double multicolorAlpha; // @synthesize multicolorAlpha=_multicolorAlpha;
@property(retain, nonatomic) UIColor *overrideColor; // @synthesize overrideColor=_overrideColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) CLKImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
- (void).cxx_destruct;
@property(nonatomic) _Bool legibilityEnabled; // @dynamic legibilityEnabled;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) double shadowBlur; // @synthesize shadowBlur=_shadowBlur;
@property(nonatomic) _Bool usesLegibility; // @dynamic usesLegibility;
@property(readonly, nonatomic) UIColor *contentColor;
- (_Bool)hasMonochromeImage;
- (void)_loadImageViewsIfNecessary;
- (_Bool)_hasShadowViews;
- (_Bool)_hasMultipartImages;
- (void)_updateShadow;
- (void)_updateAlpha;
- (void)_updateImages;
- (void)_updateShadowViewImages;
- (void)_updateColors;
- (void)_updateImageSubviewsMaxSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_enumerateImageViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateMultipartImageViewsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

