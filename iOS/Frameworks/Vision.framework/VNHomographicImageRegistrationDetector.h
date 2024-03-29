//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNHomographicImageRegistrationDetector
{
}

+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id *)arg2;
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;
- (_Bool)_calculateHomographicWarpTransform:(CDStruct_8e0628e6 *)arg1 ofFloatingImagePixelBuffer:(struct __CVBuffer *)arg2 ontoReferenceImagePixelBuffer:(struct __CVBuffer *)arg3 usingImageRegistrationContext:(struct ImageRegistrationCtx_s *)arg4 seededWithPreviousWarpTransform:(const CDStruct_8e0628e6 *)arg5 error:(id *)arg6;
- (struct __CVBuffer *)_createHomographicPixelBufferFromImageBuffer:(id)arg1 cropRect:(struct CGRect)arg2 options:(id)arg3 error:(id *)arg4;
- (_Bool)_createN:(unsigned long long)arg1 CVPixelBuffers:(struct __CVBuffer **)arg2 withPixelFormat:(unsigned int)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 error:(id *)arg6;
- (id)_validatedImageBufferForKey:(id)arg1 inOptions:(id)arg2 error:(id *)arg3;

@end

