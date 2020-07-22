//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSString, PBUnknownFields, _INPBDataString, _INPBValueMetadata;

@interface _INPBBillPayeeValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_accountNumber;
    _INPBDataString *_nickname;
    _INPBDataString *_organizationName;
    _INPBValueMetadata *_valueMetadata;
}

+ (id)options;
@property(retain, nonatomic) _INPBDataString *organizationName; // @synthesize organizationName=_organizationName;
@property(retain, nonatomic) NSString *accountNumber; // @synthesize accountNumber=_accountNumber;
@property(retain, nonatomic) _INPBDataString *nickname; // @synthesize nickname=_nickname;
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
@property(readonly, nonatomic) _Bool hasOrganizationName;
@property(readonly, nonatomic) _Bool hasAccountNumber;
@property(readonly, nonatomic) _Bool hasNickname;
@property(readonly, nonatomic) _Bool hasValueMetadata;

@end
