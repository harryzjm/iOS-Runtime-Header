//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEODataSetURLOverride : PBCodable
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_addressCorrectionInitURL;
    NSString *_addressCorrectionUpdateURL;
    NSString *_announcementsURL;
    NSString *_batchReverseGeocoderURL;
    NSString *_businessPortalBaseURL;
    NSString *_directionsURL;
    NSString *_dispatcherURL;
    NSString *_etaURL;
    NSString *_logMessageUsageURL;
    NSString *_problemCategoriesURL;
    NSString *_problemOptInURL;
    NSString *_problemStatusURL;
    NSString *_problemSubmissionURL;
    NSString *_simpleETAURL;
    NSString *_spatialLookupURL;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _dataSet;
    struct {
        unsigned int has_dataSet:1;
        unsigned int read_unknownFields:1;
        unsigned int read_addressCorrectionInitURL:1;
        unsigned int read_addressCorrectionUpdateURL:1;
        unsigned int read_announcementsURL:1;
        unsigned int read_batchReverseGeocoderURL:1;
        unsigned int read_businessPortalBaseURL:1;
        unsigned int read_directionsURL:1;
        unsigned int read_dispatcherURL:1;
        unsigned int read_etaURL:1;
        unsigned int read_logMessageUsageURL:1;
        unsigned int read_problemCategoriesURL:1;
        unsigned int read_problemOptInURL:1;
        unsigned int read_problemStatusURL:1;
        unsigned int read_problemSubmissionURL:1;
        unsigned int read_simpleETAURL:1;
        unsigned int read_spatialLookupURL:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithData:(id)arg1;
- (id)init;

@end

