//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WeatherKit/NSObject-Protocol.h>

@class GEOAddress, GEOAddressObject, GEOAppleRating, GEOAssociatedApp, GEOBusinessAssets, GEOEnclosingPlace, GEOEnhancedPlacement, GEOEnrichmentData, GEOEnrichmentInfo, GEOExploreGuides, GEOFeatureStyleAttributes, GEOLabelGeometry, GEOMapItemAdditionalPlaceInfo, GEOMapItemClientAttributes, GEOMapItemContainedPlace, GEOMapItemDetourInfo, GEOMapItemIdentifier, GEOMapItemPhotosAttribution, GEOMapItemPlaceAttribution, GEOMapItemReviewsAttribution, GEOMapRegion, GEOMessageLink, GEOMiniBrowseCategories, GEOMuninViewState, GEOPDFlyover, GEOPDPlace, GEOPOIClaim, GEOPlace, GEOPlaceQuestionnaire, GEOPlaceResult, GEOPlacecardLayoutData, GEOPriceDescription, GEORelatedPlaceList, GEORestaurantFeaturesLink, GEOStorefrontInfo, GEOStorefrontPresentationInfo, GEOStyleAttributes, GEOViewportFrame, NSArray, NSData, NSDate, NSDictionary, NSString, NSTimeZone, NSURL;
@protocol GEOAnnotatedItemList, GEOEncyclopedicInfo, GEOMapItem, GEOMapItemTransitInfo, GEOMapItemVenueInfo, GEOTransitAttribution, GEOTransitVehiclePosition;

