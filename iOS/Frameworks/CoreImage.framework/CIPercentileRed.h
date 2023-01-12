//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPercentileRed : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputPercentile;
    NSNumber *inputCount;
    NSNumber *inputScale;
    NSNumber *inputNormalize;
    NSNumber *inputClip;
    NSNumber *inputHard;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputHard; // @synthesize inputHard;
@property(retain, nonatomic) NSNumber *inputClip; // @synthesize inputClip;
@property(retain, nonatomic) NSNumber *inputNormalize; // @synthesize inputNormalize;
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) NSNumber *inputCount; // @synthesize inputCount;
@property(retain, nonatomic) NSNumber *inputPercentile; // @synthesize inputPercentile;
- (id)outputImage;

@end

