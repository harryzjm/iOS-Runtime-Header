//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, PHFetchResult, VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPImageHumanActionAnalyzer
{
    NSMutableArray *_results;
    NSArray *_existingResults;
    VCPCNNModelEspresso *_model;
    PHFetchResult *_phFaces;
    float *_inputData;
}

+ (id)sharedModel:(id)arg1 outputNames:(id)arg2 properties:(id)arg3;
- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;
- (struct CGRect)rectFromPHFace:(id)arg1;
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 crop:(struct CGRect)arg5;
- (int)aggregateWith:(id)arg1;
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2;
- (void)dealloc;
- (id)initWithPHFaces:(id)arg1 existingResults:(id)arg2;

@end

