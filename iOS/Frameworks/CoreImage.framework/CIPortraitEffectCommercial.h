//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPortraitEffectCommercial
{
    NSNumber *inputKickLight;
    NSNumber *inputFaceLight;
    NSNumber *inputDepthThreshold;
    CIImage *inputDepthMap;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputDepthThreshold; // @synthesize inputDepthThreshold;
@property(retain, nonatomic) CIImage *inputDepthMap; // @synthesize inputDepthMap;
@property(retain, nonatomic) NSNumber *inputFaceLight; // @synthesize inputFaceLight;
@property(retain, nonatomic) NSNumber *inputKickLight; // @synthesize inputKickLight;
- (id)outputImage;
- (id)_mixKernel;
- (id)_prepareDepth;
- (void)setDefaults;
- (id)backgroundPreviewCubeName;
- (id)previewCubeName;

@end

