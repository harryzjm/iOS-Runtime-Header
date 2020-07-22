//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFWallpaper, NSArray, UIImage;

@protocol HFProcessedWallpaperSource <NSObject>
@property(readonly, nonatomic) unsigned long long processVersionNumber;
@property(readonly, copy, nonatomic) NSArray *supportedVariants;
- (UIImage *)processedImageForVariant:(long long)arg1 wallpaper:(HFWallpaper *)arg2 image:(UIImage *)arg3;
@end

