//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@class UIColor;
@protocol SBFProceduralWallpaper;

@protocol SBFProceduralWallpaperDelegate <NSObject>
- (void)wallpaper:(id <SBFProceduralWallpaper>)arg1 didComputeAverageColor:(UIColor *)arg2 forRect:(struct CGRect)arg3;
- (void)wallpaper:(id <SBFProceduralWallpaper>)arg1 didGenerateBlur:(void *)arg2 forRect:(struct CGRect)arg3;
@end

