//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCalendarDate.h>

@interface NSCalendarDate (DataAccessUtils)
+ (id)combinedDateWithYMDFrom:(id)arg1 HMSFrom:(id)arg2 componentDatesTimezone:(id)arg3;
- (void)getGregorianDate:(CDStruct_79f9e052 *)arg1;
- (id)gmtMidnight;
- (_Bool)isGMTMidnight;
- (id)nearestMidnight;
- (id)gmtDateToDateInTimeZone:(id)arg1;
- (id)tzDateToDateInGMT:(id)arg1;
@end

