//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNPetsKeypointsDetector : NSObject
{
    int _maxNumRegions;
    float *_inputData;
    VCPCNNModelEspresso *_modelEspresso;
    int _inputWidth;
    int _inputHeight;
    struct Scaler _scaler;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withBox:(id)arg2 keypoints:(id)arg3;
- (int)parseHeatmap2Keypoints:(id)arg1;
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 box:(id)arg5;
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2;
- (void)dealloc;
- (id)initWithForceCPU:(_Bool)arg1 sharedModel:(_Bool)arg2;

@end

