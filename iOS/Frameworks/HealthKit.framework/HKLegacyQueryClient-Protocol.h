//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKQueryClientInterface-Protocol.h>

@class HKActivityCache, NSArray, NSUUID;

@protocol HKLegacyQueryClient <HKQueryClientInterface>
- (void)deliverCurrentActivityCache:(HKActivityCache *)arg1 moveStatistics:(NSArray *)arg2 exerciseStatistics:(NSArray *)arg3 standHoursInfo:(NSArray *)arg4 queryUUID:(NSUUID *)arg5;
@end
