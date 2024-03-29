//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface MADHEICSAlphaSequenceWriter
{
    NSDictionary *_crop;
    struct CF<CMPhotoCompressionSession *> _compressionSession;
    long long _sequenceIndex;
    int _status;
    struct CF<__CVPixelBufferPool *> _imagePixelBufferPool;
    struct CF<__CVPixelBufferPool *> _alphaPixelBufferPool;
}

+ (id)transcodeSequenceData:(id)arg1 maxDimension:(unsigned long long)arg2 outputWidth:(unsigned long long *)arg3 outputHeight:(unsigned long long *)arg4;
+ (int)getOutputWidth:(unsigned long long *)arg1 outputHeight:(unsigned long long *)arg2 sequenceData:(id)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)finishWithEndTime:(CDStruct_1b6d18a9)arg1;
- (int)_finishWithEndTime:(CDStruct_1b6d18a9)arg1 outputData:(id *)arg2;
- (int)addPixelBuffer:(struct __CVBuffer *)arg1 withTime:(CDStruct_1b6d18a9)arg2;
- (int)_addPixelBufferBGRA:(struct __CVBuffer *)arg1 withTime:(CDStruct_1b6d18a9)arg2;
- (int)_addPixelBuffer420Alpha:(struct __CVBuffer *)arg1 withTime:(CDStruct_1b6d18a9)arg2;
- (int)_createCompressionSessionLazy;
- (int)demuxPixelBuffer:(struct __CVBuffer *)arg1 imagePixelBuffer:(struct __CVBuffer **)arg2 alphaPixelBuffer:(struct __CVBuffer **)arg3;
- (int)copyInputPlaneIndex:(unsigned long long)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 toOutputPlaneIndex:(unsigned long long)arg3 outputPixelBuffer:(struct __CVBuffer *)arg4 bytesPerPixel:(unsigned long long)arg5;
- (int)createPixelBufferPool:(struct __CVPixelBufferPool **)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 pixelFormat:(int)arg4;
- (id)initWithFrameCount:(unsigned long long)arg1 crop:(struct CGRect *)arg2;

@end

