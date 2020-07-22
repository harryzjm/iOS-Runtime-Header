//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface _INPBLocalDate : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    long long _dayOfMonth;
    long long _month;
    long long _year;
    int _dayOfWeek;
    struct {
        unsigned int dayOfMonth:1;
        unsigned int month:1;
        unsigned int year:1;
        unsigned int dayOfWeek:1;
    } _has;
}

+ (id)options;
@property(nonatomic) long long dayOfMonth; // @synthesize dayOfMonth=_dayOfMonth;
@property(nonatomic) long long month; // @synthesize month=_month;
@property(nonatomic) long long year; // @synthesize year=_year;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsDayOfWeek:(id)arg1;
- (id)dayOfWeekAsString:(int)arg1;
@property(nonatomic) _Bool hasDayOfWeek;
@property(nonatomic) int dayOfWeek; // @synthesize dayOfWeek=_dayOfWeek;
@property(nonatomic) _Bool hasDayOfMonth;
@property(nonatomic) _Bool hasMonth;
@property(nonatomic) _Bool hasYear;

@end

