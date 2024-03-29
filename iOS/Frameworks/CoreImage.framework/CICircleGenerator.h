//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CICircleGenerator : CIFilter
{
    CIColor *inputColor;
    CIVector *inputCenter;
    NSNumber *inputRadius;
    NSNumber *inputEdgeBlur;
}

+ (id)customAttributes;
- (id)outputImage;
- (id)_CICircle;

@end

