//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKQueryClientInterface-Protocol.h>

@class HKStatistics, NSArray, NSNumber, NSUUID;

@protocol HKStatisticsCollectionQueryClientInterface <HKQueryClientInterface>
- (void)client_deliverUpdatedStatistics:(HKStatistics *)arg1 anchor:(NSNumber *)arg2 query:(NSUUID *)arg3;
- (void)client_deliverStatisticsBatch:(NSArray *)arg1 resetStatistics:(_Bool)arg2 isFinal:(_Bool)arg3 anchor:(NSNumber *)arg4 query:(NSUUID *)arg5;
@end

