//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPhotoEffect3D : CIFilter
{
    CIImage *inputImage;
    CIImage *inputDepthMap;
    NSNumber *inputThreshold;
    NSNumber *inputGrainAmount;
    NSNumber *inputScale;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) NSNumber *inputGrainAmount; // @synthesize inputGrainAmount;
@property(retain, nonatomic) NSNumber *inputThreshold; // @synthesize inputThreshold;
@property(retain, nonatomic) CIImage *inputDepthMap; // @synthesize inputDepthMap;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (int)_maxVersionBG;
- (int)_maxVersion;
- (id)outputImage;
- (id)applyCubeWithName:(id)arg1 toImage:(id)arg2;
- (id)cubeColorSpaceName;
- (id)backgroundCubePath;
- (id)cubePath;
- (id)backgroundCubeName;
- (id)cubeName;
- (id)_CIPhotoEffectDepthBlend;
- (int)_defaultVersion;
- (void)setDefaults;
- (id)init;

@end

