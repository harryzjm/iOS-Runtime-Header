//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@class NSString;

@interface NSDate (IC)
- (unsigned long long)ic_numberOfDaysFromDate:(id)arg1;
- (_Bool)ic_isWithinSameYear:(id)arg1;
- (_Bool)ic_isWithinSameMonth:(id)arg1;
- (_Bool)ic_isWithinInclusiveDayIntervalBeginning:(id)arg1 ending:(id)arg2;
- (_Bool)ic_isLaterThanUnitsAgo:(unsigned long long)arg1 value:(unsigned long long)arg2;
- (_Bool)ic_isLaterThanDate:(id)arg1;
- (_Bool)ic_isEarlierThanDate:(id)arg1;
- (_Bool)ic_isSameDayAsDate:(id)arg1;
@property(readonly, nonatomic) NSDate *ic_truncated;
- (id)ic_briefFormattedDate:(_Bool)arg1;
@property(readonly, nonatomic) NSString *ic_briefFormattedDateForAccessibility;
@property(readonly, nonatomic) NSString *ic_briefFormattedDate;
@property(readonly, nonatomic) NSString *ic_shortFormattedDate;
@property(readonly, nonatomic) NSString *ic_iso8601Date;
@property(readonly, nonatomic) NSDate *ic_endOfDay;
@property(readonly, nonatomic) NSDate *ic_startOfDay;
@property(readonly, nonatomic) NSString *ic_localDateWithSeconds;
@property(readonly, nonatomic) _Bool ic_isYesterday;
@property(readonly, nonatomic) _Bool ic_isToday;
@end

