//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PGMemoryMomentRequirements;

@interface PGPersonTrendsMemoryGenerator
{
    _Bool _requireFaceProcessingMeetsThresholdOverTime;
    _Bool _intersectRelevantAssetsForFeatures;
    PGMemoryMomentRequirements *_momentRequirements;
}

- (void).cxx_destruct;
- (id)momentRequirements;
- (_Bool)intersectRelevantAssetsForFeatures;
- (_Bool)requireFaceProcessingMeetsThresholdOverTime;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)arg1;
- (id)initWithMemoryGenerationContext:(id)arg1;

@end
