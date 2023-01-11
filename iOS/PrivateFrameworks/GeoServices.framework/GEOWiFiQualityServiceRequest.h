//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDClientMetadata, NSMutableArray, PBDataReader;

@interface GEOWiFiQualityServiceRequest : PBRequest <NSCopying>
{
    PBDataReader *_reader;
    GEOPDClientMetadata *_clientMetadata;
    NSMutableArray *_locationSearches;
    NSMutableArray *_networkSearches;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_clientMetadata:1;
        unsigned int read_locationSearches:1;
        unsigned int read_networkSearches:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)networkSearchesType;
+ (Class)locationSearchesType;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (id)networkSearchesAtIndex:(unsigned long long)arg1;
- (unsigned long long)networkSearchesCount;
- (void)addNetworkSearches:(id)arg1;
- (void)clearNetworkSearches;
@property(retain, nonatomic) NSMutableArray *networkSearches;
- (id)locationSearchesAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationSearchesCount;
- (void)addLocationSearches:(id)arg1;
- (void)clearLocationSearches;
@property(retain, nonatomic) NSMutableArray *locationSearches;
@property(retain, nonatomic) GEOPDClientMetadata *clientMetadata;
@property(readonly, nonatomic) _Bool hasClientMetadata;
- (id)initWithData:(id)arg1;
- (id)init;

@end
