//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBValueMetadata;

@interface _INPBTemperatureValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _magnitude;
    int _unit;
    _INPBValueMetadata *_valueMetadata;
    CDStruct_74078a21 _has;
}

+ (id)options;
@property(nonatomic) double magnitude; // @synthesize magnitude=_magnitude;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
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
- (int)StringAsUnit:(id)arg1;
- (id)unitAsString:(int)arg1;
@property(nonatomic) _Bool hasUnit;
@property(nonatomic) int unit; // @synthesize unit=_unit;
@property(nonatomic) _Bool hasMagnitude;
@property(readonly, nonatomic) _Bool hasValueMetadata;

@end

