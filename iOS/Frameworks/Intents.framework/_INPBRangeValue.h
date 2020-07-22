//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBValueMetadata;

@interface _INPBRangeValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _length;
    unsigned long long _location;
    _INPBValueMetadata *_valueMetadata;
    struct {
        unsigned int length:1;
        unsigned int location:1;
    } _has;
}

+ (id)options;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(nonatomic) unsigned long long location; // @synthesize location=_location;
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
@property(nonatomic) _Bool hasLength;
@property(nonatomic) _Bool hasLocation;
@property(readonly, nonatomic) _Bool hasValueMetadata;

@end

