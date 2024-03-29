//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPseudoMedian : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputWeights;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputWeights; // @synthesize inputWeights;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;

@end

