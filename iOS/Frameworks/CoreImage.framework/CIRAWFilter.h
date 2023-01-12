//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIFilter, CIImage, CIRAWFilterImpl, NSArray, NSData, NSDictionary, NSString, NSURL;

@interface CIRAWFilter
{
    _Bool _lensCorrectionEnabled;
    float _scaleFactor;
    CIRAWFilterImpl *filterImplementation;
    NSURL *imageURL;
    NSData *imageData;
    NSString *imageDataHint;
}

+ (id)filterWithCVPixelBuffer:(struct __CVBuffer *)arg1 properties:(id)arg2;
+ (id)filterWithImageData:(id)arg1 identifierHint:(id)arg2;
+ (id)filterWithImageURL:(id)arg1;
+ (id)supportedCameraModels;
@property(getter=isLensCorrectionEnabled) _Bool lensCorrectionEnabled; // @synthesize lensCorrectionEnabled=_lensCorrectionEnabled;
@property float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(readonly) NSString *imageDataHint; // @synthesize imageDataHint;
@property(readonly) NSData *imageData; // @synthesize imageData;
@property(readonly) NSURL *imageURL; // @synthesize imageURL;
@property(retain) CIRAWFilterImpl *filterImplementation; // @synthesize filterImplementation;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 properties:(id)arg2;
- (id)initWithImageData:(id)arg1 identifierHint:(id)arg2;
- (id)initWithImageURL:(id)arg1;
@property(readonly) CIImage *semanticSegmentationTeethMatte;
@property(readonly) CIImage *semanticSegmentationSkyMatte;
@property(readonly) CIImage *semanticSegmentationGlassesMatte;
@property(readonly) CIImage *semanticSegmentationHairMatte;
@property(readonly) CIImage *semanticSegmentationSkinMatte;
@property(readonly) CIImage *portraitEffectsMatte;
- (id)auxImageWithKey:(id)arg1;
@property(readonly) CIImage *previewImage;
@property(retain) CIFilter *linearSpaceFilter;
@property float neutralTint;
@property float neutralTemperature;
@property struct CGPoint neutralLocation;
@property struct CGPoint neutralChromaticity;
@property float extendedDynamicRangeAmount;
@property float localToneMapAmount;
@property(readonly, getter=isLocalToneMapSupported) _Bool localToneMapSupported;
@property float moireReductionAmount;
@property(readonly, getter=isMoireReductionSupported) _Bool moireReductionSupported;
@property float detailAmount;
@property(readonly, getter=isDetailSupported) _Bool detailSupported;
@property float contrastAmount;
@property(readonly, getter=isContrastSupported) _Bool contrastSupported;
@property float sharpnessAmount;
@property(readonly, getter=isSharpnessSupported) _Bool sharpnessSupported;
@property float colorNoiseReductionAmount;
@property(readonly, getter=isColorNoiseReductionSupported) _Bool colorNoiseReductionSupported;
@property float luminanceNoiseReductionAmount;
@property(readonly, getter=isLuminanceNoiseReductionSupported) _Bool luminanceNoiseReductionSupported;
- (void)setIsEnableLensCorrection:(_Bool)arg1;
- (_Bool)lensCorrectionEnabled;
@property(readonly, getter=isLensCorrectionSupported) _Bool lensCorrectionSupported;
@property(getter=isGamutMappingEnabled) _Bool gamutMappingEnabled;
@property float boostShadowAmount;
@property float boostAmount;
@property float baselineExposure;
@property float shadowBias;
@property float exposure;
@property(retain) NSString *decoderVersion;
@property(readonly) NSArray *supportedDecoderVersions;
@property(getter=isDraftModeEnabled) _Bool draftModeEnabled;
@property unsigned int orientation;
@property(readonly) NSDictionary *properties;
- (id)outputImage;
@property(readonly) struct CGSize nativeSize;

@end
