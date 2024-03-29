//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface CILocalLightMapPrepare : CIFilter
{
    NSData *inputLightMap;
    NSNumber *inputLightMapWidth;
    NSNumber *inputLightMapHeight;
    CIImage *inputGuideImage;
}

+ (id)customAttributes;
- (id)outputImage;

@end

