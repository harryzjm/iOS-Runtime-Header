//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOETAServiceResponseSummary, GEOPDDatasetABStatus, NSData, NSMutableArray;

@interface GEOETATrafficUpdateResponse : PBCodable <NSCopying>
{
    unsigned long long _debugServerLatencyMs;
    NSMutableArray *_cameras;
    GEOPDDatasetABStatus *_datasetAbStatus;
    GEOETAServiceResponseSummary *_etaServiceSummary;
    NSData *_responseId;
    NSMutableArray *_routes;
    NSData *_sessionState;
    int _status;
    CDStruct_00a28cb6 _has;
}

+ (Class)cameraType;
+ (Class)routeType;
@property(retain, nonatomic) NSData *responseId; // @synthesize responseId=_responseId;
@property(retain, nonatomic) NSMutableArray *cameras; // @synthesize cameras=_cameras;
@property(retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus; // @synthesize datasetAbStatus=_datasetAbStatus;
@property(retain, nonatomic) NSData *sessionState; // @synthesize sessionState=_sessionState;
@property(retain, nonatomic) NSMutableArray *routes; // @synthesize routes=_routes;
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
@property(readonly, nonatomic) _Bool hasResponseId;
- (id)cameraAtIndex:(unsigned long long)arg1;
- (unsigned long long)camerasCount;
- (void)addCamera:(id)arg1;
- (void)clearCameras;
@property(readonly, nonatomic) _Bool hasDatasetAbStatus;
@property(readonly, nonatomic) _Bool hasSessionState;
- (id)routeAtIndex:(unsigned long long)arg1;
- (unsigned long long)routesCount;
- (void)addRoute:(id)arg1;
- (void)clearRoutes;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) _Bool hasDebugServerLatencyMs;
@property(nonatomic) unsigned long long debugServerLatencyMs;
@property(retain, nonatomic) GEOETAServiceResponseSummary *etaServiceSummary;
@property(readonly, nonatomic) _Bool hasEtaServiceSummary;

@end
