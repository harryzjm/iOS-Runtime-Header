//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNPetsDetectorV2 : NSObject
{
    int _cnnInputWidth;
    int _cnnInputHeight;
    int _maxNumRegions;
    int _numClass;
    int _revision;
    int _srcWidth;
    int _srcHeight;
    float *_inputData;
    NSArray *_outputNames;
    NSString *_resConfig;
    VCPCNNModelEspresso *_modelEspresso;
    struct Scaler _scaler;
}

+ (id)detector:(int)arg1 forceCPU:(_Bool)arg2 sharedModel:(_Bool)arg3 revision:(int)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)petsDetection:(struct __CVBuffer *)arg1 petsRegions:(id)arg2 cancel:(CDUnknownBlockType)arg3;
- (int)generatePetsBoxes:(id)arg1;
- (int)generatePetsRegions:(const void *)arg1 boxes:(id)arg2 maxNumRegions:(int)arg3;
- (int)retrieveBoxes:(float *)arg1 outHeight:(int)arg2 outWidth:(int)arg3 boxes:(id)arg4 anchorBox:(float [3][2])arg5;
- (void)nonMaxSuppression:(id)arg1;
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4;
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;
- (int)createModel:(int)arg1 srcWidth:(int)arg2;
- (int)configForAspectRatio:(id)arg1;
- (long long)getClosestAspectRatio:(id)arg1;
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2;
- (id)initWithMaxNumRegions:(int)arg1 forceCPU:(_Bool)arg2 sharedModel:(_Bool)arg3 revision:(int)arg4;

@end

