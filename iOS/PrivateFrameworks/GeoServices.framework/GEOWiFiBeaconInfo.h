//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSString, PBDataReader;

@interface GEOWiFiBeaconInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSData *_beaconInfo;
    NSString *_wpsConfigMethods;
    NSString *_wpsDeviceNameData;
    NSString *_wpsDeviceNameElement;
    NSString *_wpsManufacturerElement;
    NSString *_wpsModelName;
    NSString *_wpsModelNumber;
    NSString *_wpsPrimaryDeviceTypeCategory;
    NSString *_wpsPrimaryDeviceTypeSubCategory;
    NSString *_wpsResponseType;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_beaconInfo:1;
        unsigned int read_wpsConfigMethods:1;
        unsigned int read_wpsDeviceNameData:1;
        unsigned int read_wpsDeviceNameElement:1;
        unsigned int read_wpsManufacturerElement:1;
        unsigned int read_wpsModelName:1;
        unsigned int read_wpsModelNumber:1;
        unsigned int read_wpsPrimaryDeviceTypeCategory:1;
        unsigned int read_wpsPrimaryDeviceTypeSubCategory:1;
        unsigned int read_wpsResponseType:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *wpsConfigMethods;
@property(readonly, nonatomic) _Bool hasWpsConfigMethods;
@property(retain, nonatomic) NSString *wpsDeviceNameData;
@property(readonly, nonatomic) _Bool hasWpsDeviceNameData;
@property(retain, nonatomic) NSString *wpsDeviceNameElement;
@property(readonly, nonatomic) _Bool hasWpsDeviceNameElement;
@property(retain, nonatomic) NSString *wpsPrimaryDeviceTypeSubCategory;
@property(readonly, nonatomic) _Bool hasWpsPrimaryDeviceTypeSubCategory;
@property(retain, nonatomic) NSString *wpsPrimaryDeviceTypeCategory;
@property(readonly, nonatomic) _Bool hasWpsPrimaryDeviceTypeCategory;
@property(retain, nonatomic) NSString *wpsModelNumber;
@property(readonly, nonatomic) _Bool hasWpsModelNumber;
@property(retain, nonatomic) NSString *wpsModelName;
@property(readonly, nonatomic) _Bool hasWpsModelName;
@property(retain, nonatomic) NSString *wpsManufacturerElement;
@property(readonly, nonatomic) _Bool hasWpsManufacturerElement;
@property(retain, nonatomic) NSString *wpsResponseType;
@property(readonly, nonatomic) _Bool hasWpsResponseType;
@property(retain, nonatomic) NSData *beaconInfo;
@property(readonly, nonatomic) _Bool hasBeaconInfo;
- (id)initWithData:(id)arg1;
- (id)init;

@end
