//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBlurmapRefinementLinearMapping
{
    CIImage *inputImage;
    CIImage *inputSecondaryImage;
    NSNumber *inputScalingFactor;
}

@property(retain) NSNumber *inputScalingFactor; // @synthesize inputScalingFactor;
@property(retain) CIImage *inputSecondaryImage; // @synthesize inputSecondaryImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)kernel;
- (id)kernelNoSecondaryImage;

@end
