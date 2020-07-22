//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PXUIBadgeHelper : NSObject
{
}

+ (void)getAnimationImages:(id *)arg1 animationDuration:(double *)arg2 forBadge:(unsigned long long)arg3;
+ (void)getText:(id *)arg1 textOffset:(struct CGPoint *)arg2 forBadgeInfo:(struct PXAssetBadgeInfo)arg3 style:(long long)arg4;
+ (void)getImage:(id *)arg1 imageOffset:(struct CGPoint *)arg2 forBadgeInfo:(struct PXAssetBadgeInfo)arg3 style:(long long)arg4;
+ (id)debugBackgroundImageWithBadges:(unsigned long long)arg1;
+ (id)cloudBadgeImage;
+ (id)panoramaBadgeImage;
+ (id)favoritesCollectionBadgeImage;
+ (id)favoriteBadgeImage;
+ (id)loopingBadgeTemplateImage;
+ (id)loopingBadgeImage;
+ (id)gradientImage;
+ (id)livePhotoBadgeShadowedImage;
+ (id)livePhotoOffBadgeTemplateImage;
+ (id)livePhotoBadgeTemplateImage;
+ (id)depthEffectBadgeImage;
+ (id)burstBadgeImage;
+ (id)stackBadgeImage;
+ (id)_flyingBadgeForBadges:(unsigned long long)arg1;
+ (id)_flyingBadgesForBadgeInfo:(struct PXAssetBadgeInfo)arg1;
+ (id)themeForType:(long long)arg1;
+ (long long)badgeTypeForBadgeInfo:(struct PXAssetBadgeInfo)arg1 style:(long long)arg2;
+ (id)badgeViewForType:(long long)arg1 withBadgeInfo:(struct PXAssetBadgeInfo)arg2;

@end
