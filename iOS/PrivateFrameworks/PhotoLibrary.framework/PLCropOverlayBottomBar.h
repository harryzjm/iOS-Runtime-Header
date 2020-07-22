//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PLCropOverlayPreviewBottomBar, PLCropOverlayWallpaperBottomBar;

@interface PLCropOverlayBottomBar : UIView
{
    _Bool _playingVideo;
    _Bool _inPopover;
    long long _style;
    UIView *_cameraBottomBar;
    PLCropOverlayPreviewBottomBar *_previewBottomBar;
    PLCropOverlayWallpaperBottomBar *_wallpaperBottomBar;
}

@property(nonatomic, getter=isInPopover) _Bool inPopover; // @synthesize inPopover=_inPopover;
@property(nonatomic, getter=isPlayingVideo) _Bool playingVideo; // @synthesize playingVideo=_playingVideo;
@property(retain, nonatomic) PLCropOverlayWallpaperBottomBar *wallpaperBottomBar; // @synthesize wallpaperBottomBar=_wallpaperBottomBar;
@property(retain, nonatomic) PLCropOverlayPreviewBottomBar *previewBottomBar; // @synthesize previewBottomBar=_previewBottomBar;
@property(retain, nonatomic) UIView *cameraBottomBar; // @synthesize cameraBottomBar=_cameraBottomBar;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)_updateStyle;
- (_Bool)_isEditingStyle:(long long)arg1;
- (void)_updatePreviewBottomBarForPlaybackState;
- (void)_updateBottomBars;
- (void)togglePlaybackState;
- (void)setStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonPLCropOverlayBottomBarInitialization;

@end

