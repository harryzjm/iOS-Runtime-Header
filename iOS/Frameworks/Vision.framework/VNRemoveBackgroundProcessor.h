//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPSImageSpatioTemporalGuidedFilter, NSObject;
@protocol MTLComputePipelineState, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface VNRemoveBackgroundProcessor
{
    unsigned long long _networkWidth;
    unsigned long long _networkHeight;
    CDStruct_0a65202a _outputMaskEspressoBuffer;
    CDStruct_0a65202a _outputConfidenceEspressoBuffer;
    MPSImageSpatioTemporalGuidedFilter *_guidedFilter;
    id <MTLComputePipelineState> _assembleConstraintsState;
    id <MTLComputePipelineState> _applyMaskComputeState;
    id <MTLComputePipelineState> _copyCropComputeState;
    NSObject<OS_dispatch_semaphore> *_removeBackgroundSemaphore;
}

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;
- (void)dealloc;

@end

