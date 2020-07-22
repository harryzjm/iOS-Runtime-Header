//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/NSCopying-Protocol.h>

@class NSString;

@interface STAlarm <NSCopying>
{
    _Bool _enabled;
    long long _daysOfWeek;
    long long _hourOfDay;
    long long _minuteOfHour;
    NSString *_label;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) long long minuteOfHour; // @synthesize minuteOfHour=_minuteOfHour;
@property(nonatomic) long long hourOfDay; // @synthesize hourOfDay=_hourOfDay;
@property(nonatomic) long long daysOfWeek; // @synthesize daysOfWeek=_daysOfWeek;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

