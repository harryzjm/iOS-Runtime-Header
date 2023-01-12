//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, PHASENumberMetaParameterDefinition, PHASESpatialMixerDefinition;

@interface PHASEBlendNodeDefinition
{
    PHASENumberMetaParameterDefinition *_blendParameterDefinition;
    PHASESpatialMixerDefinition *_spatialMixerDefinitionForDistance;
    NSMutableArray *_ranges;
}

+ (id)new;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *ranges; // @synthesize ranges=_ranges;
@property(readonly, nonatomic) PHASESpatialMixerDefinition *spatialMixerDefinitionForDistance; // @synthesize spatialMixerDefinitionForDistance=_spatialMixerDefinitionForDistance;
@property(readonly, nonatomic) PHASENumberMetaParameterDefinition *blendParameterDefinition; // @synthesize blendParameterDefinition=_blendParameterDefinition;
- (void)addRangeWithEnvelope:(id)arg1 subtree:(id)arg2;
- (void)addRangeWithEnvelope:(id)arg1 subTree:(id)arg2;
- (void)addRangeForInputValuesAbove:(double)arg1 fullGainAtValue:(double)arg2 fadeCurveType:(long long)arg3 subtree:(id)arg4;
- (void)addRangeForInputValuesAbove:(double)arg1 fullGainAtValue:(double)arg2 fadeCurveType:(long long)arg3 subTree:(id)arg4;
- (void)addRangeForInputValuesBetween:(double)arg1 highValue:(double)arg2 fullGainAtLowValue:(double)arg3 fullGainAtHighValue:(double)arg4 lowFadeCurveType:(long long)arg5 highFadeCurveType:(long long)arg6 subtree:(id)arg7;
- (void)addRangeForInputValuesBetween:(double)arg1 highValue:(double)arg2 fullGainAtLowValue:(double)arg3 fullGainAtHighValue:(double)arg4 lowFadeCurveType:(long long)arg5 highFadeCurveType:(long long)arg6 subTree:(id)arg7;
- (void)addRangeForInputValuesBelow:(double)arg1 fullGainAtValue:(double)arg2 fadeCurveType:(long long)arg3 subtree:(id)arg4;
- (void)addRangeForInputValuesBelow:(double)arg1 fullGainAtValue:(double)arg2 fadeCurveType:(long long)arg3 subTree:(id)arg4;
- (id)children;
- (id)initDistanceBlendWithSpatialMixerDefinition:(id)arg1;
- (id)initDistanceBlendWithSpatialMixerDefinition:(id)arg1 identifier:(id)arg2;
- (id)initDistanceBlendWithSpatialMixerDefinition:(id)arg1 uid:(id)arg2;
- (id)initWithBlendMetaParameterDefinition:(id)arg1;
- (id)initWithBlendMetaParameterDefinition:(id)arg1 identifier:(id)arg2;
- (id)initWithBlendMetaParameterDefinition:(id)arg1 uid:(id)arg2;
- (id)init;

@end
