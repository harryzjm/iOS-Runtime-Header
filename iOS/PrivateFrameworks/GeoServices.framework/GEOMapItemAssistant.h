//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOAddressObject, GEOLocation, GEOPlace, NSDictionary, NSString, NSURL;

@interface GEOMapItemAssistant
{
    GEOLocation *_location;
    NSDictionary *_addressDictionary;
    NSString *_name;
    NSURL *_businessURL;
    NSString *_phoneNumber;
    unsigned long long _muid;
    NSString *_attributionID;
    unsigned int _sampleSizeForUserRatingScore;
    float _normalizedUserRatingScore;
    GEOPlace *_place;
    GEOAddressObject *_addressObject;
}

- (void).cxx_destruct;
- (id)weatherDisplayName;
- (id)addressObject;
- (float)_normalizedUserRatingScore;
- (unsigned int)_sampleSizeForUserRatingScore;
- (_Bool)_hasUserRatingScore;
- (id)_businessURL;
- (unsigned long long)_muid;
- (_Bool)_hasMUID;
- (id)geoAddress;
- (id)_place;
- (_Bool)_responseStatusIsIncomplete;
- (_Bool)_hasResolvablePartialInformation;
- (id)addressDictionary;
- (CDStruct_c3b9c2ee)coordinate;
- (id)name;
- (_Bool)isValid;
- (id)description;
- (id)initWithWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 sessionID:(id)arg6 muid:(unsigned long long)arg7 attributionID:(id)arg8 sampleSizeForUserRatingScore:(unsigned int)arg9 normalizedUserRatingScore:(float)arg10;

@end
