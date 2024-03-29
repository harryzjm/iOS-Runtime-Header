//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class BCSCallerIdLocalizedString, NSString;

__attribute__((visibility("hidden")))
@interface BCSCallerIdMessage : PBCodable
{
    long long _phoneHash;
    NSString *_businessId;
    NSString *_companyId;
    NSString *_conflatedMuid;
    BCSCallerIdLocalizedString *_intent;
    NSString *_locationId;
    NSString *_logoUrl;
    BCSCallerIdLocalizedString *_name;
    _Bool _isVerified;
    CDStruct_970aaa1e _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *conflatedMuid; // @synthesize conflatedMuid=_conflatedMuid;
@property(retain, nonatomic) BCSCallerIdLocalizedString *intent; // @synthesize intent=_intent;
@property(nonatomic) _Bool isVerified; // @synthesize isVerified=_isVerified;
@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(retain, nonatomic) BCSCallerIdLocalizedString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *locationId; // @synthesize locationId=_locationId;
@property(retain, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
@property(retain, nonatomic) NSString *companyId; // @synthesize companyId=_companyId;
@property(nonatomic) long long phoneHash; // @synthesize phoneHash=_phoneHash;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasConflatedMuid;
@property(readonly, nonatomic) _Bool hasIntent;
@property(nonatomic) _Bool hasIsVerified;
@property(readonly, nonatomic) _Bool hasLogoUrl;
@property(readonly, nonatomic) _Bool hasName;
@property(readonly, nonatomic) _Bool hasLocationId;
@property(readonly, nonatomic) _Bool hasBusinessId;
@property(readonly, nonatomic) _Bool hasCompanyId;
@property(nonatomic) _Bool hasPhoneHash;

@end

