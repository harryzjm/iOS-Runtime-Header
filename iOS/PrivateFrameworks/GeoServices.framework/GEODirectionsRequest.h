//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEOCommonOptions, GEODirectionsRequestFeedback, GEOLocation, GEOMapRegion, GEOOriginalRoute, GEOPDABClientDatasetMetadata, GEORouteAttributes, GEOTFTrafficSnapshot, NSData, NSMutableArray, NSString;

@interface GEODirectionsRequest : PBRequest <NSCopying>
{
    struct GEOSessionID _sessionID;
    double _requestTime;
    double _sessionRelativeTimestamp;
    GEOPDABClientDatasetMetadata *_abClientMetadata;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    GEOClientCapabilities *_clientCapabilities;
    GEOCommonOptions *_commonOptions;
    GEOMapRegion *_currentMapRegion;
    GEOLocation *_currentUserLocation;
    int _departureTime;
    NSMutableArray *_deviceHistoricalLocations;
    GEODirectionsRequestFeedback *_feedback;
    GEOLocation *_lastKnownRoadLocation;
    NSString *_loggedAbExperiment;
    unsigned int _mainTransportTypeMaxRouteCount;
    NSData *_nonRecommendedRoutesCache;
    int _nonRecommendedRoutesOption;
    NSData *_originalDirectionsResponseID;
    GEOOriginalRoute *_originalRoute;
    NSData *_originalRouteID;
    int _originalRoutePurpose;
    NSData *_originalRouteZilchPoints;
    int _requestMode;
    GEORouteAttributes *_routeAttributes;
    unsigned int _sequenceNumber;
    NSMutableArray *_serviceTags;
    NSData *_sessionState;
    unsigned int _timeSinceLastRerouteRequest;
    GEOTFTrafficSnapshot *_trafficSnapshot;
    NSMutableArray *_waypointTypeds;
    _Bool _getRouteForZilchPoints;
    _Bool _isFromAPI;
    _Bool _needLatency;
    _Bool _useLiveTrafficAsFallback;
    struct {
        unsigned int sessionID:1;
        unsigned int requestTime:1;
        unsigned int sessionRelativeTimestamp:1;
        unsigned int departureTime:1;
        unsigned int mainTransportTypeMaxRouteCount:1;
        unsigned int nonRecommendedRoutesOption:1;
        unsigned int originalRoutePurpose:1;
        unsigned int requestMode:1;
        unsigned int sequenceNumber:1;
        unsigned int timeSinceLastRerouteRequest:1;
        unsigned int getRouteForZilchPoints:1;
        unsigned int isFromAPI:1;
        unsigned int needLatency:1;
        unsigned int useLiveTrafficAsFallback:1;
    } _has;
}

