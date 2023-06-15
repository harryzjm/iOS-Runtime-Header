//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNGuidedUpsamplingGenerator
{
}

+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id *)arg2;
+ (id)computeStagesToBindForConfigurationOptions:(id)arg1;
- (struct __CVBuffer *)_renderCIImage:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(unsigned int)arg4 error:(id *)arg5;
- (_Bool)_renderCIImage:(id)arg1 toBuffer:(void *)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 rowBytes:(unsigned long long)arg5 format:(unsigned int)arg6 error:(id *)arg7;
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;

@end

