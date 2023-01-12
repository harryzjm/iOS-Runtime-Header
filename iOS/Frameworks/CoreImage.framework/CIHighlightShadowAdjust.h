//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIHighlightShadowAdjust : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputShadowAmount;
    NSNumber *inputHighlightAmount;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputHighlightAmount; // @synthesize inputHighlightAmount;
@property(retain, nonatomic) NSNumber *inputShadowAmount; // @synthesize inputShadowAmount;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)_initFromProperties:(id)arg1;
- (id)_outputProperties;
- (id)outputImage;
- (id)_kernelSnoB_v0;
- (id)_kernelSHnoB_v0;
- (id)_kernelSH_v0;
- (id)_kernelSHnoB_v1;
- (id)_kernelSH_v1;
- (id)_kernelSHnoB_v2;
- (id)_kernelSH_v2;
- (_Bool)_isIdentity;
- (void)setDefaults;
- (int)_defaultVersion;
- (int)_maxVersion;

@end

