//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNGazeAnalysis : NSObject
{
    float *_inputData;
    VCPCNNModelEspresso *_modelEspresso;
    struct Scaler _scaler;
}

+ (id)sharedModel:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)detectEyeOpennessForFace:(struct CGRect)arg1 inBuffer:(struct __CVBuffer *)arg2 eyeOpenness:(_Bool *)arg3;
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 faceBounds:(struct CGRect)arg5;
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2;
- (void)dealloc;
- (id)init;

@end

