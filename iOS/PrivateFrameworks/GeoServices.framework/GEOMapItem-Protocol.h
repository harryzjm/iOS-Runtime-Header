//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOAddress, GEOAddressObject, GEOAppleRating, GEOAssociatedApp, GEOBusinessAssets, GEOEVCharger, GEOEnclosingPlace, GEOEnhancedPlacement, GEOEnrichmentData, GEOEnrichmentInfo, GEOExploreGuides, GEOFeatureStyleAttributes, GEOLabelGeometry, GEOMapItemAdditionalPlaceInfo, GEOMapItemClientAttributes, GEOMapItemContainedPlace, GEOMapItemDetourInfo, GEOMapItemIdentifier, GEOMapItemPhotosAttribution, GEOMapItemPlaceAttribution, GEOMapItemReviewsAttribution, GEOMapRegion, GEOMessageLink, GEOMiniBrowseCategories, GEOMuninViewState, GEOPDFlyover, GEOPDPlace, GEOPOIClaim, GEOPlace, GEOPlaceQuestionnaire, GEOPlaceResult, GEOPlacecardLayoutData, GEOPriceDescription, GEORelatedPlaceList, GEORestaurantFeaturesLink, GEOStorefrontInfo, GEOStorefrontPresentationInfo, GEOStyleAttributes, GEOTooltip, GEOTrailHead, GEOViewportFrame, NSArray, NSData, NSDate, NSDictionary, NSString, NSTimeZone, NSURL;
@protocol GEOAnnotatedItemList, GEOEncyclopedicInfo, GEOMapItem, GEOMapItemTransitInfo, GEOMapItemVenueInfo, GEOTransitAttribution, GEOTransitVehiclePosition;

