//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKQuantity, HKWorkoutRoute;

@protocol HKWorkoutRouteDataSourceClientInterface <NSObject>
- (void)clientRemote_didUpdateRoute:(HKWorkoutRoute *)arg1;
- (void)clientRemote_didUpdateElevation:(HKQuantity *)arg1;
@end
