//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPVideoCNNAutoplay
{
    NSMutableDictionary *_summaryResults;
    VCPCNNModelEspresso *_modelEspresso;
    NSArray *_inputNames;
    vector_aebc2d99 _inputsData;
    float *_analysisInput;
    _Bool _skip;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)results;
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;
- (int)run:(id)arg1;
- (int)loadAnalysisResults:(id)arg1 audioResults:(id)arg2;
- (void)dealloc;
- (id)init;

@end

