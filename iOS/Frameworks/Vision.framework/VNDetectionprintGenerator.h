//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNDetectionprintGenerator
{
}

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
- (id)supportedImageSizeSetForProcessingOptions:(id)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (id)_analyzePixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 error:(id *)arg3;
- (id)_detectionprintTensorForOutputBuffer:(const CDStruct_cf098810 *)arg1 requestRevision:(unsigned long long)arg2 error:(id *)arg3;

@end
