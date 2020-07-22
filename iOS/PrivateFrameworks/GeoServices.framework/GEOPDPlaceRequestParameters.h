//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAddressObjectGeocodingParameters, GEOPDAutocompleteParameters, GEOPDBatchPopularNearbySearchParameters, GEOPDBrandLookupParameters, GEOPDCanonicalLocationSearchParameters, GEOPDCategorySearchParameters, GEOPDClusterGeocodingParameters, GEOPDExternalTransitLookupParameters, GEOPDFeatureIdGeocodingParameters, GEOPDGeocodingParameters, GEOPDIpGeoLookupParameters, GEOPDLocationDirectedSearchParameters, GEOPDMapsIdentifierPlaceLookupParameters, GEOPDMerchantLookupParameters, GEOPDNearbySearchParameters, GEOPDPlaceLookupParameters, GEOPDPlaceRefinementParameters, GEOPDPopularNearbySearchParameters, GEOPDReverseGeocodingParameters, GEOPDSearchBrowseCategorySuggestionParameters, GEOPDSearchFieldPlaceholderParameters, GEOPDSearchParameters, GEOPDSearchZeroKeywordCategorySuggestionParameters, GEOPDSearchZeroKeywordWithSearchResultsSuggestionParameters, GEOPDSiriSearchParameters, GEOPDVendorSpecificPlaceRefinementParameters, GEOPDWifiFingerprintParameters, PBUnknownFields;

@interface GEOPDPlaceRequestParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDAddressObjectGeocodingParameters *_addressObjectGeocodingParameters;
    GEOPDAutocompleteParameters *_autocompleteParameters;
    GEOPDBatchPopularNearbySearchParameters *_batchPopularNearbySearchParameters;
    GEOPDBrandLookupParameters *_brandLookupParameters;
    GEOPDSearchBrowseCategorySuggestionParameters *_browseCategorySuggestionParameters;
    GEOPDCanonicalLocationSearchParameters *_canonicalLocationSearchParameters;
    GEOPDCategorySearchParameters *_categorySearchParameters;
    GEOPDClusterGeocodingParameters *_clusterGeocodingParameters;
    GEOPDExternalTransitLookupParameters *_externalTransitLookupParameters;
    GEOPDFeatureIdGeocodingParameters *_featureIdGeocodingParameters;
    GEOPDGeocodingParameters *_geocodingParameters;
    GEOPDIpGeoLookupParameters *_ipGeoLookupParameters;
    GEOPDLocationDirectedSearchParameters *_locationDirectedSearchParameters;
    GEOPDMapsIdentifierPlaceLookupParameters *_mapsIdentifierPlaceLookupParameters;
    GEOPDMerchantLookupParameters *_merchantLookupParameters;
    GEOPDNearbySearchParameters *_nearbySearchParameters;
    GEOPDPlaceLookupParameters *_placeLookupParameters;
    GEOPDPlaceRefinementParameters *_placeRefinementParameters;
    GEOPDPopularNearbySearchParameters *_popularNearbySearchParameters;
    GEOPDReverseGeocodingParameters *_reverseGeocodingParameters;
    GEOPDSearchFieldPlaceholderParameters *_searchFieldPlaceholderParameters;
    GEOPDSearchParameters *_searchParameters;
    GEOPDSearchZeroKeywordCategorySuggestionParameters *_searchZeroKeywordCategorySuggestionParameters;
    GEOPDSearchZeroKeywordWithSearchResultsSuggestionParameters *_searchZeroKeywordWithSearchResultsSuggestionParameters;
    GEOPDSiriSearchParameters *_siriSearchParameters;
    GEOPDVendorSpecificPlaceRefinementParameters *_vendorSpecificPlaceRefinementParameters;
    GEOPDWifiFingerprintParameters *_wifiFingerprintParameters;
}

