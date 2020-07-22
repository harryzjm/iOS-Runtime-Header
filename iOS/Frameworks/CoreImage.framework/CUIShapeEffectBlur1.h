//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIColor, CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CUIShapeEffectBlur1
{
    CIImage *inputImage;
    CIImage *inputFill;
    CIVector *inputOffset;
    NSNumber *inputRadius;
    CIColor *inputGlowColorInner;
    CIColor *inputGlowColorOuter;
    CIColor *inputShadowColorInner;
    CIColor *inputShadowColorOuter;
    NSNumber *inputShadowBlurInner;
    NSNumber *inputShadowBlurOuter;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputShadowBlurOuter; // @synthesize inputShadowBlurOuter;
@property(retain, nonatomic) NSNumber *inputShadowBlurInner; // @synthesize inputShadowBlurInner;
@property(retain, nonatomic) CIColor *inputShadowColorOuter; // @synthesize inputShadowColorOuter;
@property(retain, nonatomic) CIColor *inputShadowColorInner; // @synthesize inputShadowColorInner;
@property(retain, nonatomic) CIColor *inputGlowColorOuter; // @synthesize inputGlowColorOuter;
@property(retain, nonatomic) CIColor *inputGlowColorInner; // @synthesize inputGlowColorInner;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIVector *inputOffset; // @synthesize inputOffset;
@property(retain, nonatomic) CIImage *inputFill; // @synthesize inputFill;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel;

@end

