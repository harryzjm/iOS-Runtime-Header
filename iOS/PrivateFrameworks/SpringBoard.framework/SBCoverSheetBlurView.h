//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SpringBoard/SBWallpaperObserver-Protocol.h>

@class NSString;

@interface SBCoverSheetBlurView : UIView <SBWallpaperObserver>
{
    double _blurRadius;
    double _weighting;
    CDUnknownBlockType _scaleAdjustment;
    CDUnknownBlockType _alphaAdjustment;
    UIView *_reduceTransparencyView;
    long long _variantToTrack;
}

+ (Class)layerClass;
@property(nonatomic) long long variantToTrack; // @synthesize variantToTrack=_variantToTrack;
@property(retain, nonatomic) UIView *reduceTransparencyView; // @synthesize reduceTransparencyView=_reduceTransparencyView;
@property(copy, nonatomic) CDUnknownBlockType alphaAdjustment; // @synthesize alphaAdjustment=_alphaAdjustment;
@property(copy, nonatomic) CDUnknownBlockType scaleAdjustment; // @synthesize scaleAdjustment=_scaleAdjustment;
@property(nonatomic) double weighting; // @synthesize weighting=_weighting;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
- (void).cxx_destruct;
- (id)_averageWallpaperColor;
- (void)_removeReduceTransparencyView;
- (void)_createReduceTransparencyView;
- (void)_reduceTransparencyEnabledStateDidChange:(id)arg1;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)_removeFilters;
- (void)_createFilters;
- (void)_configureForCurrentReduceTransparencySetting;
- (void)_updateForBlurRadius:(double)arg1 weighting:(double)arg2 forPresentationValue:(_Bool)arg3;
- (id)backdropLayer;
- (void)setWeighting:(double)arg1 forPresentationValue:(_Bool)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 scaleAdjustment:(CDUnknownBlockType)arg2 alphaAdjustment:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
