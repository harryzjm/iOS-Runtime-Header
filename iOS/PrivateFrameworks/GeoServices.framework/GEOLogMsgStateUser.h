//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEOLogMsgStateUser : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_homeCountryCode;
    NSString *_homeMetroRegion;
    double _mapsUseLastDate;
    double _mapsUseStartDate;
    double _syncFirstTimestamp;
    double _syncLastTimestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _isTourist;
    struct {
        unsigned int has_mapsUseLastDate:1;
        unsigned int has_mapsUseStartDate:1;
        unsigned int has_syncFirstTimestamp:1;
        unsigned int has_syncLastTimestamp:1;
        unsigned int has_isTourist:1;
        unsigned int read_homeCountryCode:1;
        unsigned int read_homeMetroRegion:1;
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
@property(nonatomic) _Bool hasIsTourist;
@property(nonatomic) _Bool isTourist;
@property(retain, nonatomic) NSString *homeMetroRegion;
@property(readonly, nonatomic) _Bool hasHomeMetroRegion;
@property(retain, nonatomic) NSString *homeCountryCode;
@property(readonly, nonatomic) _Bool hasHomeCountryCode;
@property(nonatomic) _Bool hasMapsUseLastDate;
@property(nonatomic) double mapsUseLastDate;
@property(nonatomic) _Bool hasMapsUseStartDate;
@property(nonatomic) double mapsUseStartDate;
@property(nonatomic) _Bool hasSyncLastTimestamp;
@property(nonatomic) double syncLastTimestamp;
@property(nonatomic) _Bool hasSyncFirstTimestamp;
@property(nonatomic) double syncFirstTimestamp;
- (id)initWithData:(id)arg1;
- (id)init;

@end
