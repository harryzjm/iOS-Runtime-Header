//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CINinePartTiled : CIFilter
{
    CIImage *inputImage;
    CIVector *inputBreakpoint0;
    CIVector *inputBreakpoint1;
    CIVector *inputGrowAmount;
    NSNumber *inputFlipYTiles;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputFlipYTiles; // @synthesize inputFlipYTiles;
@property(retain, nonatomic) CIVector *inputGrowAmount; // @synthesize inputGrowAmount;
@property(retain, nonatomic) CIVector *inputBreakpoint1; // @synthesize inputBreakpoint1;
@property(retain, nonatomic) CIVector *inputBreakpoint0; // @synthesize inputBreakpoint0;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernelAlt;

@end

