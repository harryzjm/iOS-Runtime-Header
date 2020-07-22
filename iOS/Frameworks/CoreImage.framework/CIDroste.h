//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDroste
{
    CIImage *inputImage;
    CIVector *inputInsetPoint0;
    CIVector *inputInsetPoint1;
    NSNumber *inputStrands;
    NSNumber *inputPeriodicity;
    NSNumber *inputRotation;
    NSNumber *inputZoom;
}

+ (id)customAttributes;
- (id)outputImage;
- (id)_CIDroste;

@end
