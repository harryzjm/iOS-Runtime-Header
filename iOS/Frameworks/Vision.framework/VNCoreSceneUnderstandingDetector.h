//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNCoreSceneUnderstandingDetector
{
}

+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id *)arg2;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id *)arg2;
+ (id)computeStagesToBindForConfigurationOptions:(id)arg1;
+ (id)allCityNatureIdentifiersWithConfigurationOptions:(id)arg1 error:(id *)arg2;
+ (id)allSignificantEventIdentifiersWithConfigurationOptions:(id)arg1 error:(id *)arg2;
+ (id)allVN5kJNH3eYuyaLxNpZr5Z7ziIdentifiersWithConfigurationOptions:(id)arg1 error:(id *)arg2;
+ (id)allRecognizedObjectIdentifiersWithConfigurationOptions:(id)arg1 error:(id *)arg2;
+ (id)allClassificationIdentifiersWithConfigurationOptions:(id)arg1 error:(id *)arg2;
+ (_Bool)handlesRequestClass:(Class)arg1 revision:(unsigned long long)arg2;
+ (id)_newSaliencyHeatmapBoundingBoxGeneratorOptionsForOptions:(id)arg1;
+ (id)_specialCaseRecognizedObjectsDuplicationsForOriginatingRequestSpecifier:(id)arg1;
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;
- (_Bool)warmUpSession:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;
- (_Bool)needsMetalContext;

@end

