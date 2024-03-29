//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetImageGenerator, NSArray, NSMutableArray, VCPColorNormalizationAnalyzer, VCPMovieHighlight;

__attribute__((visibility("hidden")))
@interface VCPMovieHighlightAnalyzer : NSObject
{
    NSArray *_junkResults;
    NSArray *_qualityResults;
    NSArray *_faceResults;
    NSArray *_facePrintResults;
    NSArray *_petsResults;
    NSArray *_saliencyResults;
    NSArray *_actionResults;
    NSArray *_subtleMotionResults;
    NSArray *_voiceResults;
    NSArray *_featureResults;
    NSArray *_humanActionResults;
    NSArray *_humanActionClassificationResults;
    NSArray *_humanPoseResults;
    NSArray *_cameraMotionResults;
    NSArray *_keyFrameResults;
    NSArray *_sceneResults;
    NSArray *_orientationResults;
    NSArray *_mlHighlightScoreResults;
    NSArray *_mlQualityResults;
    NSArray *_classificationResults;
    NSArray *_sceneprintResults;
    NSMutableArray *_expressionSegments;
    NSMutableArray *_internalResults;
    NSMutableArray *_highlightResults;
    NSMutableArray *_internalConstraintResults;
    struct CGSize _frameSize;
    float _maxDurationInSeconds;
    float _minDurationInSeconds;
    float _targetDurationInSeconds;
    float _toleranceInSeconds;
    int _targetHighlightIndex;
    CDStruct_e83c9415 _startRange;
    _Bool _isMaxTrim;
    _Bool _requestBestTrim;
    _Bool _requestFullResult;
    float _maxHighlightScore;
    float _minHighlightScore;
    _Bool _isLivePhoto;
    float _photoOffset;
    _Bool _verbose;
    _Bool _hadFlash;
    _Bool _hadZoom;
    _Bool _settlingHadZoom;
    _Bool _isTimelapse;
    CDStruct_e83c9415 _preferredTimeRange;
    AVAssetImageGenerator *_imageGenerator;
    int _numberOfFrames;
    VCPMovieHighlight *_animatedStickerGating;
    array_bb4fff4b _prevMotionParamDiff;
    array_bb4fff4b _sumMotionParam;
    array_bb4fff4b _diffFlipCount;
    VCPColorNormalizationAnalyzer *_colorNormalizationAnalyzer;
}

