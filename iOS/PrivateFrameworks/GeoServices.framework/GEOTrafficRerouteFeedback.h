//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSMutableArray, PBDataReader;

@interface GEOTrafficRerouteFeedback : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSData *_oldRouteID;
    NSMutableArray *_oldRouteIncidents;
    NSData *_reroutedRouteID;
    NSData *_responseId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _actionType;
    int _alertType;
    unsigned int _oldRouteHistoricTravelTime;
    unsigned int _oldRouteTravelTime;
    int _rerouteType;
    unsigned int _reroutedRouteHistoricTravelTime;
    unsigned int _reroutedRouteTravelTime;
    _Bool _backgrounded;
    struct {
        unsigned int has_actionType:1;
        unsigned int has_alertType:1;
        unsigned int has_oldRouteHistoricTravelTime:1;
        unsigned int has_oldRouteTravelTime:1;
        unsigned int has_rerouteType:1;
        unsigned int has_reroutedRouteHistoricTravelTime:1;
        unsigned int has_reroutedRouteTravelTime:1;
        unsigned int has_backgrounded:1;
        unsigned int read_oldRouteID:1;
        unsigned int read_oldRouteIncidents:1;
        unsigned int read_reroutedRouteID:1;
        unsigned int read_responseId:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)oldRouteIncidentsType;
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
@property(retain, nonatomic) NSData *responseId;
@property(readonly, nonatomic) _Bool hasResponseId;
- (int)StringAsRerouteType:(id)arg1;
- (id)rerouteTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasRerouteType;
@property(nonatomic) int rerouteType;
@property(nonatomic) _Bool hasBackgrounded;
@property(nonatomic) _Bool backgrounded;
- (int)StringAsAlertType:(id)arg1;
- (id)alertTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasAlertType;
@property(nonatomic) int alertType;
- (int)StringAsActionType:(id)arg1;
- (id)actionTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasActionType;
@property(nonatomic) int actionType;
@property(retain, nonatomic) NSData *reroutedRouteID;
@property(readonly, nonatomic) _Bool hasReroutedRouteID;
@property(retain, nonatomic) NSData *oldRouteID;
@property(readonly, nonatomic) _Bool hasOldRouteID;
- (id)oldRouteIncidentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)oldRouteIncidentsCount;
- (void)addOldRouteIncidents:(id)arg1;
- (void)clearOldRouteIncidents;
@property(retain, nonatomic) NSMutableArray *oldRouteIncidents;
@property(nonatomic) _Bool hasReroutedRouteHistoricTravelTime;
@property(nonatomic) unsigned int reroutedRouteHistoricTravelTime;
@property(nonatomic) _Bool hasOldRouteHistoricTravelTime;
@property(nonatomic) unsigned int oldRouteHistoricTravelTime;
@property(nonatomic) _Bool hasReroutedRouteTravelTime;
@property(nonatomic) unsigned int reroutedRouteTravelTime;
@property(nonatomic) _Bool hasOldRouteTravelTime;
@property(nonatomic) unsigned int oldRouteTravelTime;
- (id)initWithData:(id)arg1;
- (id)init;

@end
