//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class BPSRemoteImageView, NSString, UIImageView;

@interface BPSWatchView : UIView
{
    _Bool _wantsLightenBlendedScreen;
    NSString *_screenImageSearchBundleIdentifier;
    NSString *_screenImageName;
    unsigned long long _style;
    unsigned long long _sizeOverride;
    BPSRemoteImageView *_watchImageView;
    NSString *_styleVersionSuffix;
    UIImageView *_watchScreenImageView;
}

@property(nonatomic) _Bool wantsLightenBlendedScreen; // @synthesize wantsLightenBlendedScreen=_wantsLightenBlendedScreen;
@property(readonly, nonatomic) UIImageView *watchScreenImageView; // @synthesize watchScreenImageView=_watchScreenImageView;
@property(copy, nonatomic) NSString *styleVersionSuffix; // @synthesize styleVersionSuffix=_styleVersionSuffix;
@property(retain, nonatomic) BPSRemoteImageView *watchImageView; // @synthesize watchImageView=_watchImageView;
@property(nonatomic) unsigned long long sizeOverride; // @synthesize sizeOverride=_sizeOverride;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *screenImageName; // @synthesize screenImageName=_screenImageName;
@property(retain, nonatomic) NSString *screenImageSearchBundleIdentifier; // @synthesize screenImageSearchBundleIdentifier=_screenImageSearchBundleIdentifier;
- (void).cxx_destruct;
- (id)image;
- (struct CGSize)screenImageSize;
- (unsigned long long)deviceSize;
- (void)overrideMaterial:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (void)_cleanedImageName:(id *)arg1 withFallbackImage:(id *)arg2;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)applyScreenStyle;
- (id)screenBackground:(struct CGSize)arg1;
- (id)watchAssetBundle;
- (id)initWithStyle:(unsigned long long)arg1 versionModifier:(id)arg2 allowsMaterialFallback:(_Bool)arg3;
- (id)initWithStyle:(unsigned long long)arg1 allowsMaterialFallback:(_Bool)arg2;
- (id)initWithStyle:(unsigned long long)arg1 andVersionModifier:(id)arg2;
- (id)initWithStyle:(unsigned long long)arg1;

@end

