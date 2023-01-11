//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDateComponents.h>

@interface NSDateComponents (HKSPSleep)
+ (id)hkspTestDateComponentsWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 month:(unsigned long long)arg3 day:(unsigned long long)arg4 year:(unsigned long long)arg5;
+ (id)hkspTestDSTEndDateComponentsWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2;
+ (id)hkspTestDSTStartDateComponentsWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2;
+ (id)hkspTestWeekendDateComponentsWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2;
+ (id)hkspTestDateComponentsWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2;
- (long long)hksp_compareHourAndMinuteComponents:(id)arg1;
- (id)hksp_description;
@end
