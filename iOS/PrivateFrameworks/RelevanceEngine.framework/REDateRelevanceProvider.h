//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSDateInterval;

@interface REDateRelevanceProvider
{
    NSDateInterval *_interval;
    NSDate *_initialRelevanceDate;
    NSDate *_irrelevantDate;
    double _recentDuration;
}

+ (id)_simulationDateFormatter;
+ (id)relevanceSimulatorID;
@property(readonly, nonatomic) double recentDuration; // @synthesize recentDuration=_recentDuration;
@property(readonly, nonatomic) NSDate *irrelevantDate; // @synthesize irrelevantDate=_irrelevantDate;
@property(readonly, nonatomic) NSDate *initialRelevanceDate; // @synthesize initialRelevanceDate=_initialRelevanceDate;
@property(readonly, nonatomic) NSDateInterval *interval; // @synthesize interval=_interval;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)_hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryEncoding;
- (id)initWithDictionary:(id)arg1;
- (id)initWithEventInterval:(id)arg1 becomesIrrelevantDate:(id)arg2 firstBecomesRelevantDate:(id)arg3 recentDuration:(double)arg4;
- (id)initWithEventInterval:(id)arg1 becomesIrrelevantDate:(id)arg2;
- (id)initWithEventInterval:(id)arg1;
- (id)initWithEventDate:(id)arg1 duration:(double)arg2;
- (id)initWithEventDate:(id)arg1;

@end

