//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TITypologyStatisticBasicCounts, TITypologyStatisticTimeElapsed;

@interface TITypologyStatisticTypingSpeed
{
    TITypologyStatisticTimeElapsed *_timeElapsed;
    TITypologyStatisticBasicCounts *_basicCounts;
}

+ (id)statisticCompositeWithStatistics:(id)arg1;
+ (id)statistic;
- (void).cxx_destruct;
@property(readonly, nonatomic) TITypologyStatisticBasicCounts *basicCounts; // @synthesize basicCounts=_basicCounts;
@property(readonly, nonatomic) TITypologyStatisticTimeElapsed *timeElapsed; // @synthesize timeElapsed=_timeElapsed;
- (id)aggregateReport;
@property(readonly, nonatomic) float typingSpeed;
- (id)initWithTimeElapsed:(id)arg1 basicCounts:(id)arg2;

@end
