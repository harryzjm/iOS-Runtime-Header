//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSDateFormatter;

@interface TimeIntervalProvider
{
    NSDateFormatter *_dateFormatter;
    NSArray *_fallbackSequence;
    NSDate *_startDate;
    NSDate *_endDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)_dateIntervalTextWithNarrow:(_Bool)arg1;
- (id)_timeIntervalTextWithDropMinutes:(_Bool)arg1 onlyStartDate:(_Bool)arg2;
- (id)_dateIntervalNarrowText;
- (id)_dateIntervalWideText;
- (id)_startTimeDropMinutesText;
- (id)_startTimeFullText;
- (id)_timeIntervalDropMinutesText;
- (id)_timeIntervalFullText;
- (id)_textForSequenceItem:(long long)arg1;
- (id)_fallbackSequence;
- (id)_stringByRemovingDesignatorRange:(struct _NSRange)arg1 fromString:(id)arg2;
- (struct _NSRange)_rangeOfAnnontatedTime:(id)arg1 matchingPattern:(CDUnknownBlockType)arg2;
- (struct _NSRange)_rangeOfHoursInAnnotatedTime:(id)arg1;
- (struct _NSRange)_rangeOfDesignatorInAnnotatedTime:(id)arg1;
- (id)_sessionTextForIndex:(long long)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 locale:(id)arg4 timeZone:(id)arg5;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;

@end
