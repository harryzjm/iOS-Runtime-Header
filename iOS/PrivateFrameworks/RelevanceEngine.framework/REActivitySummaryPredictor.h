//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface REActivitySummaryPredictor
{
    NSSet *_queries;
    float _activeEnergyPercentComplete;
    float _exerciseTimePercentComplete;
    float _standHourPercentComplete;
}

+ (id)supportedFeatures;
+ (double)updateInterval;
@property float standHourPercentComplete; // @synthesize standHourPercentComplete=_standHourPercentComplete;
@property float exerciseTimePercentComplete; // @synthesize exerciseTimePercentComplete=_exerciseTimePercentComplete;
@property float activeEnergyPercentComplete; // @synthesize activeEnergyPercentComplete=_activeEnergyPercentComplete;
- (void).cxx_destruct;
- (void)collectLoggableState:(CDUnknownBlockType)arg1;
- (void)_updateWithActivitySummary:(id)arg1;
- (void)_stopQueries;
- (void)_stopQuery:(id)arg1;
- (void)_runQuery:(id)arg1;
- (void)_startActivitySummaryQueryWithRetries:(long long)arg1;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (void)update;
- (void)pause;
- (void)resume;
- (id)init;

@end

