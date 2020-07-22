//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAddressObjectGeocodingResult, GEOPDAutocompleteResult, GEOPDBatchPopularNearbySearchResult, GEOPDBrandLookupResult, GEOPDCanonicalLocationSearchResult, GEOPDCategorySearchResult, GEOPDClusterGeocodingResult, GEOPDExternalTransitLookupResult, GEOPDFeatureIdGeocodingResult, GEOPDGeocodingResult, GEOPDIpGeoLookupResult, GEOPDLocationDirectedSearchResult, GEOPDMapsIdentifierPlaceLookupResult, GEOPDMerchantLookupResult, GEOPDNearbySearchResult, GEOPDPlaceLookupResult, GEOPDPlaceRefinementResult, GEOPDPopularNearbySearchResult, GEOPDReverseGeocodingResult, GEOPDSearchBrowseCategorySuggestionResult, GEOPDSearchFieldPlaceholderResult, GEOPDSearchResult, GEOPDSearchZeroKeywordCategorySuggestionResult, GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult, GEOPDSiriSearchResult, GEOPDVendorSpecificPlaceRefinementResult, GEOPDWifiFingerprintResult, PBUnknownFields;

@interface GEOPDPlaceGlobalResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDAddressObjectGeocodingResult *_addressObjectGeocodingResult;
    GEOPDAutocompleteResult *_autocompleteResult;
    GEOPDBatchPopularNearbySearchResult *_batchPopularNearbySearchResult;
    GEOPDBrandLookupResult *_brandLookupResult;
    GEOPDSearchBrowseCategorySuggestionResult *_browseCategorySuggestionResult;
    GEOPDCanonicalLocationSearchResult *_canonicalSearchResult;
    GEOPDCategorySearchResult *_categorySearchResult;
    GEOPDClusterGeocodingResult *_clusterGeocodingResult;
    GEOPDExternalTransitLookupResult *_externalTransitLookupResult;
    GEOPDFeatureIdGeocodingResult *_featureIdGeocodingResult;
    GEOPDGeocodingResult *_geocodingResult;
    GEOPDIpGeoLookupResult *_ipGeoLookupResult;
    GEOPDLocationDirectedSearchResult *_locationDirectedSearchResult;
    GEOPDMapsIdentifierPlaceLookupResult *_mapsIdentifierPlaceLookupResult;
    GEOPDMerchantLookupResult *_merchantLookupResult;
    GEOPDNearbySearchResult *_nearbySearchResult;
    GEOPDPlaceLookupResult *_placeLookupResult;
    GEOPDPlaceRefinementResult *_placeRefinementResult;
    GEOPDPopularNearbySearchResult *_popularNearbySearchResult;
    GEOPDReverseGeocodingResult *_reverseGeocodingResult;
    GEOPDSearchFieldPlaceholderResult *_searchFieldPlaceholderResult;
    GEOPDSearchResult *_searchResult;
    GEOPDSearchZeroKeywordCategorySuggestionResult *_searchZeroKeywordCategorySuggestionResult;
    GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult *_searchZeroKeywordWithSearchResultsSuggestionResult;
    GEOPDSiriSearchResult *_siriSearchResult;
    GEOPDVendorSpecificPlaceRefinementResult *_vendorSpecificPlaceRefinementResult;
    GEOPDWifiFingerprintResult *_wifiFingerprintResult;
}

