//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPRequest;

__attribute__((visibility("hidden")))
@interface VNHumanPoseDetector
{
    VCPRequest *_humanPoseDetector;
}

+ (Class)recognizedPointsObservationClass;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;
- (id)vcpPoseRequestRuntimeOptionsForDetectorOptions:(id)arg1 error:(id *)arg2;
- (id)vcpPoseRequestSetupOptionsForDetectorOptions:(id)arg1 error:(id *)arg2;
- (_Bool)needsMetalContext;

@end

