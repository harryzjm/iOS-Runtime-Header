//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIImage.h>

@interface UIImage (AVAdditions)
+ (id)_avkit_textImageCache;
+ (id)_avkit_imageLoadingQueue;
+ (id)_avkit_imageWithSize:(struct CGSize)arg1 ofText:(id)arg2 font:(id)arg3 scaleFactor:(double)arg4;
+ (void)avkit_imageWithSize:(struct CGSize)arg1 ofText:(id)arg2 font:(id)arg3 scaleFactor:(double)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)avkit_imageWithSymbolNamed:(id)arg1 textStyle:(id)arg2 scale:(long long)arg3;
+ (void)avkit_imageWithSymbolNamed:(id)arg1 font:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)avkit_imageNamed:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)avkit_flatWhiteResizableTemplateImage;
+ (id)avkit_loadedImageConfigurations;
@end

