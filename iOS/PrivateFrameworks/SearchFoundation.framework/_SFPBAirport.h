//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBAirport-Protocol.h>

@class NSData, NSString, _SFPBLatLng, _SFPBTimeZone;

@interface _SFPBAirport : PBCodable <_SFPBAirport, NSSecureCoding>
{
    NSString *_code;
    _SFPBTimeZone *_timezone;
    _SFPBLatLng *_location;
    NSString *_city;
    NSString *_street;
    NSString *_district;
    NSString *_state;
    NSString *_postalCode;
    NSString *_countryCode;
    NSString *_country;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *district; // @synthesize district=_district;
@property(copy, nonatomic) NSString *street; // @synthesize street=_street;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) _SFPBLatLng *location; // @synthesize location=_location;
@property(retain, nonatomic) _SFPBTimeZone *timezone; // @synthesize timezone=_timezone;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

