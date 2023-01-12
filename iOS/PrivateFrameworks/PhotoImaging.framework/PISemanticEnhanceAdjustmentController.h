//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PISemanticEnhanceAdjustmentController
{
}

+ (id)boundingBoxesKey;
+ (id)faceBoundingBoxesKey;
+ (id)sceneConfidenceKey;
+ (id)sceneLabelKey;
+ (id)intensityKey;
+ (id)genericLandscapeSceneLabel;
+ (id)sunriseSunsetSceneLabel;
+ (id)platedFoodSceneLabel;
- (void)setFaceBoundingBoxesFromObservations:(id)arg1 orientation:(long long)arg2;
- (void)setBoundingBoxesFromObservations:(id)arg1 orientation:(long long)arg2;
- (void)setScene:(long long)arg1 confidence:(double)arg2;
@property(readonly, copy, nonatomic) NSArray *boundingBoxes;
@property(readonly, nonatomic) double sceneConfidence;
@property(readonly, nonatomic) long long scene;
@property(nonatomic) double intensity;
- (_Bool)isSettingEqual:(id)arg1 forKey:(id)arg2;

@end
