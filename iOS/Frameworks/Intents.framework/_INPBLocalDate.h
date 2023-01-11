//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBLocalDate-Protocol.h>

@class NSString;

@interface _INPBLocalDate : PBCodable <_INPBLocalDate, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int dayOfMonth:1;
        unsigned int dayOfWeek:1;
        unsigned int month:1;
        unsigned int year:1;
    } _has;
    int _dayOfWeek;
    long long _dayOfMonth;
    long long _month;
    long long _year;
}

@property(nonatomic) long long year; // @synthesize year=_year;
@property(nonatomic) long long month; // @synthesize month=_month;
@property(nonatomic) int dayOfWeek; // @synthesize dayOfWeek=_dayOfWeek;
@property(nonatomic) long long dayOfMonth; // @synthesize dayOfMonth=_dayOfMonth;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasYear;
@property(nonatomic) _Bool hasMonth;
- (int)StringAsDayOfWeek:(id)arg1;
- (id)dayOfWeekAsString:(int)arg1;
@property(nonatomic) _Bool hasDayOfWeek;
@property(nonatomic) _Bool hasDayOfMonth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