+ (Class)serviceTagType;
+ (Class)deviceHistoricalLocationType;
+ (Class)waypointTypedType;
@property(retain, nonatomic) NSMutableArray *serviceTags; // @synthesize serviceTags=_serviceTags;
@property(retain, nonatomic) NSData *nonRecommendedRoutesCache; // @synthesize nonRecommendedRoutesCache=_nonRecommendedRoutesCache;
@property(retain, nonatomic) NSMutableArray *deviceHistoricalLocations; // @synthesize deviceHistoricalLocations=_deviceHistoricalLocations;
@property(retain, nonatomic) GEOPDABClientDatasetMetadata *abClientMetadata; // @synthesize abClientMetadata=_abClientMetadata;
@property(retain, nonatomic) GEOLocation *lastKnownRoadLocation; // @synthesize lastKnownRoadLocation=_lastKnownRoadLocation;
@property(retain, nonatomic) NSString *loggedAbExperiment; // @synthesize loggedAbExperiment=_loggedAbExperiment;
@property(retain, nonatomic) GEOCommonOptions *commonOptions; // @synthesize commonOptions=_commonOptions;
@property(nonatomic) _Bool isFromAPI; // @synthesize isFromAPI=_isFromAPI;
@property(retain, nonatomic) NSData *sessionState; // @synthesize sessionState=_sessionState;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) GEOOriginalRoute *originalRoute; // @synthesize originalRoute=_originalRoute;
@property(retain, nonatomic) NSMutableArray *waypointTypeds; // @synthesize waypointTypeds=_waypointTypeds;
@property(retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets; // @synthesize additionalEnabledMarkets=_additionalEnabledMarkets;
@property(retain, nonatomic) GEODirectionsRequestFeedback *feedback; // @synthesize feedback=_feedback;
@property(nonatomic) double sessionRelativeTimestamp; // @synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp;
@property(nonatomic) struct GEOSessionID sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) int departureTime; // @synthesize departureTime=_departureTime;
@property(retain, nonatomic) NSData *originalDirectionsResponseID; // @synthesize originalDirectionsResponseID=_originalDirectionsResponseID;
@property(retain, nonatomic) GEOClientCapabilities *clientCapabilities; // @synthesize clientCapabilities=_clientCapabilities;
@property(retain, nonatomic) NSData *originalRouteZilchPoints; // @synthesize originalRouteZilchPoints=_originalRouteZilchPoints;
@property(retain, nonatomic) NSData *originalRouteID; // @synthesize originalRouteID=_originalRouteID;
@property(retain, nonatomic) GEOMapRegion *currentMapRegion; // @synthesize currentMapRegion=_currentMapRegion;
@property(retain, nonatomic) GEOLocation *currentUserLocation; // @synthesize currentUserLocation=_currentUserLocation;
@property(retain, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
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
- (id)dictionaryRepresentation;
- (id)description;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceTagsCount;
- (void)addServiceTag:(id)arg1;
- (void)clearServiceTags;
@property(readonly, nonatomic) _Bool hasNonRecommendedRoutesCache;
- (int)StringAsNonRecommendedRoutesOption:(id)arg1;
- (id)nonRecommendedRoutesOptionAsString:(int)arg1;
@property(nonatomic) _Bool hasNonRecommendedRoutesOption;
@property(nonatomic) int nonRecommendedRoutesOption; // @synthesize nonRecommendedRoutesOption=_nonRecommendedRoutesOption;
- (id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)deviceHistoricalLocationsCount;
- (void)addDeviceHistoricalLocation:(id)arg1;
- (void)clearDeviceHistoricalLocations;
@property(readonly, nonatomic) _Bool hasAbClientMetadata;
- (int)StringAsOriginalRoutePurpose:(id)arg1;
- (id)originalRoutePurposeAsString:(int)arg1;
@property(nonatomic) _Bool hasOriginalRoutePurpose;
@property(nonatomic) int originalRoutePurpose; // @synthesize originalRoutePurpose=_originalRoutePurpose;
@property(readonly, nonatomic) _Bool hasLastKnownRoadLocation;
@property(readonly, nonatomic) _Bool hasLoggedAbExperiment;
@property(readonly, nonatomic) _Bool hasCommonOptions;
@property(nonatomic) _Bool hasIsFromAPI;
@property(readonly, nonatomic) _Bool hasSessionState;
@property(nonatomic) _Bool hasSequenceNumber;
@property(readonly, nonatomic) _Bool hasOriginalRoute;
- (id)waypointTypedAtIndex:(unsigned long long)arg1;
- (unsigned long long)waypointTypedsCount;
- (void)addWaypointTyped:(id)arg1;
- (void)clearWaypointTypeds;
@property(readonly, nonatomic) _Bool hasAdditionalEnabledMarkets;
@property(readonly, nonatomic) _Bool hasFeedback;
@property(nonatomic) _Bool hasSessionRelativeTimestamp;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasGetRouteForZilchPoints;
@property(nonatomic) _Bool getRouteForZilchPoints; // @synthesize getRouteForZilchPoints=_getRouteForZilchPoints;
@property(nonatomic) _Bool hasDepartureTime;
@property(readonly, nonatomic) _Bool hasOriginalDirectionsResponseID;
@property(readonly, nonatomic) _Bool hasClientCapabilities;
@property(nonatomic) _Bool hasTimeSinceLastRerouteRequest;
@property(nonatomic) unsigned int timeSinceLastRerouteRequest; // @synthesize timeSinceLastRerouteRequest=_timeSinceLastRerouteRequest;
@property(readonly, nonatomic) _Bool hasOriginalRouteZilchPoints;
@property(readonly, nonatomic) _Bool hasOriginalRouteID;
@property(readonly, nonatomic) _Bool hasCurrentMapRegion;
@property(readonly, nonatomic) _Bool hasCurrentUserLocation;
@property(nonatomic) _Bool hasMainTransportTypeMaxRouteCount;
@property(nonatomic) unsigned int mainTransportTypeMaxRouteCount; // @synthesize mainTransportTypeMaxRouteCount=_mainTransportTypeMaxRouteCount;
@property(readonly, nonatomic) _Bool hasRouteAttributes;
@property(nonatomic) _Bool hasUseLiveTrafficAsFallback;
@property(nonatomic) _Bool useLiveTrafficAsFallback;
@property(retain, nonatomic) GEOTFTrafficSnapshot *trafficSnapshot;
@property(readonly, nonatomic) _Bool hasTrafficSnapshot;
@property(nonatomic) _Bool hasNeedLatency;
@property(nonatomic) _Bool needLatency;
- (int)StringAsRequestMode:(id)arg1;
- (id)requestModeAsString:(int)arg1;
@property(nonatomic) _Bool hasRequestMode;
@property(nonatomic) int requestMode;
@property(nonatomic) _Bool hasRequestTime;
@property(nonatomic) double requestTime;
- (id)initWithFeedback:(id)arg1;
- (id)init;
- (id)initWithQuickETARequest:(id)arg1 withFeedback:(id)arg2;
- (void)clearLocations;
- (void)clearSessionId;

@end

