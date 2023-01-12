//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDesaturateShadows : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputIntensity;
    NSNumber *inputThreshold;
    NSNumber *inputSoftness;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputSoftness; // @synthesize inputSoftness;
@property(retain, nonatomic) NSNumber *inputThreshold; // @synthesize inputThreshold;
@property(retain, nonatomic) NSNumber *inputIntensity; // @synthesize inputIntensity;
- (id)outputImage;

@end

