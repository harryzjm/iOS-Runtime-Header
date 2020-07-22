//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAnalyticMetadata, GEOPDClientMetadata, GEOPDPlaceRequestParameters, NSMutableArray, NSString, PBUnknownFields;

@interface GEOPDPlaceRequest : PBRequest <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDAnalyticMetadata *_analyticMetadata;
    GEOPDClientMetadata *_clientMetadata;
    NSMutableArray *_displayLanguages;
    NSString *_displayRegion;
    GEOPDPlaceRequestParameters *_placeRequestParameters;
    int _requestType;
    NSMutableArray *_requestedComponents;
    NSMutableArray *_spokenLanguages;
    _Bool _needLatency;
    _Bool _suppressResultsRequiringAttribution;
    struct {
        unsigned int requestType:1;
        unsigned int needLatency:1;
        unsigned int suppressResultsRequiringAttribution:1;
    } _has;
}

+ (Class)requestedComponentType;
+ (Class)spokenLanguageType;
+ (Class)displayLanguageType;
@property(retain, nonatomic) NSString *displayRegion; // @synthesize displayRegion=_displayRegion;
@property(retain, nonatomic) GEOPDPlaceRequestParameters *placeRequestParameters; // @synthesize placeRequestParameters=_placeRequestParameters;
@property(nonatomic) _Bool suppressResultsRequiringAttribution; // @synthesize suppressResultsRequiringAttribution=_suppressResultsRequiringAttribution;
@property(retain, nonatomic) NSMutableArray *requestedComponents; // @synthesize requestedComponents=_requestedComponents;
@property(retain, nonatomic) NSMutableArray *spokenLanguages; // @synthesize spokenLanguages=_spokenLanguages;
@property(retain, nonatomic) NSMutableArray *displayLanguages; // @synthesize displayLanguages=_displayLanguages;
@property(retain, nonatomic) GEOPDClientMetadata *clientMetadata; // @synthesize clientMetadata=_clientMetadata;
@property(retain, nonatomic) GEOPDAnalyticMetadata *analyticMetadata; // @synthesize analyticMetadata=_analyticMetadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
@property(readonly, nonatomic) _Bool hasDisplayRegion;
@property(readonly, nonatomic) _Bool hasPlaceRequestParameters;
- (int)StringAsRequestType:(id)arg1;
- (id)requestTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasRequestType;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
@property(nonatomic) _Bool hasSuppressResultsRequiringAttribution;
- (id)requestedComponentAtIndex:(unsigned long long)arg1;
- (unsigned long long)requestedComponentsCount;
- (void)addRequestedComponent:(id)arg1;
- (void)clearRequestedComponents;
- (id)spokenLanguageAtIndex:(unsigned long long)arg1;
- (unsigned long long)spokenLanguagesCount;
- (void)addSpokenLanguage:(id)arg1;
- (void)clearSpokenLanguages;
- (id)displayLanguageAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayLanguagesCount;
- (void)addDisplayLanguage:(id)arg1;
- (void)clearDisplayLanguages;
@property(readonly, nonatomic) _Bool hasClientMetadata;
@property(readonly, nonatomic) _Bool hasAnalyticMetadata;
@property(nonatomic) _Bool hasNeedLatency;
@property(nonatomic) _Bool needLatency;
- (int)resultProviderID;
- (_Bool)hasResultProviderID;
- (_Bool)isAlwaysCacheable;
- (_Bool)shouldConsiderCaching;
- (_Bool)isPlaceRefinementRequest;
- (_Bool)isMerchantRequest;
- (_Bool)isCanonicalLocationSearchRequest;
- (_Bool)isForwardGeocoderRequest;
- (id)initForDatasetCheckWithTraits:(id)arg1;
- (_Bool)isBrandLookupRequest;
- (id)initForGeoIpLookupWithIpAddress:(id)arg1 traits:(id)arg2;
- (id)initForWifiFingerprintLookupWithLocations:(id)arg1 wifiAccessPoints:(id)arg2 maxLabels:(unsigned int)arg3 traits:(id)arg4;
- (id)initForBrandLookupWithIMessageUid:(id)arg1 traits:(id)arg2;
- (id)initForNearestTransitStationWithLine:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 traits:(id)arg3;
- (id)initForSearchFieldPlaceholderWithTraits:(id)arg1;
- (id)initWithBatchPopularNearbySearchCategories:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithPopularNearbySearchCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithSearchCategory:(id)arg1 venueIdentifier:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithSearchCategory:(id)arg1 searchString:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithCategory:(id)arg1 routeInfo:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initForSpotlightCategoryListWithTraits:(id)arg1;
- (int)geoUserPreferredTransportType;
- (id)initForCategoryListWithTraits:(id)arg1;
- (id)initWithAutocompleteFragment:(id)arg1 type:(int)arg2 traits:(id)arg3 categoryFilter:(id)arg4;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithSearchURLQuery:(id)arg1 identifier:(id)arg2 resultProviderId:(int)arg3 contentProvider:(id)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 maxResults:(unsigned int)arg5 suppressResultsRequiringAttribution:(_Bool)arg6 traits:(id)arg7;
- (id)initWithCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2;
- (id)initWithBrandMUID:(unsigned long long)arg1 traits:(id)arg2;
- (id)initWithVendorSpecificPlaceRefinementParameters:(id)arg1 traits:(id)arg2;
- (id)initWithPlaceRefinementParameters:(id)arg1 traits:(id)arg2;
- (id)initWithMapItemToRefine:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 traits:(id)arg3;
- (id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithReverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 floorOrdinal:(int)arg2 includeEntryPoints:(_Bool)arg3 preserveOriginalLocation:(_Bool)arg4 traits:(id)arg5;
- (id)initWithReverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 includeEntryPoints:(_Bool)arg2 preserveOriginalLocation:(_Bool)arg3 traits:(id)arg4;
- (id)initWithExternalTransitStationCodes:(id)arg1 sourceID:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4 traits:(id)arg5;
- (id)initWithMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 paymentNetwork:(id)arg3 transactionDate:(id)arg4 transactionLocation:(id)arg5 traits:(id)arg6;
- (id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2 traits:(id)arg3;
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3;
- (id)initWithComponents:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 traits:(id)arg4;
- (id)initWithTraits:(id)arg1 count:(unsigned int)arg2 includeEntryPoints:(_Bool)arg3;
- (id)_initWithTraits:(id)arg1;
- (id)initForAutocompleteWithTraits:(id)arg1 count:(unsigned int)arg2;
- (void)addRequestedComponentIfNotNil:(id)arg1;
- (id)componentInfoWithType:(int)arg1 count:(unsigned int)arg2 traits:(id)arg3;

@end

