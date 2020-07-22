//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <CalendarDatabase/NSCopying-Protocol.h>

@interface CDBRecurrenceDayOfWeek : NSObject <NSCopying>
{
    long long _dayOfTheWeek;
    long long _weekNumber;
}

+ (id)dayOfWeek:(long long)arg1 weekNumber:(long long)arg2;
+ (id)dayOfWeek:(long long)arg1;
@property(readonly, nonatomic) long long weekNumber; // @synthesize weekNumber=_weekNumber;
@property(readonly, nonatomic) long long dayOfTheWeek; // @synthesize dayOfTheWeek=_dayOfTheWeek;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)iCalendarDescription;
- (id)iCalendarValueFromDayOfTheWeek:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDayOfTheWeek:(long long)arg1 weekNumber:(long long)arg2;

@end

