//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSValue;

__attribute__((visibility("hidden")))
@interface CIAffineTile
{
    CIImage *inputImage;
    NSValue *inputTransform;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSValue *inputTransform; // @synthesize inputTransform;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel;

@end

