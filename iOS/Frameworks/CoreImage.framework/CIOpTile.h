//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIOpTile : CIFilter
{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputScale;
    NSNumber *inputAngle;
    NSNumber *inputWidth;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_CIOpTile;

@end

