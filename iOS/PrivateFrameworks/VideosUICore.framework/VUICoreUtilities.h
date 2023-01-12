//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VUICoreUtilities : NSObject
{
}

+ (void)vuiColor:(id)arg1 getRed:(double *)arg2 green:(double *)arg3 blue:(double *)arg4 alpha:(double *)arg5;
+ (id)randomColor;
+ (_Bool)runningAnInternalBuild;
+ (id)_URLForResource:(id)arg1 inBundle:(id)arg2;
+ (id)_imageForResource:(id)arg1;
+ (id)_getImageFromURLorBundle:(id)arg1;
+ (id)_vuiCoreResourceMap;
+ (struct CGRect)centerRect:(struct CGRect)arg1 inRect:(struct CGRect)arg2;
+ (double)scaleContentSizeValue:(double)arg1 forTraitCollection:(id)arg2 maximumContentSizeCategory:(unsigned long long)arg3;
+ (double)scaleContentSizeValue:(double)arg1 forTraitCollection:(id)arg2;
+ (id)uiContentSizeCategoryFor:(unsigned long long)arg1;
+ (unsigned long long)vuiContentSizeCategoryFor:(id)arg1;
+ (id)defaultPlaceholderImageForUserInterfaceStyle:(unsigned long long)arg1;
+ (unsigned long long)vuiUserInterfaceStyleForInterfaceStyle:(long long)arg1;
+ (id)TVUIKitBundle;
+ (id)VideosUIBundle;
+ (id)VideosUICoreBundle;
+ (id)imageForResource:(id)arg1 accessibilityDescription:(id)arg2;
+ (id)URLForResource:(id)arg1;
+ (const struct CGPath *)shadowPathWithCornerRadii:(struct _VUICornerRadii)arg1 andScaledSize:(struct CGSize)arg2;
+ (struct _VUICornerRadii)radiiFromRadius:(double)arg1;
+ (const struct CGPath *)createPathForRadii:(struct _VUICornerRadii)arg1 inRect:(struct CGRect)arg2 isContinuous:(_Bool)arg3;
+ (double)radiusFromCornerRadii:(struct _VUICornerRadii)arg1;
+ (_Bool)radiiIsZero:(struct _VUICornerRadii)arg1;
+ (double)focusedSizeIncreaseForSize:(struct CGSize)arg1 upscaleFactor:(double)arg2;
+ (void)image:(id)arg1 didCompleteLoadingForCache:(long long)arg2 requestRecord:(id)arg3;
+ (id)mobileGestaltStringForKey:(struct __CFString *)arg1;
+ (_Bool)canHandleDecodingOnRenderThread;

@end
