//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBPayloadConfirmation, _INPBPayloadNeedsDisambiguation, _INPBPayloadNeedsValue, _INPBPayloadSuccess, _INPBPayloadUnsupported;

@interface _INPBIntentSlotResolutionResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBPayloadConfirmation *_PayloadConfirmation;
    _INPBPayloadNeedsDisambiguation *_PayloadNeedsDisambiguation;
    _INPBPayloadNeedsValue *_PayloadNeedsValue;
    _INPBPayloadSuccess *_PayloadSuccess;
    _INPBPayloadUnsupported *_PayloadUnsupported;
    int _type;
    CDStruct_f953fb60 _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBPayloadConfirmation *PayloadConfirmation; // @synthesize PayloadConfirmation=_PayloadConfirmation;
@property(retain, nonatomic) _INPBPayloadNeedsDisambiguation *PayloadNeedsDisambiguation; // @synthesize PayloadNeedsDisambiguation=_PayloadNeedsDisambiguation;
@property(retain, nonatomic) _INPBPayloadNeedsValue *PayloadNeedsValue; // @synthesize PayloadNeedsValue=_PayloadNeedsValue;
@property(retain, nonatomic) _INPBPayloadUnsupported *PayloadUnsupported; // @synthesize PayloadUnsupported=_PayloadUnsupported;
@property(retain, nonatomic) _INPBPayloadSuccess *PayloadSuccess; // @synthesize PayloadSuccess=_PayloadSuccess;
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
@property(readonly, nonatomic) _Bool hasPayloadConfirmation;
@property(readonly, nonatomic) _Bool hasPayloadNeedsDisambiguation;
@property(readonly, nonatomic) _Bool hasPayloadNeedsValue;
@property(readonly, nonatomic) _Bool hasPayloadUnsupported;
@property(readonly, nonatomic) _Bool hasPayloadSuccess;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