@protocol GEOMapItem <NSObject>
@property(readonly, nonatomic, getter=_photosMemoryScore) float photosMemoryScore;
@property(readonly, nonatomic, getter=_areaHighlightId) unsigned long long areaHighlightId;
@property(readonly, nonatomic, getter=_hasAreaHighlightId) _Bool hasAreaHighlightId;
@property(readonly, nonatomic, getter=_bestAvailableCountryCode) NSString *bestAvailableCountryCode;
@property(readonly, nonatomic, getter=_iso3166SubdivisionCode) NSString *iso3166SubdivisionCode;
@property(readonly, nonatomic, getter=_iso3166CountryCode) NSString *iso3166CountryCode;
@property(readonly, nonatomic, getter=_alternateSearchableNames) NSArray *alternateSearchableNames;
@property(readonly, nonatomic, getter=_captionedPhotoAlbums) NSArray *captionedPhotoAlbums;
@property(readonly, nonatomic, getter=_hasCaptionedPhotoAlbum) _Bool hasCaptionedPhotoAlbum;
@property(readonly, nonatomic, getter=_totalPhotoCount) unsigned long long totalPhotoCount;
@property(readonly, nonatomic, getter=_canDownloadMorePhotos) _Bool canDownloadMorePhotos;
@property(readonly, nonatomic, getter=_identifierHistory) NSArray *identifierHistory;
@property(readonly, nonatomic, getter=_placeQuestionnaire) GEOPlaceQuestionnaire *placeQuestionnaire;
@property(readonly, nonatomic, getter=_hasPlaceQuestionnaire) _Bool hasPlaceQuestionnaire;
@property(readonly, nonatomic, getter=_overallAppleRating) GEOAppleRating *overallRating;
@property(readonly, nonatomic, getter=_appleRatings) NSArray *appleRatings;
@property(readonly, nonatomic, getter=_hasAppleRatings) _Bool hasAppleRatings;
@property(readonly, nonatomic, getter=_showSuggestAnEditButton) _Bool showSuggestAnEditButton;
@property(readonly, nonatomic, getter=_enableRAPLightweightFeedback) _Bool enableRAPLightweightFeedback;
@property(readonly, nonatomic, getter=_walletCategoryIdentifier) NSString *walletCategoryIdentifier;
@property(readonly, nonatomic, getter=_walletMapsCategoryIdentifier) NSString *walletMapsCategoryIdentifier;
@property(readonly, nonatomic, getter=_walletCategoryLocalizedStringLocale) NSString *walletCategoryLocalizedStringLocale;
@property(readonly, nonatomic, getter=_walletCategoryLocalizedString) NSString *walletCategoryLocalizedString;
@property(readonly, nonatomic, getter=_walletCategoryStyling) GEOStyleAttributes *walletCategoryStyling;
@property(readonly, nonatomic, getter=_walletPlaceLocalizedStringLocale) NSString *walletPlaceLocalizedStringLocale;
@property(readonly, nonatomic, getter=_walletPlaceLocalizedString) NSString *walletPlaceLocalizedString;
@property(readonly, nonatomic, getter=_walletPlaceStyling) GEOStyleAttributes *walletPlaceStyling;
@property(readonly, nonatomic, getter=_groundViewLocationId) unsigned long long groundViewLocationId;
@property(readonly, nonatomic, getter=_hasGroundViewLocationId) _Bool hasGroundViewLocationId;
@property(readonly, nonatomic, getter=_isInLinkedPlaceRelationship) _Bool inLinkedPlaceRelationship;
@property(readonly, nonatomic, getter=_containedPlace) GEOMapItemContainedPlace *containedPlace;
@property(readonly, nonatomic, getter=_wifiFingerprintLabelStatusCode) int wifiFingerprintLabelStatusCode;
@property(readonly, nonatomic, getter=_hasWifiFingerprintLabelStatusCode) _Bool hasWifiFingerprintLabelStatusCode;
@property(readonly, nonatomic, getter=_wifiFingerprintConfidence) unsigned int wifiFingerprintConfidence;
@property(readonly, nonatomic, getter=_hasWifiFingerprintConfidence) _Bool hasWifiFingerprintConfidence;
@property(readonly, nonatomic, getter=_wifiFingerprintLabelType) int wifiFingerprintLabelType;
@property(readonly, nonatomic, getter=_hasWifiFingerprintLabelType) _Bool hasWifiFingerprintLabelType;
@property(readonly, nonatomic) double cachingRadiusMeters;
@property(readonly, nonatomic) NSArray *transitPaymentMethodSuggestions;
@property(readonly, nonatomic) NSArray *supportedTransitPaymentMethods;
@property(readonly, nonatomic) NSData *externalTransitStationCode;
@property(readonly, nonatomic, getter=_placeCategoryType) int placeCategoryType;
@property(readonly, nonatomic, getter=_tooltip) GEOTooltip *tooltip;
@property(readonly, nonatomic, getter=_trailHead) GEOTrailHead *trailHead;
@property(readonly, nonatomic, getter=_enrichmentData) GEOEnrichmentData *enrichmentData;
@property(readonly, nonatomic, getter=_enrichmentInfo) GEOEnrichmentInfo *enrichmentInfo;
@property(readonly, nonatomic, getter=_viewportFrame) GEOViewportFrame *viewportFrame;
@property(readonly, nonatomic, getter=_labelGeometry) GEOLabelGeometry *labelGeometry;
@property(readonly, nonatomic, getter=_enhancedPlacement) GEOEnhancedPlacement *enhancedPlacement;
@property(readonly, nonatomic, getter=_linkedServices) NSArray *linkedServices;
@property(readonly, nonatomic, getter=_hasLinkedServices) _Bool hasLinkedServices;
@property(readonly, nonatomic, getter=_businessHours) NSArray *businessHours;
@property(readonly, nonatomic, getter=_hasBusinessHours) _Bool hasBusinessHours;
@property(readonly, nonatomic, getter=_hasCurrentOperatingHours) _Bool hasCurrentOperatingHours;
@property(readonly, nonatomic, getter=_hasOperatingHours) _Bool hasOperatingHours;
@property(readonly, nonatomic, getter=_enclosingPlace) GEOEnclosingPlace *enclosingPlace;
@property(readonly, nonatomic, getter=_hasEnclosingPlace) _Bool hasEnclosingPlace;
@property(readonly, nonatomic, getter=_annotatedItemList) id <GEOAnnotatedItemList> annotatedItemList;
@property(readonly, nonatomic, getter=_placeDisplayStyle) int placeDisplayStyle;
@property(readonly, nonatomic, getter=_miniBrowseCategories) GEOMiniBrowseCategories *miniBrowseCategories;
@property(readonly, nonatomic, getter=_browseCategories) NSArray *browseCategories;
@property(readonly, nonatomic, getter=_venueInfo) id <GEOMapItemVenueInfo> venueInfo;
@property(readonly, nonatomic, getter=_venueFeatureType) int venueFeatureType;
@property(readonly, nonatomic, getter=_hasVenueFeatureType) _Bool hasVenueFeatureType;
@property(readonly, nonatomic) _Bool hasExpiredComponents;
@property(readonly, nonatomic) GEOMapItemDetourInfo *detourInfo;
@property(readonly, nonatomic, getter=_placecardLayoutData) GEOPlacecardLayoutData *placecardLayoutData;
@property(readonly, nonatomic, getter=_evCharger) GEOEVCharger *evCharger;
@property(readonly, nonatomic, getter=_hasEVCharger) _Bool hasEVCharger;
@property(readonly, nonatomic, getter=_relatedPlaceLists) NSArray *relatedPlaceLists;
@property(readonly, nonatomic, getter=_brandMUID) unsigned long long brandMUID;
@property(readonly, nonatomic, getter=_hasBrandMUID) _Bool hasBrandMUID;
@property(readonly, nonatomic, getter=_placeCollectionPullQuotes) NSArray *placeCollectionPullQuotes;
@property(readonly, nonatomic, getter=_hasPlaceCollectionPullQuotes) _Bool hasPlaceCollectionPullQuotes;
@property(readonly, nonatomic, getter=_placeCollectionsIds) NSArray *placeCollectionsIds;
@property(readonly, nonatomic, getter=_exploreGuides) GEOExploreGuides *exploreGuides;
@property(readonly, nonatomic, getter=_placeCollections) NSArray *placeCollections;
@property(readonly, nonatomic, getter=_secondaryQuickLinks) NSArray *secondaryQuickLinks;
@property(readonly, nonatomic, getter=_quickLinks) NSArray *quickLinks;
@property(readonly, nonatomic, getter=_externalActionLinks) NSArray *externalActionLinks;
@property(readonly, nonatomic, getter=_messageLink) GEOMessageLink *messageLink;
@property(readonly, nonatomic, getter=_isStandaloneBrand) _Bool isStandAloneBrand;
@property(readonly, nonatomic, getter=_parsecSectionType) int parsecSectionType;
@property(readonly, nonatomic, getter=_featureLink) GEORestaurantFeaturesLink *featureLink;
@property(readonly, nonatomic, getter=_hasFeatureLink) _Bool hasFeatureLink;
@property(readonly, nonatomic) long long venueCapacity;
@property(readonly, nonatomic) _Bool hasVenueCapacity;
@property(readonly, nonatomic) NSArray *spatialMappedPlaceCategories;
@property(readonly, nonatomic) NSArray *spatialMappedCategories;
@property(readonly, nonatomic) GEOBusinessAssets *businessAssets;
@property(readonly, nonatomic, getter=_poiClaim) GEOPOIClaim *poiClaim;
@property(readonly, nonatomic, getter=_hasPOIClaim) _Bool hasPOIClaim;
@property(readonly, nonatomic, getter=_additionalPlaceInfos) NSArray *additionalPlaceInfos;
@property(readonly, nonatomic, getter=_mapsCategoryId) NSString *mapsCategoryId;
@property(readonly, nonatomic, getter=_customIconID) unsigned long long customIconID;
@property(readonly, nonatomic, getter=_styleAttributes) GEOFeatureStyleAttributes *styleAttributes;
@property(readonly, nonatomic, getter=_poiCategory) NSString *poiCategory;
@property(readonly, nonatomic, getter=_reviewsAttribution) GEOMapItemReviewsAttribution *reviewsAttribution;
@property(readonly, nonatomic, getter=_allPhotoAttributions) NSArray *allPhotoAttributions;
@property(readonly, nonatomic, getter=_photosAttribution) GEOMapItemPhotosAttribution *photosAttribution;
@property(readonly, nonatomic, getter=_attribution) GEOMapItemPlaceAttribution *attribution;
@property(readonly, nonatomic, getter=_poiPinpointURLString) NSString *poiPinpointURLString;
@property(readonly, nonatomic, getter=_poiSurveyURLString) NSString *poiSurveyURLString;
@property(readonly, copy, nonatomic, getter=_vendorID) NSString *vendorID;
@property(readonly, copy, nonatomic, getter=_providerURL) NSURL *providerURL;
@property(readonly, copy, nonatomic, getter=_webURL) NSURL *webURL;
@property(readonly, nonatomic, getter=_needsAttribution) _Bool needsAttribution;
@property(readonly, nonatomic, getter=_openingHoursOptions) unsigned long long openingHoursOptions;
@property(readonly, nonatomic, getter=_disambiguationName) NSString *disambiguationName;
@property(readonly, nonatomic, getter=_optsOutOfTelephoneAds) _Bool optsOutOfTelephoneAds;
@property(readonly, nonatomic, getter=_telephone) NSString *telephone;
@property(readonly, nonatomic, getter=_hasTelephone) _Bool hasTelephone;
@property(readonly, nonatomic, getter=_placeDescription) NSString *placeDescription;
@property(readonly, nonatomic, getter=_hasPlaceDescription) _Bool hasPlaceDescription;
@property(readonly, nonatomic, getter=_encyclopedicInfo) id <GEOEncyclopedicInfo> encyclopedicInfo;
@property(readonly, nonatomic, getter=_hasEncyclopedicInfo) _Bool hasEncyclopedicInfo;
@property(readonly, nonatomic, getter=_amenities) NSArray *amenities;
@property(readonly, nonatomic, getter=_hasAnyAmenities) _Bool hasAnyAmenities;
@property(readonly, nonatomic, getter=_childItems) NSArray *childItems;
@property(readonly, nonatomic, getter=_resultSnippetDistanceDisplayThreshold) unsigned int resultSnippetDistanceDisplayThreshold;
@property(readonly, nonatomic, getter=_resultSnippetLocationString) NSString *resultSnippetLocationString;
@property(readonly, nonatomic, getter=_maxScoreForPriceRange) unsigned int maxScoreForPriceRange;
@property(readonly, nonatomic, getter=_priceRange) unsigned int priceRange;
@property(readonly, nonatomic, getter=_hasPriceRange) _Bool hasPriceRange;
@property(readonly, nonatomic, getter=_normalizedUserRatingScore) float normalizedUserRatingScore;
@property(readonly, nonatomic, getter=_sampleSizeForUserRatingScore) unsigned int sampleSizeForUserRatingScore;
@property(readonly, nonatomic, getter=_hasUserRatingScore) _Bool hasUserRatingScore;
@property(readonly, nonatomic, getter=_priceDescription) GEOPriceDescription *priceDescription;
@property(readonly, nonatomic, getter=_businessURL) NSString *businessURL;
@property(readonly, nonatomic, getter=_areaInMeters) double areaInMeters;
@property(readonly, nonatomic, getter=_hasAreaInMeters) _Bool hasAreaInMeters;
@property(readonly, nonatomic, getter=_placeDisplayType) int placeDisplayType;
@property(readonly, nonatomic) GEOMapItemIdentifier *transitStationIdentifier;
@property(readonly, nonatomic, getter=_identifier) GEOMapItemIdentifier *identifier;
@property(readonly, nonatomic, getter=_muid) unsigned long long muid;
@property(readonly, nonatomic, getter=_hasMUID) _Bool hasMUID;
@property(readonly, nonatomic, getter=_storefrontPresentationInfo) GEOStorefrontPresentationInfo *storefrontPresentationInfo;
@property(readonly, nonatomic, getter=_storefrontInfo) GEOStorefrontInfo *storefrontInfo;
@property(readonly, nonatomic, getter=_muninViewState) GEOMuninViewState *muninViewState;
@property(readonly, nonatomic, getter=_flyoverAnnouncementMessage) NSString *flyoverAnnouncementMessage;
@property(readonly, nonatomic, getter=_flyover) GEOPDFlyover *flyover;
@property(readonly, nonatomic, getter=_hasFlyover) _Bool hasFlyover;
@property(readonly, nonatomic, getter=_transitVehiclePosition) id <GEOTransitVehiclePosition> transitVehiclePosition;
@property(readonly, nonatomic, getter=_transitAttribution) id <GEOTransitAttribution> transitAttribution;
@property(readonly, nonatomic, getter=_transitInfo) id <GEOMapItemTransitInfo> transitInfo;
@property(readonly, nonatomic, getter=_hasTransit) _Bool hasTransit;
@property(readonly, nonatomic, getter=_isTransitDisplayFeature) _Bool isTransitDisplayFeature;
@property(readonly, nonatomic, getter=_resultProviderID) int resultProviderID;
@property(readonly, nonatomic, getter=_hasResultProviderID) _Bool hasResultProviderID;
@property(readonly, nonatomic, getter=_roadAccessPoints) NSArray *roadAccessPoints;
@property(readonly, nonatomic, getter=_responseStatusIsIncomplete) _Bool responseStatusIncomplete;
@property(readonly, nonatomic, getter=_addressGeocodeAccuracy) int addressGeocodeAccuracy;
@property(readonly, nonatomic, getter=_hasResolvablePartialInformation) _Bool hasResolvablePartialInformation;
@property(readonly, nonatomic, getter=_placeDataAsData) NSData *placeDataAsData;
@property(readonly, nonatomic, getter=_placeType) int placeType;
@property(readonly, nonatomic, getter=_placeData) GEOPDPlace *placeData;
@property(readonly, nonatomic, getter=_placeResult) GEOPlaceResult *placeResult;
@property(readonly, nonatomic, getter=_place) GEOPlace *place;
@property(readonly, nonatomic, getter=_clientAttributes) GEOMapItemClientAttributes *clientAttributes;
@property(readonly, nonatomic, getter=_associatedApp) GEOAssociatedApp *associatedApp;
@property(readonly, nonatomic, getter=_photos) NSArray *photos;
@property(readonly, nonatomic, getter=_tips) NSArray *tips;
@property(readonly, nonatomic, getter=_reviews) NSArray *reviews;
@property(readonly, nonatomic) _Bool isEventAllDay;
@property(readonly, nonatomic) NSDate *eventDate;
@property(readonly, nonatomic) NSString *eventName;
@property(readonly, nonatomic) _Bool contactIsMe;
@property(readonly, nonatomic) NSString *contactSpokenName;
@property(readonly, nonatomic) NSString *contactName;
@property(readonly, nonatomic) int contactAddressType;
@property(readonly, nonatomic) GEOMapRegion *offlineDownloadRegion;
@property(readonly, nonatomic) GEOMapRegion *geoFenceMapRegionOrNil;
@property(readonly, nonatomic) GEOMapRegion *displayMapRegionOrNil;
@property(readonly, nonatomic) NSTimeZone *timezone;
@property(readonly, nonatomic) NSArray *areasOfInterest;
@property(readonly, nonatomic) NSDictionary *addressDictionary;
@property(readonly, nonatomic) GEOAddress *geoAddress;
@property(readonly, nonatomic) GEOMapRegion *geoFenceMapRegion;
@property(readonly, nonatomic) float displayMaxZoom;
@property(readonly, nonatomic) _Bool hasDisplayMaxZoom;
@property(readonly, nonatomic) float displayMinZoom;
@property(readonly, nonatomic) _Bool hasDisplayMinZoom;
@property(readonly, nonatomic) GEOMapRegion *displayMapRegion;
@property(readonly, nonatomic) int referenceFrame;
@property(readonly, nonatomic) CDStruct_c3b9c2ee labelCoordinate;
@property(readonly, nonatomic) CDStruct_c3b9c2ee centerCoordinate;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, nonatomic, getter=isDisputed) _Bool disputed;
@property(readonly, nonatomic) NSData *encodedData;
@property(readonly, nonatomic) NSString *secondarySpokenName;
@property(readonly, nonatomic) NSString *secondaryName;
@property(readonly, nonatomic) NSString *name;
- (void)iterateGroundViewsWithBlock:(void (^)(double, double, NSString *, NSString *, NSString *))arg1;
- (_Bool)isEqualToMapItem:(id <GEOMapItem>)arg1;
- (NSURL *)_bestHeroBrandIconURLForSize:(struct CGSize)arg1 allowSmaller:(_Bool)arg2;
- (NSURL *)_bestNavbarBrandIconURLForSize:(struct CGSize)arg1 allowSmaller:(_Bool)arg2;
- (NSURL *)_bestAvatarBrandIconURLForSize:(struct CGSize)arg1 allowSmaller:(_Bool)arg2;
- (NSString *)weatherDisplayName;
- (NSString *)shortAddress;
- (GEOAddressObject *)addressObject;
- (id <GEOMapItem>)_mapItemByStrippingOptionalData;
- (GEOMapItemAdditionalPlaceInfo *)_asPlaceInfo;
- (_Bool)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (NSArray *)_localizedCategoryNamesForType:(unsigned int)arg1;
- (GEOMapRegion *)_arrivalMapRegionForTransportType:(int)arg1;
- (NSString *)_spokenAddressForLocale:(NSString *)arg1;
- (GEORelatedPlaceList *)_firstRelatedPlaceListForType:(int)arg1;
- (GEORelatedPlaceList *)_relatedPlaceListForComponentIdentifier:(int)arg1;
- (NSString *)spokenNameForLocale:(NSString *)arg1;

@optional
- (id <GEOMapItem>)_mapItemBySettingIsTransitDisplayFeature:(_Bool)arg1;
@end

