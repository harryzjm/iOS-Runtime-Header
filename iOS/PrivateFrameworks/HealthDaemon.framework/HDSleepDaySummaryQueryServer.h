//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKSleepDaySummaryQueryConfiguration;

@interface HDSleepDaySummaryQueryServer
{
    HKSleepDaySummaryQueryConfiguration *_configuration;
}

+ (id)requiredEntitlements;
+ (Class)queryClass;
- (void).cxx_destruct;
- (void)_queue_start;
- (id)objectTypes;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end
