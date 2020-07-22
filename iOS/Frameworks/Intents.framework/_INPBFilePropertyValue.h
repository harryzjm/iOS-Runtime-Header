//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBContact, _INPBDateTimeRange, _INPBLong, _INPBString;

@interface _INPBFilePropertyValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBDateTimeRange *_dateTime;
    int _fileType;
    _INPBContact *_person;
    _INPBLong *_quantity;
    _INPBString *_value;
    struct {
        unsigned int fileType:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBLong *quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) _INPBString *value; // @synthesize value=_value;
@property(retain, nonatomic) _INPBDateTimeRange *dateTime; // @synthesize dateTime=_dateTime;
@property(retain, nonatomic) _INPBContact *person; // @synthesize person=_person;
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
@property(readonly, nonatomic) _Bool hasQuantity;
- (int)StringAsFileType:(id)arg1;
- (id)fileTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFileType;
@property(nonatomic) int fileType; // @synthesize fileType=_fileType;
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasDateTime;
@property(readonly, nonatomic) _Bool hasPerson;

@end

