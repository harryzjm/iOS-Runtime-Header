//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIImage.h>

@interface UIImage (WKAdditions)
+ (id)wk_dynamicImageWithTraitCollectionToImageMap:(id)arg1 baseImage:(id)arg2;
+ (id)wk_splitThumbnailWithLightAppearanceImage:(id)arg1 darkAppearanceImage:(id)arg2;
+ (id)wk_overlayForegroundImage:(id)arg1 overBackgroundImage:(id)arg2;
+ (id)wk_imageWithLightAppearanceImage:(id)arg1 darkAppearanceImage:(id)arg2;
+ (id)wk_internalSystemName:(id)arg1;
+ (id)wk_imageFromColor:(id)arg1;
+ (id)wk_imageWithContentsOfURL:(id)arg1;
- (id)wk_cropImageToRect:(struct CGRect)arg1;
@end

