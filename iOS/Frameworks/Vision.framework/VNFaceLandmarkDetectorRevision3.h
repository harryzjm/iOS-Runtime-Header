//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNFaceLandmarkDetectorRevision3
{
}

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
+ (unsigned char)landmarkDetectorDNNVersion;
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;
- (struct CGRect)normalizedFaceBBoxForLandmarks:(id)arg1;

@end