@property(retain, nonatomic) GEOPDIpGeoLookupParameters *ipGeoLookupParameters; // @synthesize ipGeoLookupParameters=_ipGeoLookupParameters;
@property(retain, nonatomic) GEOPDWifiFingerprintParameters *wifiFingerprintParameters; // @synthesize wifiFingerprintParameters=_wifiFingerprintParameters;
@property(retain, nonatomic) GEOPDBrandLookupParameters *brandLookupParameters; // @synthesize brandLookupParameters=_brandLookupParameters;
@property(retain, nonatomic) GEOPDClusterGeocodingParameters *clusterGeocodingParameters; // @synthesize clusterGeocodingParameters=_clusterGeocodingParameters;
@property(retain, nonatomic) GEOPDMapsIdentifierPlaceLookupParameters *mapsIdentifierPlaceLookupParameters; // @synthesize mapsIdentifierPlaceLookupParameters=_mapsIdentifierPlaceLookupParameters;
@property(retain, nonatomic) GEOPDFeatureIdGeocodingParameters *featureIdGeocodingParameters; // @synthesize featureIdGeocodingParameters=_featureIdGeocodingParameters;
@property(retain, nonatomic) GEOPDExternalTransitLookupParameters *externalTransitLookupParameters; // @synthesize externalTransitLookupParameters=_externalTransitLookupParameters;
@property(retain, nonatomic) GEOPDSearchZeroKeywordWithSearchResultsSuggestionParameters *searchZeroKeywordWithSearchResultsSuggestionParameters; // @synthesize searchZeroKeywordWithSearchResultsSuggestionParameters=_searchZeroKeywordWithSearchResultsSuggestionParameters;
@property(retain, nonatomic) GEOPDAddressObjectGeocodingParameters *addressObjectGeocodingParameters; // @synthesize addressObjectGeocodingParameters=_addressObjectGeocodingParameters;
@property(retain, nonatomic) GEOPDNearbySearchParameters *nearbySearchParameters; // @synthesize nearbySearchParameters=_nearbySearchParameters;
@property(retain, nonatomic) GEOPDVendorSpecificPlaceRefinementParameters *vendorSpecificPlaceRefinementParameters; // @synthesize vendorSpecificPlaceRefinementParameters=_vendorSpecificPlaceRefinementParameters;
@property(retain, nonatomic) GEOPDBatchPopularNearbySearchParameters *batchPopularNearbySearchParameters; // @synthesize batchPopularNearbySearchParameters=_batchPopularNearbySearchParameters;
@property(retain, nonatomic) GEOPDSearchFieldPlaceholderParameters *searchFieldPlaceholderParameters; // @synthesize searchFieldPlaceholderParameters=_searchFieldPlaceholderParameters;
@property(retain, nonatomic) GEOPDSearchZeroKeywordCategorySuggestionParameters *searchZeroKeywordCategorySuggestionParameters; // @synthesize searchZeroKeywordCategorySuggestionParameters=_searchZeroKeywordCategorySuggestionParameters;
@property(retain, nonatomic) GEOPDPopularNearbySearchParameters *popularNearbySearchParameters; // @synthesize popularNearbySearchParameters=_popularNearbySearchParameters;
@property(retain, nonatomic) GEOPDCategorySearchParameters *categorySearchParameters; // @synthesize categorySearchParameters=_categorySearchParameters;
@property(retain, nonatomic) GEOPDSearchBrowseCategorySuggestionParameters *browseCategorySuggestionParameters; // @synthesize browseCategorySuggestionParameters=_browseCategorySuggestionParameters;
@property(retain, nonatomic) GEOPDAutocompleteParameters *autocompleteParameters; // @synthesize autocompleteParameters=_autocompleteParameters;
@property(retain, nonatomic) GEOPDLocationDirectedSearchParameters *locationDirectedSearchParameters; // @synthesize locationDirectedSearchParameters=_locationDirectedSearchParameters;
@property(retain, nonatomic) GEOPDSiriSearchParameters *siriSearchParameters; // @synthesize siriSearchParameters=_siriSearchParameters;
@property(retain, nonatomic) GEOPDPlaceRefinementParameters *placeRefinementParameters; // @synthesize placeRefinementParameters=_placeRefinementParameters;
@property(retain, nonatomic) GEOPDMerchantLookupParameters *merchantLookupParameters; // @synthesize merchantLookupParameters=_merchantLookupParameters;
@property(retain, nonatomic) GEOPDPlaceLookupParameters *placeLookupParameters; // @synthesize placeLookupParameters=_placeLookupParameters;
@property(retain, nonatomic) GEOPDReverseGeocodingParameters *reverseGeocodingParameters; // @synthesize reverseGeocodingParameters=_reverseGeocodingParameters;
@property(retain, nonatomic) GEOPDCanonicalLocationSearchParameters *canonicalLocationSearchParameters; // @synthesize canonicalLocationSearchParameters=_canonicalLocationSearchParameters;
@property(retain, nonatomic) GEOPDGeocodingParameters *geocodingParameters; // @synthesize geocodingParameters=_geocodingParameters;
@property(retain, nonatomic) GEOPDSearchParameters *searchParameters; // @synthesize searchParameters=_searchParameters;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasIpGeoLookupParameters;
@property(readonly, nonatomic) _Bool hasWifiFingerprintParameters;
@property(readonly, nonatomic) _Bool hasBrandLookupParameters;
@property(readonly, nonatomic) _Bool hasClusterGeocodingParameters;
@property(readonly, nonatomic) _Bool hasMapsIdentifierPlaceLookupParameters;
@property(readonly, nonatomic) _Bool hasFeatureIdGeocodingParameters;
@property(readonly, nonatomic) _Bool hasExternalTransitLookupParameters;
@property(readonly, nonatomic) _Bool hasSearchZeroKeywordWithSearchResultsSuggestionParameters;
@property(readonly, nonatomic) _Bool hasAddressObjectGeocodingParameters;
@property(readonly, nonatomic) _Bool hasNearbySearchParameters;
@property(readonly, nonatomic) _Bool hasVendorSpecificPlaceRefinementParameters;
@property(readonly, nonatomic) _Bool hasBatchPopularNearbySearchParameters;
@property(readonly, nonatomic) _Bool hasSearchFieldPlaceholderParameters;
@property(readonly, nonatomic) _Bool hasSearchZeroKeywordCategorySuggestionParameters;
@property(readonly, nonatomic) _Bool hasPopularNearbySearchParameters;
@property(readonly, nonatomic) _Bool hasCategorySearchParameters;
@property(readonly, nonatomic) _Bool hasBrowseCategorySuggestionParameters;
@property(readonly, nonatomic) _Bool hasAutocompleteParameters;
@property(readonly, nonatomic) _Bool hasLocationDirectedSearchParameters;
@property(readonly, nonatomic) _Bool hasSiriSearchParameters;
@property(readonly, nonatomic) _Bool hasPlaceRefinementParameters;
@property(readonly, nonatomic) _Bool hasMerchantLookupParameters;
@property(readonly, nonatomic) _Bool hasPlaceLookupParameters;
@property(readonly, nonatomic) _Bool hasReverseGeocodingParameters;
@property(readonly, nonatomic) _Bool hasCanonicalLocationSearchParameters;
@property(readonly, nonatomic) _Bool hasGeocodingParameters;
@property(readonly, nonatomic) _Bool hasSearchParameters;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4;
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;
- (id)initWithBrandMUID:(unsigned long long)arg1 traits:(id)arg2;
- (id)initWithCanonicalLocationSearchQueryString:(id)arg1;
- (id)initWithVendorSpecificPlaceRefinementParameters:(id)arg1 traits:(id)arg2;
- (id)initWithPlaceRefinementParameters:(id)arg1 traits:(id)arg2;
- (id)initWithMapItemToRefine:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 traits:(id)arg3;
- (id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithReverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 preserveOriginalLocation:(_Bool)arg2;
- (id)initWithReverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)initWithReverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 preserveOriginalLocation:(_Bool)arg2 floorOrdinal:(int)arg3;
- (id)initWithExternalTransitStationCodes:(id)arg1 sourceID:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4;
- (id)initWithMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 paymentNetwork:(id)arg3 transactionDate:(id)arg4 transactionLocation:(id)arg5;
- (id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2;
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2;

@end

