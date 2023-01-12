//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDate;

__attribute__((visibility("hidden")))
@interface _HKDateCalendarUnitKey : NSObject
{
    NSDate *_date;
    NSCalendar *_calendar;
    unsigned long long _calendarUnit;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long calendarUnit; // @synthesize calendarUnit=_calendarUnit;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDate:(id)arg1 calendar:(id)arg2 unit:(unsigned long long)arg3;

@end

