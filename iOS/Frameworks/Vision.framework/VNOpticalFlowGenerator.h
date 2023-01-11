//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNOpticalFlowGenerator
{
}

+ (id)configurationOptionKeysForDetectorKey;
- (id)_initializedLKTMetalContextAndReturnError:(id *)arg1;
- (id)_createOpticalFlowForPixelBuffer:(struct CVPixelBufferWrapper)arg1 opticalFlowOptions:(const struct OpticalFlowOptions *)arg2 error:(id *)arg3;
- (id)_calculateLKTVectorResult:(struct CVPixelBufferWrapper)arg1 fromPixelBuffer:(struct CVPixelBufferWrapper)arg2 toPixelBuffer:(struct CVPixelBufferWrapper)arg3 opticalFlowOptions:(const struct OpticalFlowOptions *)arg4 error:(id *)arg5;
- (struct CVPixelBufferWrapper)_createVectorResultPixelBufferWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3 error:(id *)arg4;
- (optional_059d4cec)_validatedOpticalFlowOptions:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 error:(id *)arg4;
- (id)_validatedImageBuffersFromOptions:(id)arg1 error:(id *)arg2;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;

@end
