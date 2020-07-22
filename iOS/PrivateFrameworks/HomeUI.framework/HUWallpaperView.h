//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class HFWallpaperSlice;

@interface HUWallpaperView : UIView
{
    HFWallpaperSlice *_wallpaperSlice;
    UIView *_wallpaperContentView;
}

@property(retain, nonatomic) UIView *wallpaperContentView; // @synthesize wallpaperContentView=_wallpaperContentView;
@property(retain, nonatomic) HFWallpaperSlice *wallpaperSlice; // @synthesize wallpaperSlice=_wallpaperSlice;
- (void).cxx_destruct;
- (struct CGRect)normalizedWallpaperRectForFrameInWindowSpace:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

