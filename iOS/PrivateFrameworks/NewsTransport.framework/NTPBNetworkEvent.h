//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBNetworkEvent : PBCodable <NSCopying>
{
    unsigned long long _cacheState;
    unsigned long long _connectDuration;
    unsigned long long _dnsDuration;
    unsigned long long _errorCode;
    unsigned long long _httpStatusCode;
    unsigned long long _requestDuration;
    unsigned long long _responseDuration;
    unsigned long long _responseSize;
    unsigned long long _sessionID;
    unsigned long long _startTime;
    unsigned long long _type;
    NSString *_requestUUID;
    NSString *_respondingPOP;
    NSString *_url;
    struct {
        unsigned int cacheState:1;
        unsigned int connectDuration:1;
        unsigned int dnsDuration:1;
        unsigned int errorCode:1;
        unsigned int httpStatusCode:1;
        unsigned int requestDuration:1;
        unsigned int responseDuration:1;
        unsigned int responseSize:1;
        unsigned int sessionID:1;
        unsigned int startTime:1;
        unsigned int type:1;
    } _has;
}

@property(nonatomic) unsigned long long sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSString *respondingPOP; // @synthesize respondingPOP=_respondingPOP;
@property(retain, nonatomic) NSString *requestUUID; // @synthesize requestUUID=_requestUUID;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned long long httpStatusCode; // @synthesize httpStatusCode=_httpStatusCode;
@property(nonatomic) unsigned long long cacheState; // @synthesize cacheState=_cacheState;
@property(nonatomic) unsigned long long responseSize; // @synthesize responseSize=_responseSize;
@property(nonatomic) unsigned long long responseDuration; // @synthesize responseDuration=_responseDuration;
@property(nonatomic) unsigned long long requestDuration; // @synthesize requestDuration=_requestDuration;
@property(nonatomic) unsigned long long connectDuration; // @synthesize connectDuration=_connectDuration;
@property(nonatomic) unsigned long long dnsDuration; // @synthesize dnsDuration=_dnsDuration;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSessionID;
@property(readonly, nonatomic) _Bool hasRespondingPOP;
@property(readonly, nonatomic) _Bool hasRequestUUID;
@property(readonly, nonatomic) _Bool hasUrl;
@property(nonatomic) _Bool hasType;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasHttpStatusCode;
@property(nonatomic) _Bool hasCacheState;
@property(nonatomic) _Bool hasResponseSize;
@property(nonatomic) _Bool hasResponseDuration;
@property(nonatomic) _Bool hasRequestDuration;
@property(nonatomic) _Bool hasConnectDuration;
@property(nonatomic) _Bool hasDnsDuration;
@property(nonatomic) _Bool hasStartTime;
- (void)dealloc;

@end
