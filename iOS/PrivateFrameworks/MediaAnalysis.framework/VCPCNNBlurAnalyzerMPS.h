//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL, VCPCNNData, VCPCNNModel;

__attribute__((visibility("hidden")))
@interface VCPCNNBlurAnalyzerMPS
{
    VCPCNNModel *_model;
    VCPCNNData *_input;
    NSURL *_modelURL;
}

- (void).cxx_destruct;
- (int)computeSharpnessScore:(float *)arg1 textureness:(char *)arg2 contrast:(float)arg3 imgWidth:(int)arg4 cancel:(CDUnknownBlockType)arg5;
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;
- (int)prepareModelForSourceWidth:(int)arg1 andSourceHeight:(int)arg2;
- (id)init;

@end

