//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPaperWash : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputSaturation;
    NSNumber *inputGreyscale;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSNumber *inputGreyscale; // @synthesize inputGreyscale;
@property(copy, nonatomic) NSNumber *inputSaturation; // @synthesize inputSaturation;
- (id)outputImage;

@end

