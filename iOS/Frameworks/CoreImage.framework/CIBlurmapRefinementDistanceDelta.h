//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBlurmapRefinementDistanceDelta
{
    CIImage *inputImage;
    CIImage *inputSecondaryImage;
    NSNumber *inputThreshold;
    NSNumber *inputDistance;
    NSNumber *inputScalingFactor;
}

@property(retain) NSNumber *inputScalingFactor; // @synthesize inputScalingFactor;
@property(retain) NSNumber *inputDistance; // @synthesize inputDistance;
@property(retain) NSNumber *inputThreshold; // @synthesize inputThreshold;
@property(retain) CIImage *inputSecondaryImage; // @synthesize inputSecondaryImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;

@end
