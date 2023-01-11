//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOETAServiceResponseSummary : PBCodable <NSCopying>
{
    struct GEOSessionID _responseUuid;
    NSMutableArray *_routeInfos;
    int _status;
    _Bool _resultsApplied;
    struct {
        unsigned int responseUuid:1;
        unsigned int status:1;
        unsigned int resultsApplied:1;
    } _has;
}

+ (Class)routeInfoType;
@property(retain, nonatomic) NSMutableArray *routeInfos; // @synthesize routeInfos=_routeInfos;
@property(nonatomic) struct GEOSessionID responseUuid; // @synthesize responseUuid=_responseUuid;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)routeInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)routeInfosCount;
- (void)addRouteInfo:(id)arg1;
- (void)clearRouteInfos;
@property(nonatomic) _Bool hasResponseUuid;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) _Bool hasResultsApplied;
@property(nonatomic) _Bool resultsApplied; // @synthesize resultsApplied=_resultsApplied;

@end

