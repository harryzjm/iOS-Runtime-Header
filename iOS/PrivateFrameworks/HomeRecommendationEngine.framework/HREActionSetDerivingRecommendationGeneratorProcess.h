//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface HREActionSetDerivingRecommendationGeneratorProcess
{
    NSDictionary *_sourceCharacteristics;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *sourceCharacteristics; // @synthesize sourceCharacteristics=_sourceCharacteristics;
- (id)_createRecommendationWithActionSet:(id)arg1;
- (id)_recommendationForActionSet:(id)arg1 inHome:(id)arg2;
- (id)generateRecommendations;
- (_Bool)shouldGenerateRecommendations;

@end
