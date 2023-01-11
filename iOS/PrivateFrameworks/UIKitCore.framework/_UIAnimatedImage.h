//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIAnimatedImage
{
    NSArray *_images;
    double _duration;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (struct CGSize)_sizeWithHairlineThickening:(_Bool)arg1 renderingEffects:(unsigned long long)arg2 forTraitCollection:(id)arg3;
- (id)_imageWithStylePresets:(id)arg1 tintColor:(id)arg2 traitCollection:(id)arg3;
- (id)_imageScaledToProportion:(double)arg1 interpolationQuality:(int)arg2;
- (id)_doubleBezeledImageWithExteriorShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 interiorShadowRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 fillRed:(double)arg9 green:(double)arg10 blue:(double)arg11 alpha:(double)arg12;
- (id)_bezeledImageWithShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 fillRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 drawShadow:(_Bool)arg9;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)_setAlignmentRectInsets:(struct UIEdgeInsets)arg1;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets)arg1 resizingMode:(long long)arg2;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets)arg1;
- (void)_setAlwaysStretches:(_Bool)arg1;
- (_Bool)_isTiledWhenStretchedToSize:(struct CGSize)arg1;
- (_Bool)_isResizable;
- (struct CGRect)_contentRectInPixels;
- (struct CGRect)_contentStretchInPixels;
- (long long)resizingMode;
- (struct UIEdgeInsets)capInsets;
- (void)_flipImageOrientationHorizontally;
- (double)duration;
- (id)images;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_isSVGVector;
- (_Bool)_isPDFVector;
- (id)initWithImages:(id)arg1 duration:(double)arg2;
- (id)_initWithOtherImage:(id)arg1;

@end
