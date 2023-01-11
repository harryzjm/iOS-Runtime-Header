//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class HFWallpaperSlice, HUGridCellBackgroundDisplayOptions, UIVisualEffectView;

@interface HUGridCellBackgroundView : UIView
{
    _Bool _pressed;
    unsigned long long _backgroundState;
    HUGridCellBackgroundDisplayOptions *_displayOptions;
    HFWallpaperSlice *_blurredWallpaperSlice;
    double _cornerRadius;
    UIVisualEffectView *_effectView;
    UIView *_ccMaterialView;
    struct CGRect _normalizedWallpaperRect;
}

@property(retain, nonatomic) UIView *ccMaterialView; // @synthesize ccMaterialView=_ccMaterialView;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) HFWallpaperSlice *blurredWallpaperSlice; // @synthesize blurredWallpaperSlice=_blurredWallpaperSlice;
@property(nonatomic) struct CGRect normalizedWallpaperRect; // @synthesize normalizedWallpaperRect=_normalizedWallpaperRect;
@property(retain, nonatomic) HUGridCellBackgroundDisplayOptions *displayOptions; // @synthesize displayOptions=_displayOptions;
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic) unsigned long long backgroundState; // @synthesize backgroundState=_backgroundState;
- (void).cxx_destruct;
- (id)_normalBackgroundColor;
- (id)_highlightedBackgroundColor;
- (_Bool)_shouldUsePrecomputedWallpaperContents;
- (_Bool)_shouldUseVisualEffectStyle;
- (_Bool)_isUsingControlCenterDisplayStyle;
- (_Bool)_shouldUseCCMaterialView;
- (void)_updateBackgroundColor;
- (void)_updateWallpaperContentsScale;
- (void)_updateWallpaperContentsRect;
- (void)_updateCornerRadius;
- (void)_updateDisplay;
- (void)didMoveToSuperview;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_createCCMaterialViewIfNecessary;
- (void)_createEffectViewIfNecessary;

@end

