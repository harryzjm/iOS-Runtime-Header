//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CISingleChannelColorMap
{
    CIImage *inputImage;
    NSNumber *inputChannelIndex;
    NSNumber *inputShouldNormalize;
    NSNumber *inputColorMapIndex;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property(retain, nonatomic) NSNumber *inputColorMapIndex; // @synthesize inputColorMapIndex;
@property(retain, nonatomic) NSNumber *inputShouldNormalize; // @synthesize inputShouldNormalize;
@property(retain, nonatomic) NSNumber *inputChannelIndex; // @synthesize inputChannelIndex;
- (id)outputImage;

@end
