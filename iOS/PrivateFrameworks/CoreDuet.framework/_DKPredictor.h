//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol _DKKnowledgeQuerying;

@interface _DKPredictor : NSObject
{
    id <_DKKnowledgeQuerying> _knowledgeStore;
}

+ (id)roundDate:(id)arg1 toUpperQuarterHour:(_Bool)arg2;
+ (id)defaultPeriodAtDate:(id)arg1;
+ (id)deviceActivityLikelihoodQueryPredicate;
+ (id)predictorLog;
+ (id)predictorWithKnowledgeStore:(id)arg1;
@property(retain, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
- (void).cxx_destruct;
- (id)expectedInBedPeriod;
- (id)localInBedPeriod;
- (id)predictionForStreamsWithNames:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 withDataPartitionType:(unsigned long long)arg4 asOfDate:(id)arg5;
- (id)predictionForStreamsWithNames:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 asOfDate:(id)arg4;
- (id)predictionForStreamWithName:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 withDataPartitionType:(unsigned long long)arg4 asOfDate:(id)arg5;
- (id)predictionForStreamWithName:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 asOfDate:(id)arg4;
- (id)predictionForStreamsWithNames:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3;
- (id)predictionForStreamWithName:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3;
- (id)deviceActivityLikelihood;
- (id)displayOnLikelihood;
- (id)pluginLikelihood;
- (id)launchLikelihoodForTopNApplications:(long long)arg1 withLikelihoodGreaterThan:(double)arg2 withTemporalResolution:(int)arg3;
- (id)launchLikelihoodPredictionForApp:(id)arg1;
- (id)initWithKnowledgeStore:(id)arg1;

@end

