//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface RedEyeRecolor
{
    CIImage *inputImage;
    CIImage *inputSource;
    CIImage *inputMask;
    NSNumber *inputNoiseAmount;
    NSNumber *inputBrightness;
    NSNumber *inputRecovery;
    CIVector *inputExtent;
    NSNumber *inputWhiteCutoff;
    NSNumber *inputChroma;
}

@property(retain, nonatomic) NSNumber *inputChroma; // @synthesize inputChroma;
@property(retain, nonatomic) NSNumber *inputWhiteCutoff; // @synthesize inputWhiteCutoff;
@property(retain, nonatomic) CIVector *inputExtent; // @synthesize inputExtent;
@property(retain, nonatomic) NSNumber *inputRecovery; // @synthesize inputRecovery;
@property(retain, nonatomic) NSNumber *inputBrightness; // @synthesize inputBrightness;
@property(retain, nonatomic) NSNumber *inputNoiseAmount; // @synthesize inputNoiseAmount;
@property(retain, nonatomic) CIImage *inputMask; // @synthesize inputMask;
@property(retain, nonatomic) CIImage *inputSource; // @synthesize inputSource;
- (id)outputImage;
- (id)kernelRecovery;
- (id)kernelRepair;

@end

