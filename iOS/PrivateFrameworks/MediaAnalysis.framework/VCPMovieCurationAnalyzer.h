//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, VCPFrameAnalysisStats, VCPMovieHighlightAnalyzer, VCPVideoKeyFrameAnalyzer;

__attribute__((visibility("hidden")))
@interface VCPMovieCurationAnalyzer : NSObject
{
    VCPVideoKeyFrameAnalyzer *_keyFrameAnalyzer;
    VCPMovieHighlightAnalyzer *_highlightAnalyzer;
    NSArray *_descriptorResults;
    NSArray *_qualityResuls;
    NSArray *_junkResults;
    NSArray *_faceResults;
    NSArray *_facePrintResults;
    NSArray *_petsResults;
    NSArray *_actionResults;
    NSArray *_subtleMotionResults;
    NSArray *_voiceResults;
    NSArray *_audioQualityResults;
    NSArray *_sceneResults;
    NSArray *_humanActionResults;
    NSArray *_humanActionClassificationResults;
    NSArray *_humanPoseResults;
    NSArray *_cameraMotionResults;
    NSArray *_saliencyResults;
    NSArray *_orientationResults;
    NSArray *_mlHighlightScoreResults;
    NSArray *_mlQualityResults;
    NSArray *_classificationResults;
    NSArray *_sceneprintResults;
    NSDictionary *_faceRanges;
    CDStruct_e83c9415 _timeRange;
    struct CGSize _frameSize;
    VCPFrameAnalysisStats *_frameStats;
    _Bool _isLivePhoto;
    _Bool _hadFlash;
    _Bool _hadZoom;
}

+ (_Bool)isSettlingEffectPregatingEnabled;
- (void).cxx_destruct;
- (void)reportMovieCurationAnalysisResults:(id)arg1 withSummaryAnalytics:(id)arg2;
- (id)results;
- (void)addSettling:(id)arg1 to:(id)arg2;
- (void)addSticker:(id)arg1 to:(id)arg2;
- (void)addSummary:(id)arg1 to:(id)arg2;
- (void)addHighlight:(id)arg1 to:(id)arg2;
- (id)audioQualityScore:(CDStruct_e83c9415)arg1;
- (int)generateMovieCurations;
- (int)postProcessKeyFrames;
- (void)loadVideoAnalysisResults:(id)arg1 audioAnalysisResults:(id)arg2 videoCNNResults:(id)arg3 andFaceRanges:(id)arg4 frameSize:(struct CGSize)arg5;
- (int)analyzeKeyFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4 photoOffset:(float)arg5;
- (void)setMaxHighlightDuration:(float)arg1;
- (id)initWithAnalysisTypes:(unsigned long long)arg1 transform:(struct CGAffineTransform)arg2 timeRange:(CDStruct_e83c9415)arg3 isLivePhoto:(_Bool)arg4 photoOffset:(float)arg5 frameStats:(id)arg6 hadFlash:(_Bool)arg7 hadZoom:(_Bool)arg8 settlingHadZoom:(_Bool)arg9 keyFrameResults:(id)arg10 isTimelapse:(_Bool)arg11 preferredTimeRange:(CDStruct_e83c9415)arg12 asset:(id)arg13;

@end

