//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface L2XGBRegressorInput : NSObject
{
    double _L1Score;
    double _freshness;
    double _photosFavorited;
    double _aestheticScore;
    double _curationScore;
    double _matchedFieldsCount;
    double _matchedPeopleRatio;
    double _matchedLocationRatio;
    double _matchedSceneLabelRatio;
    double _matchedSceneSynonymRatio;
    double _matchedOCRCharacterMatchRatio;
    double _matchedSceneConfidence;
    double _matchedSceneBoundingBox;
    double _matchedOCRImportance;
}

@property(nonatomic) double matchedOCRImportance; // @synthesize matchedOCRImportance=_matchedOCRImportance;
@property(nonatomic) double matchedSceneBoundingBox; // @synthesize matchedSceneBoundingBox=_matchedSceneBoundingBox;
@property(nonatomic) double matchedSceneConfidence; // @synthesize matchedSceneConfidence=_matchedSceneConfidence;
@property(nonatomic) double matchedOCRCharacterMatchRatio; // @synthesize matchedOCRCharacterMatchRatio=_matchedOCRCharacterMatchRatio;
@property(nonatomic) double matchedSceneSynonymRatio; // @synthesize matchedSceneSynonymRatio=_matchedSceneSynonymRatio;
@property(nonatomic) double matchedSceneLabelRatio; // @synthesize matchedSceneLabelRatio=_matchedSceneLabelRatio;
@property(nonatomic) double matchedLocationRatio; // @synthesize matchedLocationRatio=_matchedLocationRatio;
@property(nonatomic) double matchedPeopleRatio; // @synthesize matchedPeopleRatio=_matchedPeopleRatio;
@property(nonatomic) double matchedFieldsCount; // @synthesize matchedFieldsCount=_matchedFieldsCount;
@property(nonatomic) double curationScore; // @synthesize curationScore=_curationScore;
@property(nonatomic) double aestheticScore; // @synthesize aestheticScore=_aestheticScore;
@property(nonatomic) double photosFavorited; // @synthesize photosFavorited=_photosFavorited;
@property(nonatomic) double freshness; // @synthesize freshness=_freshness;
@property(nonatomic) double L1Score; // @synthesize L1Score=_L1Score;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithL1Score:(double)arg1 freshness:(double)arg2 photosFavorited:(double)arg3 aestheticScore:(double)arg4 curationScore:(double)arg5 matchedFieldsCount:(double)arg6 matchedPeopleRatio:(double)arg7 matchedLocationRatio:(double)arg8 matchedSceneLabelRatio:(double)arg9 matchedSceneSynonymRatio:(double)arg10 matchedOCRCharacterMatchRatio:(double)arg11 matchedSceneConfidence:(double)arg12 matchedSceneBoundingBox:(double)arg13 matchedOCRImportance:(double)arg14;

@end