+ (_Bool)isHeuristicStickerScoreEnabled;
+ (_Bool)isPrototypeHighlightEnabled;
+ (float)getMinimumHighlightInSec;
- (void).cxx_destruct;
- (float)junkScoreForTimerange:(CDStruct_e83c9415)arg1 lengthScale:(_Bool)arg2;
- (float)subtleMotionScoreForTimerange:(CDStruct_e83c9415)arg1;
- (float)cameraMotionScoreForTimerange:(CDStruct_e83c9415)arg1;
- (float)visualPleasingScoreForTimerange:(CDStruct_e83c9415)arg1;
- (float)voiceScoreForTimerange:(CDStruct_e83c9415)arg1;
- (float)actionScoreForTimerange:(CDStruct_e83c9415)arg1;
- (float)qualityScoreForTimerange:(CDStruct_e83c9415)arg1;
- (float)analyzeOverallQuality:(CDStruct_e83c9415)arg1 isSettlingEffect:(_Bool)arg2 isAnimatedSticker:(_Bool)arg3;
- (float)stickerScaledScore:(float)arg1 highPrecisionThreshold:(float)arg2 highRecallThreshold:(float)arg3;
- (float)computeMLQualityScoreForTimerange:(CDStruct_e83c9415)arg1;
- (float)computeMLHighlightScoreForTimerange:(CDStruct_e83c9415)arg1;
- (int)combineMLHighlightScore;
- (int)postProcessMLHighlightScore;
- (float)computeVoiceScoreInTimeRange:(CDStruct_e83c9415)arg1;
- (float)computeHumanPoseScoreInTimerange:(CDStruct_e83c9415)arg1;
- (float)computeHumanActionScoreInTimerange:(CDStruct_e83c9415)arg1;
- (float)computeActionScoreInTimerange:(CDStruct_e83c9415)arg1;
- (float)computeSubtleMotionScoreInTimerange:(CDStruct_e83c9415)arg1;
- (float)expressionScoreForTimerange:(CDStruct_e83c9415)arg1;
- (float)computeExpressionScoreInTimerange:(CDStruct_e83c9415)arg1;
- (void)computeHighlightScoreOfSegment:(id)arg1;
- (_Bool)addSegment:(id)arg1;
- (int)evaluateSegment:(id)arg1;
- (void)searchFeatureVectorOfSegment:(id)arg1;
- (int)pickHighlightsFrom:(id)arg1;
- (int)computeHighlightScoreResults;
- (id)pickKeyFramesInRange:(CDStruct_e83c9415)arg1;
- (void)SetKeyFramesForSegments:(id)arg1;
- (float)computeHighlightScoreOfRange:(CDStruct_e83c9415)arg1;
- (_Bool)checkCameraZoom:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)computeSteadyTranslationTrimFor:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)computeActionFaceTrimFor:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)computeQualityTrimFor:(CDStruct_e83c9415)arg1 withKeyFrame:(_Bool)arg2;
- (void)generateExpressionSegments:(CDStruct_e83c9415)arg1;
- (id)highlightScoreResults;
- (id)results;
- (struct CGRect)computeBestPlaybackCrop:(CDStruct_e83c9415)arg1;
- (_Bool)updateCropHeatMap:(float *)arg1 withResults:(id)arg2 timeRange:(CDStruct_e83c9415)arg3 resultsKey:(id)arg4;
- (id)settlingEffects;
- (int)analyzeMotionStability:(array_bb4fff4b)arg1 motionParamDiff:(array_bb4fff4b)arg2;
- (float)settlingSharpnessScore:(CDStruct_e83c9415)arg1;
- (float)settlingExposureChangeScore:(CDStruct_e83c9415)arg1;
- (float)settlingSubjectScore:(CDStruct_e83c9415)arg1;
- (float)settlingMotionScore:(CDStruct_e83c9415)arg1;
- (id)animatedStickerGating;
- (id)movieSummary;
- (CDStruct_e83c9415)findBestTrim:(CDStruct_e83c9415)arg1;
- (id)findBestHighlightSegment:(CDStruct_e83c9415)arg1 targetTrim:(_Bool)arg2;
- (float)highlightScoreForTimeRange:(CDStruct_e83c9415)arg1 average:(_Bool)arg2;
- (int)addSceneprintInfo;
- (int)addClassificationInfo;
- (int)addActionInfo;
- (int)addFaceInfo;
- (int)computeColorNormalization;
- (int)selectHighlights;
- (CDStruct_e83c9415)computeTrimWithHighlightScoreFor:(CDStruct_e83c9415)arg1;
- (int)selectHighlightsForTimelapse;
- (void)loadHighlightScoreResults:(id)arg1;
- (id)maxTrimMovieHighlight:(id)arg1;
- (id)targetTrimRange:(CDStruct_e83c9415)arg1 searchRange:(CDStruct_e83c9415)arg2;
- (id)targetExtendRange:(CDStruct_e83c9415)arg1 maxRange:(CDStruct_e83c9415)arg2;
- (id)targetProcessRange:(CDStruct_e83c9415)arg1 maxRange:(CDStruct_e83c9415)arg2;
- (id)targetMovieHighlight:(id)arg1 mergedRange:(CDStruct_e83c9415)arg2 maxRange:(CDStruct_e83c9415)arg3;
- (id)postProcessMovieHighlight:(id)arg1;
- (_Bool)isGoodQuality:(CDStruct_e83c9415)arg1;
- (int)generateHighlights;
- (int)prepareRequiredQualityResult:(id)arg1 junkDetectionResult:(id)arg2 descriptorResult:(id)arg3 faceResult:(id)arg4 facePrintResult:(id)arg5 petsResult:(id)arg6 saliencyResult:(id)arg7 actionResult:(id)arg8 subtleMotionResult:(id)arg9 voiceResult:(id)arg10 keyFrameResult:(id)arg11 sceneResults:(id)arg12 humanActionResults:(id)arg13 humanActionClassificationresults:(id)arg14 humanPoseResults:(id)arg15 cameraMotionResults:(id)arg16 orientationResults:(id)arg17 mlHighlightScoreResults:(id)arg18 mlQualityResults:(id)arg19 classificationResults:(id)arg20 sceneprintResults:(id)arg21 frameSize:(struct CGSize)arg22;
- (void)setMaxHighlightDuration:(float)arg1;
- (id)initWithPostProcessOptions:(id)arg1;
- (id)initWithAnalysisType:(unsigned long long)arg1 isLivePhoto:(_Bool)arg2 photoOffset:(float)arg3 hadFlash:(_Bool)arg4 hadZoom:(_Bool)arg5 settlingHadZoom:(_Bool)arg6 isTimelapse:(_Bool)arg7 preferredTimeRange:(CDStruct_e83c9415)arg8 asset:(id)arg9;

@end

