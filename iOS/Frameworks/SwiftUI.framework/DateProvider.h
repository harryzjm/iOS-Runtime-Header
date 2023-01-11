//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSDateFormatter, NSString;

@interface DateProvider
{
    NSArray *_templateSeries;
    _Bool _uppercase;
    NSDate *_date;
    unsigned long long _calendarUnits;
    NSString *_dateFormat;
    NSDateFormatter *_dateFormatter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(copy, nonatomic) NSString *dateFormat; // @synthesize dateFormat=_dateFormat;
@property(nonatomic) _Bool uppercase; // @synthesize uppercase=_uppercase;
@property(nonatomic) unsigned long long calendarUnits; // @synthesize calendarUnits=_calendarUnits;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)updateInterval;
- (id)_partialDateTemplateSeriesForUnits:(unsigned long long)arg1;
- (id)_completeDateTemplateSeries;
- (id)_sessionTextForIndex:(long long)arg1;
- (id)initWithDateFormat:(id)arg1 calendar:(id)arg2 locale:(id)arg3 timeZone:(id)arg4;
- (id)initWithDate:(id)arg1 units:(unsigned long long)arg2 calendar:(id)arg3 locale:(id)arg4 timeZone:(id)arg5;
- (id)initWithDate:(id)arg1 units:(unsigned long long)arg2;

@end
