//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIBackdropViewSettings;

@interface _TVProductBannerBlurImageDecorator : NSObject
{
    _Bool _lightStyle;
    _UIBackdropViewSettings *_backdropSettings;
}

@property(retain, nonatomic) _UIBackdropViewSettings *backdropSettings; // @synthesize backdropSettings=_backdropSettings;
@property(nonatomic) _Bool lightStyle; // @synthesize lightStyle=_lightStyle;
- (void).cxx_destruct;
- (id)resizeImage:(struct CGImage *)arg1 targetSize:(struct CGSize)arg2 shouldDither:(_Bool)arg3;
- (id)blurImageWithImage:(id)arg1 targetSize:(struct CGSize)arg2 scaleSize:(struct CGSize)arg3;
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize)arg2 croppedToFit:(_Bool)arg3;

@end

