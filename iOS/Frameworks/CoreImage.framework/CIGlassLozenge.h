//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIGlassLozenge
{
    CIImage *inputImage;
    CIVector *inputPoint0;
    CIVector *inputPoint1;
    NSNumber *inputRadius;
    NSNumber *inputRefraction;
}

+ (id)customAttributes;
- (id)outputImage;
- (id)_CILozengeRefraction;

@end

