//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, NSURL, VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPMoFlowSingleEspresso
{
    VCPCNNModelEspresso *_modelEspresso;
    NSURL *_netFileUrl;
    NSArray *_inputNames;
    vector_aebc2d99 _inputsData;
    NSString *_resConfig;
    float *_flow;
    _Bool _forceCPU;
    _Bool _sharedModel;
    _Bool _flushModel;
    struct Scaler _scaler;
}

+ (id)sharedModel:(id)arg1 inputNames:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)updateModelForAspectRatio:(id)arg1 computationAccuracy:(unsigned int)arg2;
- (int)flowScalingTo:(struct __CVBuffer *)arg1 flowBufferY:(struct __CVBuffer *)arg2 scalerX:(float)arg3 scalerY:(float)arg4;
- (int)flowScalingTo:(struct __CVBuffer *)arg1 scalerX:(float)arg2 scalerY:(float)arg3;
- (int)getFlowToBuffer:(struct __CVBuffer *)arg1;
- (float *)getFlowWithHeight:(int *)arg1 andWidth:(int *)arg2;
- (int)analyzeImages:(struct __CVBuffer *)arg1 secondImage:(struct __CVBuffer *)arg2 cancel:(CDUnknownBlockType)arg3;
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4;
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2 withChannels:(int)arg3;
- (int)configForAspectRatio:(id)arg1;
- (void)dealloc;
- (int)reInitModel;
- (int)prepareModel;
- (int)prepareWithLightweightOption:(_Bool)arg1 aspectRatio:(id)arg2 forceCPU:(_Bool)arg3 sharedModel:(_Bool)arg4 flushModel:(_Bool)arg5;

@end

