//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, VCPCNNMetalContext;

@interface VCPCNNData : NSObject
{
    _Bool _isInputOutput;
    NSMutableArray *_size;
    float *_data;
    VCPCNNMetalContext *_context;
}

+ (id)cnnDataWithPlane:(int)arg1 height:(int)arg2 width:(int)arg3 context:(id)arg4;
+ (id)cnnDataWithGPUContext:(id)arg1;
+ (id)cnnData;
+ (Class)cnnDataClass;
- (void).cxx_destruct;
@property __weak VCPCNNMetalContext *context; // @synthesize context=_context;
@property _Bool isInputOutput; // @synthesize isInputOutput=_isInputOutput;
@property float *data; // @synthesize data=_data;
@property(retain) NSMutableArray *size; // @synthesize size=_size;
- (int)softmax;
- (int)normalization;
- (int)readFromDisk:(struct __sFILE *)arg1 quantFactor:(short)arg2;
- (int)copyImage:(struct __CVBuffer *)arg1 withChunk:(int)arg2;
- (int)reallocGPUTemporalBuffers;
- (int)convertGPUData2CPU;
- (int)convertCPUData2GPU;
- (int)bufferAllocCPU;
- (int)randInit;
- (int)allocBuffers:(_Bool)arg1;
- (void)dealloc;
- (id)initWithParameters:(int)arg1 height:(int)arg2 width:(int)arg3 context:(id)arg4;
- (id)initWithGPUContext:(id)arg1;
- (id)init;

@end
