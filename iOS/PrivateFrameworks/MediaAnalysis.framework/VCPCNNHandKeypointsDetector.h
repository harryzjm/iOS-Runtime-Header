//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPCNNHandKeypointsDetector : NSObject
{
    float _std;
    float _mean;
    struct Scaler _scaler;
}

+ (id)detector:(_Bool)arg1 sharedModel:(_Bool)arg2 modelName:(id)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)handKeypointsDetection:(struct __CVBuffer *)arg1 box:(id)arg2 keypoints:(struct CGPoint [21])arg3 keypointConfidence:(float [21])arg4 forGFT:(_Bool)arg5;
- (int)cvtHeatmaps2Keypoints:(float *)arg1 outHeight:(int)arg2 outWidth:(int)arg3 inHeight:(int)arg4 inWidth:(int)arg5 outChannel:(int)arg6 keypoints:(struct CGPoint *)arg7 keypointConfidence:(float *)arg8 offset:(float)arg9;
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4 offset:(float *)arg5;
- (int)generateHandKeypoints:(struct CGPoint *)arg1 keypointConfidence:(float *)arg2 offset:(float)arg3;
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 box:(id)arg5;
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2;

@end

