//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBIntentMetadata;

@interface _INPBSetDefrosterSettingsInCarIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _defroster;
    _INPBIntentMetadata *_intentMetadata;
    _Bool _enable;
    struct {
        unsigned int defroster:1;
        unsigned int enable:1;
    } _has;
}

+ (id)options;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
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
- (int)StringAsDefroster:(id)arg1;
- (id)defrosterAsString:(int)arg1;
@property(nonatomic) _Bool hasDefroster;
@property(nonatomic) int defroster; // @synthesize defroster=_defroster;
@property(nonatomic) _Bool hasEnable;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

@end
