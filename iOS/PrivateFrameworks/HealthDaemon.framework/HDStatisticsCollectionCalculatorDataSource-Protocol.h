//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDStatisticsCollectionCalculator, NSDateInterval;

@protocol HDStatisticsCollectionCalculatorDataSource <NSObject>
- (_Bool)collectionCalculator:(HDStatisticsCollectionCalculator *)arg1 queryForInterval:(NSDateInterval *)arg2 error:(id *)arg3 sampleHandler:(_Bool (^)(double, double, double, long long, _Bool, id *))arg4 mergeHandler:(void (^)(double))arg5;
@end

