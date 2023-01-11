//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOCompanionCompatibility-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOPBTransitRoutingIncidentMessage, GEOTransitEngineDebugData, GEOTransitRouteDisplayStrings, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOTransitSuggestedRoute : PBCodable <GEOCompanionCompatibility, NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _routeBadges;
    GEOTransitRouteDisplayStrings *_displayStrings;
    GEOTransitEngineDebugData *_engineDebugData;
    NSData *_routeHandle;
    NSMutableArray *_routePlanningArtworks;
    NSMutableArray *_sectionOptions;
    NSMutableArray *_sections;
    NSMutableArray *_steps;
    GEOPBTransitRoutingIncidentMessage *_transitIncidentMessage;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _absEndTime;
    unsigned int _absStartTime;
    unsigned int _rank;
    unsigned int _travelTimeAggressiveEstimate;
    unsigned int _travelTimeConservativeEstimate;
    _Bool _supportsRouteUpdates;
    struct {
        unsigned int has_absEndTime:1;
        unsigned int has_absStartTime:1;
        unsigned int has_rank:1;
        unsigned int has_travelTimeAggressiveEstimate:1;
        unsigned int has_travelTimeConservativeEstimate:1;
        unsigned int has_supportsRouteUpdates:1;
        unsigned int read_unknownFields:1;
        unsigned int read_routeBadges:1;
        unsigned int read_displayStrings:1;
        unsigned int read_engineDebugData:1;
        unsigned int read_routeHandle:1;
        unsigned int read_routePlanningArtworks:1;
        unsigned int read_sectionOptions:1;
        unsigned int read_sections:1;
        unsigned int read_steps:1;
        unsigned int read_transitIncidentMessage:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)sectionType;
+ (Class)sectionOptionType;
+ (Class)routePlanningArtworkType;
+ (Class)stepsType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
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
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasSupportsRouteUpdates;
@property(nonatomic) _Bool supportsRouteUpdates;
@property(retain, nonatomic) GEOTransitEngineDebugData *engineDebugData;
@property(readonly, nonatomic) _Bool hasEngineDebugData;
@property(nonatomic) _Bool hasTravelTimeConservativeEstimate;
@property(nonatomic) unsigned int travelTimeConservativeEstimate;
@property(nonatomic) _Bool hasTravelTimeAggressiveEstimate;
@property(nonatomic) unsigned int travelTimeAggressiveEstimate;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)addSection:(id)arg1;
- (void)clearSections;
@property(retain, nonatomic) NSMutableArray *sections;
- (id)sectionOptionAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionOptionsCount;
- (void)addSectionOption:(id)arg1;
- (void)clearSectionOptions;
@property(retain, nonatomic) NSMutableArray *sectionOptions;
- (int)StringAsRouteBadges:(id)arg1;
- (id)routeBadgesAsString:(int)arg1;
- (void)setRouteBadges:(int *)arg1 count:(unsigned long long)arg2;
- (int)routeBadgeAtIndex:(unsigned long long)arg1;
- (void)addRouteBadge:(int)arg1;
- (void)clearRouteBadges;
@property(readonly, nonatomic) int *routeBadges;
@property(readonly, nonatomic) unsigned long long routeBadgesCount;
@property(retain, nonatomic) GEOTransitRouteDisplayStrings *displayStrings;
@property(readonly, nonatomic) _Bool hasDisplayStrings;
- (id)routePlanningArtworkAtIndex:(unsigned long long)arg1;
- (unsigned long long)routePlanningArtworksCount;
- (void)addRoutePlanningArtwork:(id)arg1;
- (void)clearRoutePlanningArtworks;
@property(retain, nonatomic) NSMutableArray *routePlanningArtworks;
@property(retain, nonatomic) GEOPBTransitRoutingIncidentMessage *transitIncidentMessage;
@property(readonly, nonatomic) _Bool hasTransitIncidentMessage;
@property(nonatomic) _Bool hasRank;
@property(nonatomic) unsigned int rank;
@property(retain, nonatomic) NSData *routeHandle;
@property(readonly, nonatomic) _Bool hasRouteHandle;
- (id)stepsAtIndex:(unsigned long long)arg1;
- (unsigned long long)stepsCount;
- (void)addSteps:(id)arg1;
- (void)clearSteps;
@property(retain, nonatomic) NSMutableArray *steps;
@property(nonatomic) _Bool hasAbsEndTime;
@property(nonatomic) unsigned int absEndTime;
@property(nonatomic) _Bool hasAbsStartTime;
@property(nonatomic) unsigned int absStartTime;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)instanceCompatibleWithProtocolVersion:(unsigned long long)arg1;
- (id)nextOptionForOption:(id)arg1 withRideIndex:(unsigned long long)arg2;
@property(readonly, nonatomic, getter=isWalkingOnlyRoute) _Bool walkingOnlyRoute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
