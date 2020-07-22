//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface _INPBContactHandle : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_label;
    int _type;
    NSString *_value;
    CDStruct_f953fb60 _has;
}

+ (id)options;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
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
@property(readonly, nonatomic) _Bool hasLabel;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool hasValue;

@end

