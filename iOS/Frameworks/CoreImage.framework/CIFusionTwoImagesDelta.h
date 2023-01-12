//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIFusionTwoImagesDelta : CIFilter
{
    CIImage *inputImage;
    CIImage *inputSecondaryImage;
    NSNumber *inputProtectStrength;
    NSNumber *inputApertureScaling;
    CIVector *inputAdditive;
    CIVector *inputSubtractive;
    NSNumber *inputMaxBlur;
}

@property(retain) NSNumber *inputMaxBlur; // @synthesize inputMaxBlur;
@property(retain) CIVector *inputSubtractive; // @synthesize inputSubtractive;
@property(retain) CIVector *inputAdditive; // @synthesize inputAdditive;
@property(retain) NSNumber *inputApertureScaling; // @synthesize inputApertureScaling;
@property(retain) NSNumber *inputProtectStrength; // @synthesize inputProtectStrength;
@property(retain) CIImage *inputSecondaryImage; // @synthesize inputSecondaryImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)kernel;

@end

