//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIASGPercent : CIFilter
{
    CIImage *inputImage;
}

+ (id)customAttributes;
- (id)outputImage;
- (id)outputImageScale:(double)arg1 outset:(int)arg2 hKernel:(id)arg3 vKernel:(id)arg4;

@end

