//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEONetworkSessionTaskTransactionMetrics, NSString, PBDataReader;

@interface GEOLogMsgEventNetwork : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_manifestEnv;
    NSString *_requestAppIdentifier;
    double _requestEnd;
    long long _requestErrorCode;
    NSString *_requestErrorDescription;
    NSString *_requestErrorDomain;
    double _requestStart;
    NSString *_serviceIpAddress;
    GEONetworkSessionTaskTransactionMetrics *_taskMetrics;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _decodeTime;
    int _httpResponseCode;
    int _mptcpServiceType;
    int _networkService;
    int _queuedTime;
    int _redirectCount;
    int _requestDataSize;
    int _responseDataSize;
    unsigned int _tilesetId;
    int _totalTime;
    _Bool _mptcpNegotiated;
    _Bool _rnfTriggered;
    struct {
        unsigned int has_requestEnd:1;
        unsigned int has_requestErrorCode:1;
        unsigned int has_requestStart:1;
        unsigned int has_decodeTime:1;
        unsigned int has_httpResponseCode:1;
        unsigned int has_mptcpServiceType:1;
        unsigned int has_networkService:1;
        unsigned int has_queuedTime:1;
        unsigned int has_redirectCount:1;
        unsigned int has_requestDataSize:1;
        unsigned int has_responseDataSize:1;
        unsigned int has_tilesetId:1;
        unsigned int has_totalTime:1;
        unsigned int has_mptcpNegotiated:1;
        unsigned int has_rnfTriggered:1;
        unsigned int read_manifestEnv:1;
        unsigned int read_requestAppIdentifier:1;
        unsigned int read_requestErrorDescription:1;
        unsigned int read_requestErrorDomain:1;
        unsigned int read_serviceIpAddress:1;
        unsigned int read_taskMetrics:1;
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
@property(retain, nonatomic) GEONetworkSessionTaskTransactionMetrics *taskMetrics;
@property(readonly, nonatomic) _Bool hasTaskMetrics;
@property(nonatomic) _Bool hasRnfTriggered;
@property(nonatomic) _Bool rnfTriggered;
@property(retain, nonatomic) NSString *serviceIpAddress;
@property(readonly, nonatomic) _Bool hasServiceIpAddress;
@property(nonatomic) _Bool hasMptcpNegotiated;
@property(nonatomic) _Bool mptcpNegotiated;
- (int)StringAsMptcpServiceType:(id)arg1;
- (id)mptcpServiceTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMptcpServiceType;
@property(nonatomic) int mptcpServiceType;
@property(nonatomic) _Bool hasTilesetId;
@property(nonatomic) unsigned int tilesetId;
@property(retain, nonatomic) NSString *manifestEnv;
@property(readonly, nonatomic) _Bool hasManifestEnv;
@property(nonatomic) _Bool hasRedirectCount;
@property(nonatomic) int redirectCount;
@property(nonatomic) _Bool hasRequestEnd;
@property(nonatomic) double requestEnd;
@property(nonatomic) _Bool hasRequestStart;
@property(nonatomic) double requestStart;
@property(nonatomic) _Bool hasDecodeTime;
@property(nonatomic) int decodeTime;
@property(nonatomic) _Bool hasHttpResponseCode;
@property(nonatomic) int httpResponseCode;
@property(nonatomic) _Bool hasTotalTime;
@property(nonatomic) int totalTime;
@property(nonatomic) _Bool hasQueuedTime;
@property(nonatomic) int queuedTime;
@property(retain, nonatomic) NSString *requestAppIdentifier;
@property(readonly, nonatomic) _Bool hasRequestAppIdentifier;
@property(retain, nonatomic) NSString *requestErrorDescription;
@property(readonly, nonatomic) _Bool hasRequestErrorDescription;
@property(nonatomic) _Bool hasRequestErrorCode;
@property(nonatomic) long long requestErrorCode;
@property(retain, nonatomic) NSString *requestErrorDomain;
@property(readonly, nonatomic) _Bool hasRequestErrorDomain;
@property(nonatomic) _Bool hasResponseDataSize;
@property(nonatomic) int responseDataSize;
@property(nonatomic) _Bool hasRequestDataSize;
@property(nonatomic) int requestDataSize;
- (int)StringAsNetworkService:(id)arg1;
- (id)networkServiceAsString:(int)arg1;
@property(nonatomic) _Bool hasNetworkService;
@property(nonatomic) int networkService;
- (id)initWithData:(id)arg1;
- (id)init;

@end