@protocol GEOMapItem <NSObject>
- (NSArray *)_alternateSearchableNames;
- (NSArray *)_captionedPhotoAlbums;
- (_Bool)_hasCaptionedPhotoAlbum;
- (unsigned long long)_totalPhotoCount;
- (_Bool)_canDownloadMorePhotos;
- (NSArray *)_identifierHistory;
- (GEOPlaceQuestionnaire *)_placeQuestionnaire;
- (_Bool)_hasPlaceQuestionnaire;
- (GEOAppleRating *)_overallAppleRating;
- (NSArray *)_appleRatings;
- (_Bool)_hasAppleRatings;
- (_Bool)_showSuggestAnEditButton;
- (_Bool)_enableRAPLightweightFeedback;
- (NSString *)_walletCategoryIdentifier;
- (NSString *)_walletMapsCategoryIdentifier;
- (NSString *)_walletCategoryLocalizedStringLocale;
- (NSString *)_walletCategoryLocalizedString;
- (GEOStyleAttributes *)_walletCategoryStyling;
- (NSString *)_walletPlaceLocalizedStringLocale;
- (NSString *)_walletPlaceLocalizedString;
- (GEOStyleAttributes *)_walletPlaceStyling;
- (void)iterateGroundViewsWithBlock:(void (^)(double, double, NSString *, NSString *, NSString *))arg1;
- (unsigned long long)_groundViewLocationId;
- (_Bool)_hasGroundViewLocationId;
- (_Bool)_isInLinkedPlaceRelationship;
- (GEOMapItemContainedPlace *)_containedPlace;
- (_Bool)isEqualToMapItem:(id <GEOMapItem>)arg1;
- (NSURL *)_bestHeroBrandIconURLForSize:(struct CGSize)arg1 allowSmaller:(_Bool)arg2;
- (NSURL *)_bestNavbarBrandIconURLForSize:(struct CGSize)arg1 allowSmaller:(_Bool)arg2;
- (NSURL *)_bestAvatarBrandIconURLForSize:(struct CGSize)arg1 allowSmaller:(_Bool)arg2;
- (int)_wifiFingerprintLabelStatusCode;
- (_Bool)_hasWifiFingerprintLabelStatusCode;
- (unsigned int)_wifiFingerprintConfidence;
- (_Bool)_hasWifiFingerprintConfidence;
- (int)_wifiFingerprintLabelType;
- (_Bool)_hasWifiFingerprintLabelType;
@property(nonatomic, readonly) double cachingRadiusMeters;
@property(nonatomic, readonly) NSArray *transitPaymentMethodSuggestions;
@property(nonatomic, readonly) NSArray *supportedTransitPaymentMethods;
@property(nonatomic, readonly) NSData *externalTransitStationCode;
- (NSString *)weatherDisplayName;
- (NSString *)shortAddress;
- (GEOAddressObject *)addressObject;
- (id <GEOMapItem>)_mapItemByStrippingOptionalData;
- (GEOMapItemAdditionalPlaceInfo *)_asPlaceInfo;
- (_Bool)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (NSArray *)_localizedCategoryNamesForType:(unsigned int)arg1;
- (GEOMapRegion *)_arrivalMapRegionForTransportType:(int)arg1;
- (NSString *)_spokenAddressForLocale:(NSString *)arg1;
- (GEOEnrichmentData *)_enrichmentData;
- (GEOEnrichmentInfo *)_enrichmentInfo;
- (GEOViewportFrame *)_viewportFrame;
- (GEOLabelGeometry *)_labelGeometry;
- (GEOEnhancedPlacement *)_enhancedPlacement;
- (NSArray *)_linkedServices;
- (_Bool)_hasLinkedServices;
- (NSArray *)_businessHours;
- (_Bool)_hasBusinessHours;
- (_Bool)_hasCurrentOperatingHours;
- (_Bool)_hasOperatingHours;
- (GEOEnclosingPlace *)_enclosingPlace;
- (_Bool)_hasEnclosingPlace;
- (id <GEOAnnotatedItemList>)_annotatedItemList;
- (int)_placeDisplayStyle;
- (GEOMiniBrowseCategories *)_miniBrowseCategories;
- (NSArray *)_browseCategories;
- (id <GEOMapItemVenueInfo>)_venueInfo;
- (int)_venueFeatureType;
- (_Bool)_hasVenueFeatureType;
@property(nonatomic, readonly) _Bool hasExpiredComponents;
@property(nonatomic, readonly) GEOMapItemDetourInfo *detourInfo;
- (GEOPlacecardLayoutData *)_placecardLayoutData;
- (GEORelatedPlaceList *)_firstRelatedPlaceListForType:(int)arg1;
- (GEORelatedPlaceList *)_relatedPlaceListForComponentIdentifier:(int)arg1;
- (NSArray *)_relatedPlaceLists;
- (unsigned long long)_brandMUID;
- (_Bool)_hasBrandMUID;
- (NSArray *)_placeCollectionPullQuotes;
- (_Bool)_hasPlaceCollectionPullQuotes;
- (NSArray *)_placeCollectionsIds;
- (GEOExploreGuides *)_exploreGuides;
- (NSArray *)_placeCollections;
- (NSArray *)_secondaryQuickLinks;
- (NSArray *)_quickLinks;
- (NSArray *)_externalActionLinks;
- (GEOMessageLink *)_messageLink;
- (_Bool)_isStandaloneBrand;
- (int)_parsecSectionType;
- (GEORestaurantFeaturesLink *)_featureLink;
- (_Bool)_hasFeatureLink;
@property(nonatomic, readonly) long long venueCapacity;
@property(nonatomic, readonly) _Bool hasVenueCapacity;
@property(nonatomic, readonly) NSArray *spatialMappedPlaceCategories;
@property(nonatomic, readonly) NSArray *spatialMappedCategories;
@property(nonatomic, readonly) GEOBusinessAssets *businessAssets;
- (GEOPOIClaim *)_poiClaim;
- (_Bool)_hasPOIClaim;
- (NSArray *)_additionalPlaceInfos;
- (NSString *)_mapsCategoryId;
- (unsigned long long)_customIconID;
- (GEOFeatureStyleAttributes *)_styleAttributes;
- (NSString *)_poiCategory;
- (GEOMapItemReviewsAttribution *)_reviewsAttribution;
- (NSArray *)_allPhotoAttributions;
- (GEOMapItemPhotosAttribution *)_photosAttribution;
- (GEOMapItemPlaceAttribution *)_attribution;
- (NSString *)_poiPinpointURLString;
- (NSString *)_poiSurveyURLString;
- (NSString *)_vendorID;
- (NSURL *)_providerURL;
- (NSURL *)_webURL;
- (_Bool)_needsAttribution;
- (unsigned long long)_openingHoursOptions;
- (NSString *)_disambiguationName;
- (_Bool)_optsOutOfTelephoneAds;
- (NSString *)_telephone;
- (_Bool)_hasTelephone;
- (NSString *)_placeDescription;
- (_Bool)_hasPlaceDescription;
- (id <GEOEncyclopedicInfo>)_encyclopedicInfo;
- (_Bool)_hasEncyclopedicInfo;
- (NSArray *)_amenities;
- (_Bool)_hasAnyAmenities;
- (NSArray *)_childItems;
- (unsigned int)_resultSnippetDistanceDisplayThreshold;
- (NSString *)_resultSnippetLocationString;
- (unsigned int)_maxScoreForPriceRange;
- (unsigned int)_priceRange;
- (_Bool)_hasPriceRange;
- (float)_normalizedUserRatingScore;
- (unsigned int)_sampleSizeForUserRatingScore;
- (_Bool)_hasUserRatingScore;
- (GEOPriceDescription *)_priceDescription;
- (NSString *)_businessURL;
- (double)_areaInMeters;
- (_Bool)_hasAreaInMeters;
- (int)_placeDisplayType;
- (GEOMapItemIdentifier *)_identifier;
- (unsigned long long)_muid;
- (_Bool)_hasMUID;
- (GEOStorefrontPresentationInfo *)_storefrontPresentationInfo;
- (GEOStorefrontInfo *)_storefrontInfo;
- (GEOMuninViewState *)_muninViewState;
- (NSString *)_flyoverAnnouncementMessage;
- (GEOPDFlyover *)_flyover;
- (_Bool)_hasFlyover;
- (id <GEOTransitVehiclePosition>)_transitVehiclePosition;
- (id <GEOTransitAttribution>)_transitAttribution;
- (id <GEOMapItemTransitInfo>)_transitInfo;
- (_Bool)_hasTransit;
- (_Bool)_isTransitDisplayFeature;
- (int)_resultProviderID;
- (_Bool)_hasResultProviderID;
- (NSArray *)_roadAccessPoints;
- (_Bool)_responseStatusIsIncomplete;
- (int)_addressGeocodeAccuracy;
- (_Bool)_hasResolvablePartialInformation;
- (NSData *)_placeDataAsData;
- (int)_placeType;
- (GEOPDPlace *)_placeData;
- (GEOPlaceResult *)_placeResult;
- (GEOPlace *)_place;
- (GEOMapItemClientAttributes *)_clientAttributes;
- (GEOAssociatedApp *)_associatedApp;
- (NSArray *)_photos;
- (NSArray *)_tips;
- (NSArray *)_reviews;
@property(nonatomic, readonly) _Bool isEventAllDay;
@property(nonatomic, readonly) NSDate *eventDate;
@property(nonatomic, readonly) NSString *eventName;
@property(nonatomic, readonly) _Bool contactIsMe;
@property(nonatomic, readonly) NSString *contactSpokenName;
@property(nonatomic, readonly) NSString *contactName;
@property(nonatomic, readonly) int contactAddressType;
@property(nonatomic, readonly) GEOMapRegion *geoFenceMapRegionOrNil;
@property(nonatomic, readonly) GEOMapRegion *displayMapRegionOrNil;
@property(nonatomic, readonly) NSTimeZone *timezone;
@property(nonatomic, readonly) NSArray *areasOfInterest;
@property(nonatomic, readonly) NSDictionary *addressDictionary;
@property(nonatomic, readonly) GEOAddress *geoAddress;
@property(nonatomic, readonly) GEOMapRegion *geoFenceMapRegion;
@property(nonatomic, readonly) float displayMaxZoom;
@property(nonatomic, readonly) _Bool hasDisplayMaxZoom;
@property(nonatomic, readonly) float displayMinZoom;
@property(nonatomic, readonly) _Bool hasDisplayMinZoom;
@property(nonatomic, readonly) GEOMapRegion *displayMapRegion;
@property(nonatomic, readonly) int referenceFrame;
@property(nonatomic, readonly) CDStruct_c3b9c2ee centerCoordinate;
@property(nonatomic, readonly) CDStruct_c3b9c2ee coordinate;
- (_Bool)isValid;
- (_Bool)isDisputed;
@property(nonatomic, readonly) NSData *encodedData;
@property(nonatomic, readonly) NSString *secondarySpokenName;
@property(nonatomic, readonly) NSString *secondaryName;
- (NSString *)spokenNameForLocale:(NSString *)arg1;
@property(nonatomic, readonly) NSString *name;

