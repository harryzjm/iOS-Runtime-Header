//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIColorMap : CIFilter
{
    CIImage *inputImage;
    CIImage *inputGradientImage;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIImage *inputGradientImage; // @synthesize inputGradientImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel;

@end

