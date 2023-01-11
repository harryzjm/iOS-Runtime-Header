//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REAutomaticExportedInterface-Protocol.h>

@class NSString, REFeature;

@interface _REProbabilityRuleCondition <REAutomaticExportedInterface>
{
    float _threshold;
    NSString *_interaction;
    REFeature *_feature;
    long long _relation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) float threshold; // @synthesize threshold=_threshold;
@property(readonly, nonatomic) long long relation; // @synthesize relation=_relation;
@property(readonly, nonatomic) REFeature *feature; // @synthesize feature=_feature;
@property(readonly, nonatomic) NSString *interaction; // @synthesize interaction=_interaction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_inflectionFeatureValuePairs;
- (_Bool)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id *)arg3;
- (id)_notCondition;
- (_Bool)_needsProbability;
- (id)_dependentFeatures;
- (id)initWithProbability:(id)arg1 relation:(long long)arg2 feature:(id)arg3 threshold:(float)arg4;

@end