@optional
- (unsigned long long)_areaHighlightId;
- (_Bool)_hasAreaHighlightId;
- (NSString *)_bestAvailableCountryCode;
- (NSString *)_iso3166SubdivisionCode;
- (NSString *)_iso3166CountryCode;
- (id <GEOMapItem>)_mapItemBySettingIsTransitDisplayFeature:(_Bool)arg1;

// Remaining properties
@property(nonatomic, readonly) NSArray *additionalPlaceInfos;
@property(nonatomic, readonly) int addressGeocodeAccuracy;
@property(nonatomic, readonly) NSArray *allPhotoAttributions;
@property(nonatomic, readonly) NSArray *alternateSearchableNames;
@property(nonatomic, readonly) NSArray *amenities;
@property(nonatomic, readonly) id <GEOAnnotatedItemList> annotatedItemList;
@property(nonatomic, readonly) NSArray *appleRatings;
@property(nonatomic, readonly) unsigned long long areaHighlightId;
@property(nonatomic, readonly) double areaInMeters;
@property(nonatomic, readonly) GEOAssociatedApp *associatedApp;
@property(nonatomic, readonly) GEOMapItemPlaceAttribution *attribution;
@property(nonatomic, readonly) NSString *bestAvailableCountryCode;
@property(nonatomic, readonly) unsigned long long brandMUID;
@property(nonatomic, readonly) NSArray *browseCategories;
@property(nonatomic, readonly) NSArray *businessHours;
@property(nonatomic, readonly) NSString *businessURL;
@property(nonatomic, readonly) _Bool canDownloadMorePhotos;
@property(nonatomic, readonly) NSArray *captionedPhotoAlbums;
@property(nonatomic, readonly) NSArray *childItems;
@property(nonatomic, readonly) GEOMapItemClientAttributes *clientAttributes;
@property(nonatomic, readonly) GEOMapItemContainedPlace *containedPlace;
@property(nonatomic, readonly) unsigned long long customIconID;
@property(nonatomic, readonly) NSString *disambiguationName;
@property(nonatomic, readonly) _Bool disputed;
@property(nonatomic, readonly) _Bool enableRAPLightweightFeedback;
@property(nonatomic, readonly) GEOEnclosingPlace *enclosingPlace;
@property(nonatomic, readonly) id <GEOEncyclopedicInfo> encyclopedicInfo;
@property(nonatomic, readonly) GEOEnhancedPlacement *enhancedPlacement;
@property(nonatomic, readonly) GEOEnrichmentData *enrichmentData;
@property(nonatomic, readonly) GEOEnrichmentInfo *enrichmentInfo;
@property(nonatomic, readonly) GEOExploreGuides *exploreGuides;
@property(nonatomic, readonly) NSArray *externalActionLinks;
@property(nonatomic, readonly) GEORestaurantFeaturesLink *featureLink;
@property(nonatomic, readonly) GEOPDFlyover *flyover;
@property(nonatomic, readonly) NSString *flyoverAnnouncementMessage;
@property(nonatomic, readonly) unsigned long long groundViewLocationId;
@property(nonatomic, readonly) _Bool hasAnyAmenities;
@property(nonatomic, readonly) _Bool hasAppleRatings;
@property(nonatomic, readonly) _Bool hasAreaHighlightId;
@property(nonatomic, readonly) _Bool hasAreaInMeters;
@property(nonatomic, readonly) _Bool hasBrandMUID;
@property(nonatomic, readonly) _Bool hasBusinessHours;
@property(nonatomic, readonly) _Bool hasCaptionedPhotoAlbum;
@property(nonatomic, readonly) _Bool hasCurrentOperatingHours;
@property(nonatomic, readonly) _Bool hasEnclosingPlace;
@property(nonatomic, readonly) _Bool hasEncyclopedicInfo;
@property(nonatomic, readonly) _Bool hasFeatureLink;
@property(nonatomic, readonly) _Bool hasFlyover;
@property(nonatomic, readonly) _Bool hasGroundViewLocationId;
@property(nonatomic, readonly) _Bool hasLinkedServices;
@property(nonatomic, readonly) _Bool hasMUID;
@property(nonatomic, readonly) _Bool hasOperatingHours;
@property(nonatomic, readonly) _Bool hasPOIClaim;
@property(nonatomic, readonly) _Bool hasPlaceCollectionPullQuotes;
@property(nonatomic, readonly) _Bool hasPlaceDescription;
@property(nonatomic, readonly) _Bool hasPlaceQuestionnaire;
@property(nonatomic, readonly) _Bool hasPriceRange;
@property(nonatomic, readonly) _Bool hasResolvablePartialInformation;
@property(nonatomic, readonly) _Bool hasResultProviderID;
@property(nonatomic, readonly) _Bool hasTelephone;
@property(nonatomic, readonly) _Bool hasTransit;
@property(nonatomic, readonly) _Bool hasUserRatingScore;
@property(nonatomic, readonly) _Bool hasVenueFeatureType;
@property(nonatomic, readonly) _Bool hasWifiFingerprintConfidence;
@property(nonatomic, readonly) _Bool hasWifiFingerprintLabelStatusCode;
@property(nonatomic, readonly) _Bool hasWifiFingerprintLabelType;
@property(nonatomic, readonly) GEOMapItemIdentifier *identifier;
@property(nonatomic, readonly) NSArray *identifierHistory;
@property(nonatomic, readonly) _Bool inLinkedPlaceRelationship;
@property(nonatomic, readonly) _Bool isStandAloneBrand;
@property(nonatomic, readonly) _Bool isTransitDisplayFeature;
@property(nonatomic, readonly) NSString *iso3166CountryCode;
@property(nonatomic, readonly) NSString *iso3166SubdivisionCode;
@property(nonatomic, readonly) GEOLabelGeometry *labelGeometry;
@property(nonatomic, readonly) NSArray *linkedServices;
@property(nonatomic, readonly) NSString *mapsCategoryId;
@property(nonatomic, readonly) unsigned int maxScoreForPriceRange;
@property(nonatomic, readonly) GEOMessageLink *messageLink;
@property(nonatomic, readonly) GEOMiniBrowseCategories *miniBrowseCategories;
@property(nonatomic, readonly) unsigned long long muid;
@property(nonatomic, readonly) GEOMuninViewState *muninViewState;
@property(nonatomic, readonly) _Bool needsAttribution;
@property(nonatomic, readonly) float normalizedUserRatingScore;
@property(nonatomic, readonly) unsigned long long openingHoursOptions;
@property(nonatomic, readonly) _Bool optsOutOfTelephoneAds;
@property(nonatomic, readonly) GEOAppleRating *overallRating;
@property(nonatomic, readonly) int parsecSectionType;
@property(nonatomic, readonly) NSArray *photos;
@property(nonatomic, readonly) GEOMapItemPhotosAttribution *photosAttribution;
@property(nonatomic, readonly) GEOPlace *place;
@property(nonatomic, readonly) NSArray *placeCollectionPullQuotes;
@property(nonatomic, readonly) NSArray *placeCollections;
@property(nonatomic, readonly) NSArray *placeCollectionsIds;
@property(nonatomic, readonly) GEOPDPlace *placeData;
@property(nonatomic, readonly) NSData *placeDataAsData;
@property(nonatomic, readonly) NSString *placeDescription;
@property(nonatomic, readonly) int placeDisplayStyle;
@property(nonatomic, readonly) int placeDisplayType;
@property(nonatomic, readonly) GEOPlaceQuestionnaire *placeQuestionnaire;
@property(nonatomic, readonly) GEOPlaceResult *placeResult;
@property(nonatomic, readonly) int placeType;
@property(nonatomic, readonly) GEOPlacecardLayoutData *placecardLayoutData;
@property(nonatomic, readonly) NSString *poiCategory;
@property(nonatomic, readonly) GEOPOIClaim *poiClaim;
@property(nonatomic, readonly) NSString *poiPinpointURLString;
@property(nonatomic, readonly) NSString *poiSurveyURLString;
@property(nonatomic, readonly) GEOPriceDescription *priceDescription;
@property(nonatomic, readonly) unsigned int priceRange;
@property(nonatomic, readonly) NSURL *providerURL;
@property(nonatomic, readonly) NSArray *quickLinks;
@property(nonatomic, readonly) NSArray *relatedPlaceLists;
@property(nonatomic, readonly) _Bool responseStatusIncomplete;
@property(nonatomic, readonly) int resultProviderID;
@property(nonatomic, readonly) unsigned int resultSnippetDistanceDisplayThreshold;
@property(nonatomic, readonly) NSString *resultSnippetLocationString;
@property(nonatomic, readonly) NSArray *reviews;
@property(nonatomic, readonly) GEOMapItemReviewsAttribution *reviewsAttribution;
@property(nonatomic, readonly) NSArray *roadAccessPoints;
@property(nonatomic, readonly) unsigned int sampleSizeForUserRatingScore;
@property(nonatomic, readonly) NSArray *secondaryQuickLinks;
@property(nonatomic, readonly) _Bool showSuggestAnEditButton;
@property(nonatomic, readonly) GEOStorefrontInfo *storefrontInfo;
@property(nonatomic, readonly) GEOStorefrontPresentationInfo *storefrontPresentationInfo;
@property(nonatomic, readonly) GEOFeatureStyleAttributes *styleAttributes;
@property(nonatomic, readonly) NSString *telephone;
@property(nonatomic, readonly) NSArray *tips;
@property(nonatomic, readonly) unsigned long long totalPhotoCount;
@property(nonatomic, readonly) id <GEOTransitAttribution> transitAttribution;
@property(nonatomic, readonly) id <GEOMapItemTransitInfo> transitInfo;
@property(nonatomic, readonly) id <GEOTransitVehiclePosition> transitVehiclePosition;
@property(nonatomic, readonly) _Bool valid;
@property(nonatomic, readonly) NSString *vendorID;
@property(nonatomic, readonly) int venueFeatureType;
@property(nonatomic, readonly) id <GEOMapItemVenueInfo> venueInfo;
@property(nonatomic, readonly) GEOViewportFrame *viewportFrame;
@property(nonatomic, readonly) NSString *walletCategoryIdentifier;
@property(nonatomic, readonly) NSString *walletCategoryLocalizedString;
@property(nonatomic, readonly) NSString *walletCategoryLocalizedStringLocale;
@property(nonatomic, readonly) GEOStyleAttributes *walletCategoryStyling;
@property(nonatomic, readonly) NSString *walletMapsCategoryIdentifier;
@property(nonatomic, readonly) NSString *walletPlaceLocalizedString;
@property(nonatomic, readonly) NSString *walletPlaceLocalizedStringLocale;
@property(nonatomic, readonly) GEOStyleAttributes *walletPlaceStyling;
@property(nonatomic, readonly) NSURL *webURL;
@property(nonatomic, readonly) unsigned int wifiFingerprintConfidence;
@property(nonatomic, readonly) int wifiFingerprintLabelStatusCode;
@property(nonatomic, readonly) int wifiFingerprintLabelType;
@end

