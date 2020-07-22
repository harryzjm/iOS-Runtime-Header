//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBDataString, _INPBIntentMetadata;

@interface _INPBSearchForAccountsIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBDataString *_accountNickname;
    int _accountType;
    _INPBIntentMetadata *_intentMetadata;
    _INPBDataString *_organizationName;
    int _requestedBalanceType;
    struct {
        unsigned int accountType:1;
        unsigned int requestedBalanceType:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBDataString *organizationName; // @synthesize organizationName=_organizationName;
@property(retain, nonatomic) _INPBDataString *accountNickname; // @synthesize accountNickname=_accountNickname;
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
- (int)StringAsRequestedBalanceType:(id)arg1;
- (id)requestedBalanceTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasRequestedBalanceType;
@property(nonatomic) int requestedBalanceType; // @synthesize requestedBalanceType=_requestedBalanceType;
@property(readonly, nonatomic) _Bool hasOrganizationName;
- (int)StringAsAccountType:(id)arg1;
- (id)accountTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasAccountType;
@property(nonatomic) int accountType; // @synthesize accountType=_accountType;
@property(readonly, nonatomic) _Bool hasAccountNickname;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

@end
