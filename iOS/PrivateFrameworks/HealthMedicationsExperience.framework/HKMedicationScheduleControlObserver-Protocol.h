//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthMedicationsExperience/NSObject-Protocol.h>

@class HKMedicationScheduleControl, NSArray;

@protocol HKMedicationScheduleControlObserver <NSObject>
- (void)scheduleControlDidRescheduleItems;

@optional
- (void)scheduleControl:(HKMedicationScheduleControl *)arg1 didAddOrModifySchedules:(NSArray *)arg2;
- (void)scheduleControl:(HKMedicationScheduleControl *)arg1 didDeleteScheduleItems:(NSArray *)arg2;
@end

