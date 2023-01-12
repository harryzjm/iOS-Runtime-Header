//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface CIColorCube : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputCubeDimension;
    NSData *inputCubeData;
    NSNumber *inputExtrapolate;
    CIImage *_cubeImage;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSNumber *inputExtrapolate; // @synthesize inputExtrapolate;
@property(copy, nonatomic) NSData *inputCubeData; // @synthesize inputCubeData;
@property(retain, nonatomic) NSNumber *inputCubeDimension; // @synthesize inputCubeDimension;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (_Bool)_checkInputs;
- (id)cubeImage;
- (id)_kernelOpaqueExtend;
- (id)_kernelOpaque;
- (id)_kernel;
- (void)dealloc;

@end

