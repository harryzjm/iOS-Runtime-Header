//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CIColorMatrix : CIFilter
{
    CIImage *inputImage;
    CIVector *inputRVector;
    CIVector *inputGVector;
    CIVector *inputBVector;
    CIVector *inputAVector;
    CIVector *inputBiasVector;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIVector *inputBiasVector; // @synthesize inputBiasVector;
@property(retain, nonatomic) CIVector *inputAVector; // @synthesize inputAVector;
@property(retain, nonatomic) CIVector *inputBVector; // @synthesize inputBVector;
@property(retain, nonatomic) CIVector *inputGVector; // @synthesize inputGVector;
@property(retain, nonatomic) CIVector *inputRVector; // @synthesize inputRVector;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;

@end

