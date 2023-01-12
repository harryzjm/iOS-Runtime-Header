//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDAddressObjectGeocodingResult, GEOPDAirportEntityPlaceLookupResult, GEOPDAllCollectionsViewResult, GEOPDAllGuidesLocationsViewResult, GEOPDAutocompleteResult, GEOPDBatchCategoryLookupResult, GEOPDBatchMerchantLookupBrandResult, GEOPDBatchPopularNearbySearchResult, GEOPDBatchReverseGeocodingResult, GEOPDBatchSpatialLookupResult, GEOPDBrandLookupResult, GEOPDCanonicalLocationSearchResult, GEOPDCategorySearchResult, GEOPDChildPlaceLookupByCategoryResult, GEOPDCollectionSuggestionResult, GEOPDExtendedGeoLookupResult, GEOPDExternalTransitLookupResult, GEOPDFeatureIdGeocodingResult, GEOPDGeocodingResult, GEOPDGroundViewLabelResult, GEOPDGuidesHomeResult, GEOPDIpGeoLookupResult, GEOPDLocationDirectedSearchResult, GEOPDMapsHomeResult, GEOPDMapsIdentifierPlaceLookupResult, GEOPDMapsSearchHomeResult, GEOPDMerchantLookupResult, GEOPDNearbySearchResult, GEOPDPlaceCollectionLookupResult, GEOPDPlaceGlobalCommonResult, GEOPDPlaceLookupResult, GEOPDPlaceRefinementResult, GEOPDPlacecardEnrichmentResult, GEOPDPoiAtAddressLookupResult, GEOPDPopularNearbySearchResult, GEOPDPublisherViewResult, GEOPDQueryUnderstandingResult, GEOPDReverseGeocodingResult, GEOPDSearchBrowseCategorySuggestionResult, GEOPDSearchFieldPlaceholderResult, GEOPDSearchResult, GEOPDSearchZeroKeywordCategorySuggestionResult, GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult, GEOPDSiriSearchResult, GEOPDTerritoryLookupResult, GEOPDTransitScheduleLookupResult, GEOPDVendorSpecificPlaceRefinementResult, GEOPDWifiFingerprintResult, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceGlobalResult : PBCodable
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAddressObjectGeocodingResult *_addressObjectGeocodingResult;
    GEOPDAirportEntityPlaceLookupResult *_airportEntityPlaceLookupResult;
    GEOPDAllCollectionsViewResult *_allCollectionsViewResult;
    GEOPDAllGuidesLocationsViewResult *_allGuidesLocationsViewresult;
    GEOPDAutocompleteResult *_autocompleteResult;
    GEOPDBatchCategoryLookupResult *_batchCategoryLookupResult;
    GEOPDBatchMerchantLookupBrandResult *_batchMerchantLookupBrandResult;
    GEOPDBatchPopularNearbySearchResult *_batchPopularNearbySearchResult;
    GEOPDBatchReverseGeocodingResult *_batchReverseGeocodingResult;
    GEOPDBatchSpatialLookupResult *_batchSpatialLookupResult;
    GEOPDBrandLookupResult *_brandLookupResult;
    GEOPDSearchBrowseCategorySuggestionResult *_browseCategorySuggestionResult;
    GEOPDCanonicalLocationSearchResult *_canonicalSearchResult;
    GEOPDCategorySearchResult *_categorySearchResult;
    GEOPDChildPlaceLookupByCategoryResult *_childPlaceLookupByCategoryResult;
    GEOPDCollectionSuggestionResult *_collectionSuggestionResult;
    GEOPDExtendedGeoLookupResult *_extendedGeoLookupResult;
    GEOPDExternalTransitLookupResult *_externalTransitLookupResult;
    GEOPDFeatureIdGeocodingResult *_featureIdGeocodingResult;
    GEOPDGeocodingResult *_geocodingResult;
    GEOPDGroundViewLabelResult *_groundViewLabelResult;
    GEOPDGuidesHomeResult *_guidesHomeResult;
    GEOPDIpGeoLookupResult *_ipGeoLookupResult;
    GEOPDLocationDirectedSearchResult *_locationDirectedSearchResult;
    GEOPDMapsHomeResult *_mapsHomeResult;
    GEOPDMapsIdentifierPlaceLookupResult *_mapsIdentifierPlaceLookupResult;
    GEOPDMapsSearchHomeResult *_mapsSearchHomeResult;
    GEOPDMerchantLookupResult *_merchantLookupResult;
    GEOPDNearbySearchResult *_nearbySearchResult;
    GEOPDPlaceCollectionLookupResult *_placeCollectionLookupResult;
    GEOPDPlaceGlobalCommonResult *_placeGlobalCommonResult;
    GEOPDPlaceLookupResult *_placeLookupResult;
    GEOPDPlaceRefinementResult *_placeRefinementResult;
    GEOPDPlacecardEnrichmentResult *_placecardEnrichmentResult;
    GEOPDPoiAtAddressLookupResult *_poiAtAddressLookupResult;
    GEOPDPopularNearbySearchResult *_popularNearbySearchResult;
    GEOPDPublisherViewResult *_publisherViewResult;
    GEOPDQueryUnderstandingResult *_queryUnderstandingResult;
    GEOPDReverseGeocodingResult *_reverseGeocodingResult;
    GEOPDSearchFieldPlaceholderResult *_searchFieldPlaceholderResult;
    GEOPDSearchResult *_searchResult;
    GEOPDSearchZeroKeywordCategorySuggestionResult *_searchZeroKeywordCategorySuggestionResult;
    GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult *_searchZeroKeywordWithSearchResultsSuggestionResult;
    GEOPDSiriSearchResult *_siriSearchResult;
    GEOPDTerritoryLookupResult *_territoryLookupResult;
    GEOPDTransitScheduleLookupResult *_transitScheduleLookupResult;
    GEOPDVendorSpecificPlaceRefinementResult *_vendorSpecificPlaceRefinementResult;
    GEOPDWifiFingerprintResult *_wifiFingerprintResult;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_addressObjectGeocodingResult:1;
        unsigned int read_airportEntityPlaceLookupResult:1;
        unsigned int read_allCollectionsViewResult:1;
        unsigned int read_allGuidesLocationsViewresult:1;
        unsigned int read_autocompleteResult:1;
        unsigned int read_batchCategoryLookupResult:1;
        unsigned int read_batchMerchantLookupBrandResult:1;
        unsigned int read_batchPopularNearbySearchResult:1;
        unsigned int read_batchReverseGeocodingResult:1;
        unsigned int read_batchSpatialLookupResult:1;
        unsigned int read_brandLookupResult:1;
        unsigned int read_browseCategorySuggestionResult:1;
        unsigned int read_canonicalSearchResult:1;
        unsigned int read_categorySearchResult:1;
        unsigned int read_childPlaceLookupByCategoryResult:1;
        unsigned int read_collectionSuggestionResult:1;
        unsigned int read_extendedGeoLookupResult:1;
        unsigned int read_externalTransitLookupResult:1;
        unsigned int read_featureIdGeocodingResult:1;
        unsigned int read_geocodingResult:1;
        unsigned int read_groundViewLabelResult:1;
        unsigned int read_guidesHomeResult:1;
        unsigned int read_ipGeoLookupResult:1;
        unsigned int read_locationDirectedSearchResult:1;
        unsigned int read_mapsHomeResult:1;
        unsigned int read_mapsIdentifierPlaceLookupResult:1;
        unsigned int read_mapsSearchHomeResult:1;
        unsigned int read_merchantLookupResult:1;
        unsigned int read_nearbySearchResult:1;
        unsigned int read_placeCollectionLookupResult:1;
        unsigned int read_placeGlobalCommonResult:1;
        unsigned int read_placeLookupResult:1;
        unsigned int read_placeRefinementResult:1;
        unsigned int read_placecardEnrichmentResult:1;
        unsigned int read_poiAtAddressLookupResult:1;
        unsigned int read_popularNearbySearchResult:1;
        unsigned int read_publisherViewResult:1;
        unsigned int read_queryUnderstandingResult:1;
        unsigned int read_reverseGeocodingResult:1;
        unsigned int read_searchFieldPlaceholderResult:1;
        unsigned int read_searchResult:1;
        unsigned int read_searchZeroKeywordCategorySuggestionResult:1;
        unsigned int read_searchZeroKeywordWithSearchResultsSuggestionResult:1;
        unsigned int read_siriSearchResult:1;
        unsigned int read_territoryLookupResult:1;
        unsigned int read_transitScheduleLookupResult:1;
        unsigned int read_vendorSpecificPlaceRefinementResult:1;
        unsigned int read_wifiFingerprintResult:1;
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

