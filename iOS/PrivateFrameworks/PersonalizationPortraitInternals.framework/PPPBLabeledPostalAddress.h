//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPPBLabeledPostalAddress : PBCodable <NSCopying>
{
    NSString *_city;
    NSString *_country;
    NSString *_isoCountryCode;
    NSString *_label;
    NSString *_postalCode;
    NSString *_state;
    NSString *_street;
    NSString *_subAdministrativeArea;
    NSString *_subLocality;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *subAdministrativeArea; // @synthesize subAdministrativeArea=_subAdministrativeArea;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *subLocality; // @synthesize subLocality=_subLocality;
@property(retain, nonatomic) NSString *street; // @synthesize street=_street;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasIsoCountryCode;
@property(readonly, nonatomic) _Bool hasCountry;
@property(readonly, nonatomic) _Bool hasPostalCode;
@property(readonly, nonatomic) _Bool hasState;
@property(readonly, nonatomic) _Bool hasSubAdministrativeArea;
@property(readonly, nonatomic) _Bool hasCity;
@property(readonly, nonatomic) _Bool hasSubLocality;
@property(readonly, nonatomic) _Bool hasStreet;
@property(readonly, nonatomic) _Bool hasLabel;

@end
