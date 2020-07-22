//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIConfidenceThreshold
{
    CIImage *inputImage;
    CIVector *inputFocusRect;
    NSNumber *inputScale;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(copy, nonatomic) CIVector *inputFocusRect; // @synthesize inputFocusRect;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)transitionDepthsKernel;
- (id)thresholdKernel;

@end

