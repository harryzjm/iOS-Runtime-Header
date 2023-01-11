//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, VCPFrameAnalysisStats, VCPImageBlurAnalyzer, VCPImageFaceQualityAnalyzer, VCPVideoKeyFrame;

@interface VCPVideoKeyFrameAnalyzer : NSObject
{
    VCPImageBlurAnalyzer *_blurAnalyzer;
    VCPImageFaceQualityAnalyzer *_faceQualityAnalyzer;
    NSDictionary *_faceRanges;
    NSArray *_junkResults;
    NSMutableArray *_keyFrames;
    CDStruct_e83c9415 _timeRange;
    VCPVideoKeyFrame *_activeKeyFrame;
    VCPFrameAnalysisStats *_frameStats;
    _Bool _isLivePhoto;
    NSMutableArray *_keyFrameScores;
    NSArray *_inputKeyFrameResults;
}

- (void).cxx_destruct;
- (float)computeMinDistanceBetween:(id)arg1 withSet:(id)arg2;
- (void)prepareFrameStats:(CDStruct_1b6d18a9)arg1;
- (void)setKeyFrameTime:(CDStruct_1b6d18a9)arg1 isHeadingFrame:(_Bool)arg2;
- (void)modulateByJunk;
- (void)modulateByExposure;
- (void)modulateByTimeRange;
- (void)adjustScoreByFace;
- (int)finalizeKeyFrame;
- (int)computeSharpnessOfFrame:(struct __CVBuffer *)arg1;
- (int)computeFaceQualityOfFrame:(struct __CVBuffer *)arg1;
- (void)setBlurAnalyzerFaceResults:(id)arg1;
- (id)keyFrames;
- (int)postProcess;
- (void)preparePostProcessingStatsFromFaceRange:(id)arg1 junkResults:(id)arg2;
- (int)loadKeyFrameResults:(CDStruct_1b6d18a9)arg1;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2;
- (id)keyFrameScores;
- (id)initWithTransform:(struct CGAffineTransform)arg1 timeRange:(CDStruct_e83c9415)arg2 isLivePhoto:(_Bool)arg3 frameStats:(id)arg4 keyFrameResults:(id)arg5;

@end
