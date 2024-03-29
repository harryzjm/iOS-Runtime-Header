//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPhotoGrain : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputISO;
    NSNumber *inputAmount;
    NSNumber *inputSeed;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSNumber *inputSeed; // @synthesize inputSeed;
@property(copy, nonatomic) NSNumber *inputAmount; // @synthesize inputAmount;
@property(copy, nonatomic) NSNumber *inputISO; // @synthesize inputISO;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_paddedTileKernel;
- (id)_grainBlendAndMixKernel;
- (id)_interpolateGrainKernel;

@end

