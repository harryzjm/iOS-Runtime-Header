//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthMedications/NSObject-Protocol.h>

@class NSArray;

@protocol HKMedicationScheduleControlClient <NSObject>
- (void)client_notifyForAddOrModifySchedules:(NSArray *)arg1;
- (void)client_notifyForDidPruneSchduleItems:(NSArray *)arg1;
- (void)client_notifyForDidRescheduleMedications;
@end

