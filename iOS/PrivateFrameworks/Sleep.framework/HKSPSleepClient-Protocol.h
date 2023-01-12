//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sleep/HKSPClient-Protocol.h>

@class HKSPSleepEvent, HKSPSleepEventRecord, HKSPSleepModeObject, HKSPSleepSchedule, HKSPSleepScheduleStateObject, HKSPSleepSettings, HKSPXPCClientIdentifier;

@protocol HKSPSleepClient <HKSPClient>
- (void)sleepModeChanged:(HKSPSleepModeObject *)arg1;
- (void)sleepScheduleStateChanged:(HKSPSleepScheduleStateObject *)arg1;
- (void)sleepEventOccurred:(HKSPSleepEvent *)arg1;
- (void)sleepEventRecordChanged:(HKSPSleepEventRecord *)arg1 clientIdentifier:(HKSPXPCClientIdentifier *)arg2;
- (void)sleepSettingsChanged:(HKSPSleepSettings *)arg1 clientIdentifier:(HKSPXPCClientIdentifier *)arg2;
- (void)sleepScheduleChanged:(HKSPSleepSchedule *)arg1 clientIdentifier:(HKSPXPCClientIdentifier *)arg2;
@end

