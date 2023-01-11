//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HKUnitTestingTaskServerInterface-Protocol.h>

@class HKCodableQuantitySeries, NSDictionary;

@protocol HKQuantitySeriesSampleBuilderTaskServerInterface <HKUnitTestingTaskServerInterface>
- (void)remote_discardWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_finishSeriesWithMetadata:(NSDictionary *)arg1 finalSeries:(HKCodableQuantitySeries *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)remote_insertQuantitySeries:(HKCodableQuantitySeries *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end
