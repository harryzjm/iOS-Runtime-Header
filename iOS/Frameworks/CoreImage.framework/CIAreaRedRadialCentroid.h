//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIAreaRedRadialCentroid
{
    CIImage *inputCenter;
    NSNumber *inputRadius;
    NSNumber *inputRadialMode;
    NSNumber *inputMinWeight;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputMinWeight; // @synthesize inputMinWeight;
@property(retain, nonatomic) NSNumber *inputRadialMode; // @synthesize inputRadialMode;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIImage *inputCenter; // @synthesize inputCenter;
- (id)outputImage;
- (id)_kernelCenter;
- (id)_kernelDisk;
- (id)_kernelGaussian;

@end

