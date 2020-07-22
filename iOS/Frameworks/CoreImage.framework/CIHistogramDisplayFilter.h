//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIHistogramDisplayFilter
{
    CIImage *inputImage;
    NSNumber *inputHeight;
    NSNumber *inputHighLimit;
    NSNumber *inputLowLimit;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputLowLimit; // @synthesize inputLowLimit;
@property(retain, nonatomic) NSNumber *inputHighLimit; // @synthesize inputHighLimit;
@property(retain, nonatomic) NSNumber *inputHeight; // @synthesize inputHeight;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel;

@end

