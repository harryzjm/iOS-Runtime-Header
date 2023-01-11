//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HFAnalyticsCCPredictionEvent
{
    unsigned long long _predictionStage;
    unsigned long long _predictionCount;
}

+ (void)sendMetricsForPredictionEventAtStage:(unsigned long long)arg1 withCount:(unsigned long long)arg2;
@property(nonatomic) unsigned long long predictionCount; // @synthesize predictionCount=_predictionCount;
@property(nonatomic) unsigned long long predictionStage; // @synthesize predictionStage=_predictionStage;
- (id)payload;
- (id)initWithData:(id)arg1;

@end
