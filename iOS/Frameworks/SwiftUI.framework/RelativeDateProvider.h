//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSDateComponents, NSDateComponentsFormatter;

@interface RelativeDateProvider
{
    double _elapsedTime;
    NSDateComponents *_sessionComponents;
    long long _sessionTimePeriod;
    unsigned long long _sessionVisibleUnits;
    _Bool _sessionInProgress;
    NSDate *_mostRecentSessionDate;
    _Bool _disableOffsetPrefix;
    _Bool _twoDigitMinuteZeroPadding;
    _Bool _wantsSubseconds;
    _Bool _showLeadingMinutes;
    _Bool _pauseTimerAtZero;
    NSDate *_date;
    NSDate *_relativeDate;
    unsigned long long _calendarUnits;
    long long _relativeDateStyle;
    NSDateComponentsFormatter *_formatter;
}

+ (_Bool)_configureFormatter:(id)arg1 fallbackIndex:(unsigned long long)arg2 style:(long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool pauseTimerAtZero; // @synthesize pauseTimerAtZero=_pauseTimerAtZero;
@property(nonatomic) _Bool showLeadingMinutes; // @synthesize showLeadingMinutes=_showLeadingMinutes;
@property(nonatomic) _Bool wantsSubseconds; // @synthesize wantsSubseconds=_wantsSubseconds;
@property(nonatomic) _Bool twoDigitMinuteZeroPadding; // @synthesize twoDigitMinuteZeroPadding=_twoDigitMinuteZeroPadding;
@property(nonatomic) _Bool disableOffsetPrefix; // @synthesize disableOffsetPrefix=_disableOffsetPrefix;
@property(retain, nonatomic) NSDateComponentsFormatter *formatter; // @synthesize formatter=_formatter;
@property(nonatomic) long long relativeDateStyle; // @synthesize relativeDateStyle=_relativeDateStyle;
@property(nonatomic) unsigned long long calendarUnits; // @synthesize calendarUnits=_calendarUnits;
@property(retain, nonatomic) NSDate *relativeDate; // @synthesize relativeDate=_relativeDate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (long long)_updateFrequency;
- (_Bool)_timerIsPausedAtZero;
- (id)_signPrefixString;
- (long long)_timePeriodForElapsedTime:(double)arg1;
- (id)_componentsForDate:(id)arg1 visibleUnits:(unsigned long long *)arg2;
- (void)_configureFormatterForTimerStyle;
- (id)_sessionTextForIndex:(long long)arg1;
- (id)formattedString;
- (void)_endSession;
- (void)_startSessionWithDate:(id)arg1;
- (id)initWithDate:(id)arg1 relativeToDate:(id)arg2 units:(unsigned long long)arg3 style:(long long)arg4 calendar:(id)arg5 locale:(id)arg6;
- (id)initWithDate:(id)arg1 units:(unsigned long long)arg2 style:(long long)arg3 calendar:(id)arg4 locale:(id)arg5;

@end
