//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (TSUAdditions)
- (_Bool)tsu_isEqualToFileModificationDateAccountingForTruncation:(id)arg1;
- (_Bool)tsu_isEqualToDate:(id)arg1;
- (_Bool)p_localeUses24HourTimeCycle;
- (id)dateFormatterFromTemplate12Hour:(id)arg1 template24Hour:(id)arg2 withDateFormatter:(id)arg3;
- (id)tsu_shortFormattedDate;
- (id)tsu_fullFormattedDate;
- (id)p_ruleForOverAYearAgoForDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_ruleForOverAWeekAgoForDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_ruleForUpToSevenDaysAgoAndNotYesterdayForDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_ruleForYesterday:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_rule1To23HoursAgo:(long long)arg1;
- (id)p_rule1To59MinutesAgo:(long long)arg1;
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1;
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1 withDateFormatter:(id)arg2 shortAsPossible:(_Bool)arg3;
@property(readonly, nonatomic) CDStruct_d65e47c4 tsu_DOSTime;
- (id)tsu_initWithDOSTime:(CDStruct_d65e47c4)arg1;
@end