@property(retain, nonatomic) GEOPDIpGeoLookupResult *ipGeoLookupResult; // @synthesize ipGeoLookupResult=_ipGeoLookupResult;
@property(retain, nonatomic) GEOPDWifiFingerprintResult *wifiFingerprintResult; // @synthesize wifiFingerprintResult=_wifiFingerprintResult;
@property(retain, nonatomic) GEOPDBrandLookupResult *brandLookupResult; // @synthesize brandLookupResult=_brandLookupResult;
@property(retain, nonatomic) GEOPDClusterGeocodingResult *clusterGeocodingResult; // @synthesize clusterGeocodingResult=_clusterGeocodingResult;
@property(retain, nonatomic) GEOPDMapsIdentifierPlaceLookupResult *mapsIdentifierPlaceLookupResult; // @synthesize mapsIdentifierPlaceLookupResult=_mapsIdentifierPlaceLookupResult;
@property(retain, nonatomic) GEOPDFeatureIdGeocodingResult *featureIdGeocodingResult; // @synthesize featureIdGeocodingResult=_featureIdGeocodingResult;
@property(retain, nonatomic) GEOPDExternalTransitLookupResult *externalTransitLookupResult; // @synthesize externalTransitLookupResult=_externalTransitLookupResult;
@property(retain, nonatomic) GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult *searchZeroKeywordWithSearchResultsSuggestionResult; // @synthesize searchZeroKeywordWithSearchResultsSuggestionResult=_searchZeroKeywordWithSearchResultsSuggestionResult;
@property(retain, nonatomic) GEOPDAddressObjectGeocodingResult *addressObjectGeocodingResult; // @synthesize addressObjectGeocodingResult=_addressObjectGeocodingResult;
@property(retain, nonatomic) GEOPDNearbySearchResult *nearbySearchResult; // @synthesize nearbySearchResult=_nearbySearchResult;
@property(retain, nonatomic) GEOPDVendorSpecificPlaceRefinementResult *vendorSpecificPlaceRefinementResult; // @synthesize vendorSpecificPlaceRefinementResult=_vendorSpecificPlaceRefinementResult;
@property(retain, nonatomic) GEOPDBatchPopularNearbySearchResult *batchPopularNearbySearchResult; // @synthesize batchPopularNearbySearchResult=_batchPopularNearbySearchResult;
@property(retain, nonatomic) GEOPDSearchFieldPlaceholderResult *searchFieldPlaceholderResult; // @synthesize searchFieldPlaceholderResult=_searchFieldPlaceholderResult;
@property(retain, nonatomic) GEOPDSearchZeroKeywordCategorySuggestionResult *searchZeroKeywordCategorySuggestionResult; // @synthesize searchZeroKeywordCategorySuggestionResult=_searchZeroKeywordCategorySuggestionResult;
@property(retain, nonatomic) GEOPDPopularNearbySearchResult *popularNearbySearchResult; // @synthesize popularNearbySearchResult=_popularNearbySearchResult;
@property(retain, nonatomic) GEOPDCategorySearchResult *categorySearchResult; // @synthesize categorySearchResult=_categorySearchResult;
@property(retain, nonatomic) GEOPDSearchBrowseCategorySuggestionResult *browseCategorySuggestionResult; // @synthesize browseCategorySuggestionResult=_browseCategorySuggestionResult;
@property(retain, nonatomic) GEOPDAutocompleteResult *autocompleteResult; // @synthesize autocompleteResult=_autocompleteResult;
@property(retain, nonatomic) GEOPDLocationDirectedSearchResult *locationDirectedSearchResult; // @synthesize locationDirectedSearchResult=_locationDirectedSearchResult;
@property(retain, nonatomic) GEOPDSiriSearchResult *siriSearchResult; // @synthesize siriSearchResult=_siriSearchResult;
@property(retain, nonatomic) GEOPDPlaceRefinementResult *placeRefinementResult; // @synthesize placeRefinementResult=_placeRefinementResult;
@property(retain, nonatomic) GEOPDMerchantLookupResult *merchantLookupResult; // @synthesize merchantLookupResult=_merchantLookupResult;
@property(retain, nonatomic) GEOPDPlaceLookupResult *placeLookupResult; // @synthesize placeLookupResult=_placeLookupResult;
@property(retain, nonatomic) GEOPDReverseGeocodingResult *reverseGeocodingResult; // @synthesize reverseGeocodingResult=_reverseGeocodingResult;
@property(retain, nonatomic) GEOPDCanonicalLocationSearchResult *canonicalSearchResult; // @synthesize canonicalSearchResult=_canonicalSearchResult;
@property(retain, nonatomic) GEOPDGeocodingResult *geocodingResult; // @synthesize geocodingResult=_geocodingResult;
@property(retain, nonatomic) GEOPDSearchResult *searchResult; // @synthesize searchResult=_searchResult;
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
@property(readonly, nonatomic) _Bool hasIpGeoLookupResult;
@property(readonly, nonatomic) _Bool hasWifiFingerprintResult;
@property(readonly, nonatomic) _Bool hasBrandLookupResult;
@property(readonly, nonatomic) _Bool hasClusterGeocodingResult;
@property(readonly, nonatomic) _Bool hasMapsIdentifierPlaceLookupResult;
@property(readonly, nonatomic) _Bool hasFeatureIdGeocodingResult;
@property(readonly, nonatomic) _Bool hasExternalTransitLookupResult;
@property(readonly, nonatomic) _Bool hasSearchZeroKeywordWithSearchResultsSuggestionResult;
@property(readonly, nonatomic) _Bool hasAddressObjectGeocodingResult;
@property(readonly, nonatomic) _Bool hasNearbySearchResult;
@property(readonly, nonatomic) _Bool hasVendorSpecificPlaceRefinementResult;
@property(readonly, nonatomic) _Bool hasBatchPopularNearbySearchResult;
@property(readonly, nonatomic) _Bool hasSearchFieldPlaceholderResult;
@property(readonly, nonatomic) _Bool hasSearchZeroKeywordCategorySuggestionResult;
@property(readonly, nonatomic) _Bool hasPopularNearbySearchResult;
@property(readonly, nonatomic) _Bool hasCategorySearchResult;
@property(readonly, nonatomic) _Bool hasBrowseCategorySuggestionResult;
@property(readonly, nonatomic) _Bool hasAutocompleteResult;
@property(readonly, nonatomic) _Bool hasLocationDirectedSearchResult;
@property(readonly, nonatomic) _Bool hasSiriSearchResult;
@property(readonly, nonatomic) _Bool hasPlaceRefinementResult;
@property(readonly, nonatomic) _Bool hasMerchantLookupResult;
@property(readonly, nonatomic) _Bool hasPlaceLookupResult;
@property(readonly, nonatomic) _Bool hasReverseGeocodingResult;
@property(readonly, nonatomic) _Bool hasCanonicalSearchResult;
@property(readonly, nonatomic) _Bool hasGeocodingResult;
@property(readonly, nonatomic) _Bool hasSearchResult;

@end

