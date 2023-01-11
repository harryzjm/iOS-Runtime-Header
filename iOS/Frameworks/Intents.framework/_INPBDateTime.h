//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBDateTime-Protocol.h>

@class NSString, _INPBLocalDate, _INPBLocalTime;

@interface _INPBDateTime : PBCodable <_INPBDateTime, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int calendarSystem:1;
    } _has;
    int _calendarSystem;
    _INPBLocalDate *_date;
    _INPBLocalTime *_time;
    NSString *_timeZoneID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *timeZoneID; // @synthesize timeZoneID=_timeZoneID;
@property(retain, nonatomic) _INPBLocalTime *time; // @synthesize time=_time;
@property(retain, nonatomic) _INPBLocalDate *date; // @synthesize date=_date;
@property(nonatomic) int calendarSystem; // @synthesize calendarSystem=_calendarSystem;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasTimeZoneID;
@property(readonly, nonatomic) _Bool hasTime;
@property(readonly, nonatomic) _Bool hasDate;
- (int)StringAsCalendarSystem:(id)arg1;
- (id)calendarSystemAsString:(int)arg1;
@property(nonatomic) _Bool hasCalendarSystem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
