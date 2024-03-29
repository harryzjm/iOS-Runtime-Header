//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, VCPImageDescriptor, VCPVideoKeyFrame;

__attribute__((visibility("hidden")))
@interface VCPMovieHighlight : NSObject
{
    _Bool _isAutoPlayable;
    _Bool _isTrimmed;
    _Bool _isSettlingOK;
    float _score;
    float _averageScore;
    float _junkScore;
    float _qualityScore;
    float _expressionScore;
    float _actionScore;
    float _voiceScore;
    float _humanActionScore;
    float _humanPoseScore;
    float _autoplayScore;
    float _motionScore;
    float _subjectScore;
    float _exposureChangeScore;
    float _zoomChangeScore;
    float _flashScore;
    float _sharpnessScore;
    VCPImageDescriptor *_descriptor;
    VCPVideoKeyFrame *_keyFrame;
    NSData *_colorNormalization;
    NSArray *_faceResults;
    NSArray *_sceneClassificationResults;
    NSArray *_sceneprintResults;
    NSArray *_humanActionResults;
    struct CGRect _bestPlaybackCrop;
    CDStruct_e83c9415 _timerange;
}

- (void).cxx_destruct;
@property(nonatomic) float sharpnessScore; // @synthesize sharpnessScore=_sharpnessScore;
@property(nonatomic) float flashScore; // @synthesize flashScore=_flashScore;
@property(nonatomic) float zoomChangeScore; // @synthesize zoomChangeScore=_zoomChangeScore;
@property(nonatomic) float exposureChangeScore; // @synthesize exposureChangeScore=_exposureChangeScore;
@property(nonatomic) float subjectScore; // @synthesize subjectScore=_subjectScore;
@property(nonatomic) float motionScore; // @synthesize motionScore=_motionScore;
@property(nonatomic) float autoplayScore; // @synthesize autoplayScore=_autoplayScore;
@property(nonatomic) _Bool isSettlingOK; // @synthesize isSettlingOK=_isSettlingOK;
@property(retain, nonatomic) NSArray *humanActionResults; // @synthesize humanActionResults=_humanActionResults;
@property(retain, nonatomic) NSArray *sceneprintResults; // @synthesize sceneprintResults=_sceneprintResults;
@property(retain, nonatomic) NSArray *sceneClassificationResults; // @synthesize sceneClassificationResults=_sceneClassificationResults;
@property(retain, nonatomic) NSArray *faceResults; // @synthesize faceResults=_faceResults;
@property(retain, nonatomic) NSData *colorNormalization; // @synthesize colorNormalization=_colorNormalization;
@property(retain, nonatomic) VCPVideoKeyFrame *keyFrame; // @synthesize keyFrame=_keyFrame;
@property(retain, nonatomic) VCPImageDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(nonatomic) _Bool isTrimmed; // @synthesize isTrimmed=_isTrimmed;
@property(nonatomic) _Bool isAutoPlayable; // @synthesize isAutoPlayable=_isAutoPlayable;
@property(nonatomic) struct CGRect bestPlaybackCrop; // @synthesize bestPlaybackCrop=_bestPlaybackCrop;
@property(nonatomic) float humanPoseScore; // @synthesize humanPoseScore=_humanPoseScore;
@property(nonatomic) float humanActionScore; // @synthesize humanActionScore=_humanActionScore;
@property(nonatomic) float voiceScore; // @synthesize voiceScore=_voiceScore;
@property(nonatomic) float actionScore; // @synthesize actionScore=_actionScore;
@property(nonatomic) float expressionScore; // @synthesize expressionScore=_expressionScore;
@property(nonatomic) float qualityScore; // @synthesize qualityScore=_qualityScore;
@property(nonatomic) float junkScore; // @synthesize junkScore=_junkScore;
@property(nonatomic) float averageScore; // @synthesize averageScore=_averageScore;
@property(nonatomic) float score; // @synthesize score=_score;
@property(nonatomic) CDStruct_e83c9415 timerange; // @synthesize timerange=_timerange;
- (void)checkAutoPlayable;
- (void)copyScoresFrom:(id)arg1;
- (_Bool)isShort;
- (void)mergeSegment:(id)arg1;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1;

@end

