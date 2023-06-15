//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNMRCDetector
{
    unsigned long long _networkWidth;
    unsigned long long _networkHeight;
    struct __MRCContext *_mrcContext;
}

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;
- (void)dealloc;
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;

@end

