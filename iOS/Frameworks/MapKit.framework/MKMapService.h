//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <MapKit/GEOLogContextDelegate-Protocol.h>

@class NSString;

@interface MKMapService : NSObject <GEOLogContextDelegate>
{
    int _deviceOrientation;
    CDUnknownBlockType _getLogContextForEventBlock;
}

+ (id)sharedService;
@property int deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(copy, nonatomic) CDUnknownBlockType getLogContextForEventBlock; // @synthesize getLogContextForEventBlock=_getLogContextForEventBlock;
- (void).cxx_destruct;
- (id)logContextForLogMsgEvent:(id)arg1;
- (id)ticketForNearestTransitStation:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 traits:(id)arg3;
- (id)ticketForTransitLines:(id)arg1 traits:(id)arg2;
- (id)ticketForChildPlace:(id)arg1 traits:(id)arg2;
- (id)mapItemsForPlacesInDetails:(id)arg1;
- (id)ticketForBrandLookupWithIMessageUid:(id)arg1 traits:(id)arg2;
- (id)ticketForProblemResubmission:(id)arg1 traits:(id)arg2;
- (id)ticketForProblem:(id)arg1 mapItemForProblemContext:(id)arg2 pushToken:(id)arg3 allowContactBackAtEmailAddress:(id)arg4 traits:(id)arg5;
- (void)_mapItemsForResponseData:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)_mk_ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 traits:(id)arg3;
- (id)ticketForSearchFieldPlaceholderWithTraits:(id)arg1;
- (id)ticketForBatchPopularNearbyForSearchCategories:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForPopularNearbyForSearchCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForSearchCategory:(id)arg1 venueIdentifier:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)ticketForSearchCategory:(id)arg1 searchString:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)ticketForSearchAlongRouteWithCategory:(id)arg1 zilchData:(id)arg2 sessionState:(id)arg3 routeId:(id)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;
- (id)ticketForCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForCategoryListWithTraits:(id)arg1;
- (id)ticketForSearchPoisForBrandMUID:(unsigned long long)arg1 traits:(id)arg2;
- (id)ticketForURLQuery:(id)arg1 identifier:(id)arg2 resultProviderId:(int)arg3 contentProvider:(id)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 relatedSearchSuggestion:(id)arg3 maxResults:(unsigned int)arg4 traits:(id)arg5;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)ticketForExternalTransitStationCodes:(id)arg1 sourceID:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4 traits:(id)arg5;
- (id)ticketForMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 paymentNetwork:(id)arg3 transactionDate:(id)arg4 transactionLocation:(id)arg5 traits:(id)arg6;
- (id)ticketForCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2;
- (id)ticketForPlaceRefinementRequestWithCoordinate:(struct CLLocationCoordinate2D *)arg1 addressLine:(id)arg2 placeName:(id)arg3 traits:(id)arg4;
- (id)ticketForMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)_ticketForReverseGeocodeDroppedPinCoordinate:(struct CLLocationCoordinate2D)arg1 floorOrdinal:(id)arg2 traits:(id)arg3;
- (id)ticketForReverseGeocodeDroppedPinCoordinate:(struct CLLocationCoordinate2D)arg1 floorOrdinal:(int)arg2 traits:(id)arg3;
- (id)ticketForReverseGeocodeDroppedPinCoordinate:(struct CLLocationCoordinate2D)arg1 traits:(id)arg2;
- (id)ticketForReverseGeocodeCoordinate:(struct CLLocationCoordinate2D)arg1 traits:(id)arg2;
- (id)_ticketForReverseGeocodeCoordinate:(struct CLLocationCoordinate2D)arg1 floorOrdinal:(int)arg2 includeEntryPoints:(_Bool)arg3 preserveOriginalLocation:(_Bool)arg4 traits:(id)arg5;
- (id)_ticketForReverseGeocodeCoordinate:(struct CLLocationCoordinate2D)arg1 includeEntryPoints:(_Bool)arg2 preserveOriginalLocation:(_Bool)arg3 traits:(id)arg4;
- (id)ticketForForwardGeocodeAddressDictionary:(id)arg1 traits:(id)arg2;
- (id)ticketForForwardGeocodeString:(id)arg1 traits:(id)arg2;
- (id)ticketForForwardGeocodeAddress:(id)arg1 traits:(id)arg2;
- (id)ticketForExternalBusinessID:(id)arg1 contentProvider:(id)arg2 traits:(id)arg3;
- (id)ticketForPhoneNumbers:(id)arg1 allowCellularDataForLookup:(_Bool)arg2 traits:(id)arg3;
- (id)ticketForFreshBusinessClaimComponentWithIdentifier:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3;
- (id)ticketForNonExpiredIdentifier:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4;
- (id)ticketForFreshIdentifier:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4;
- (id)ticketForIdentifiers:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4;
- (id)ticketForIdentifiers:(id)arg1 traits:(id)arg2;
- (id)ticketForMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4;
- (id)ticketForMUIDs:(id)arg1 traits:(id)arg2;
- (id)defaultTraitsForAnalyticsWithTraits:(id)arg1;
- (id)defaultTraitsWithTraits:(id)arg1;
- (id)defaultTraitsWithTransportType:(unsigned long long)arg1;
- (id)defaultTraits;
- (void)_applicationDidChangeStatusBar:(id)arg1;
- (id)init;
- (void)incrementAGGDInteractedWithPlaceCardKeyWithType:(unsigned long long)arg1 incrementValue:(long long)arg2;
- (void)incrementAGGDOpenPlaceCardKeyWithType:(unsigned long long)arg1 incrementValue:(long long)arg2;
- (void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 selectedReportAnIssueIndex:(unsigned int)arg4;
- (void)capturePlaceCardUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 placeCardType:(int)arg6 categoriesDisplayed:(id)arg7 categorySelected:(id)arg8;
- (void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 categoriesDisplayed:(id)arg4 categorySelected:(id)arg5;
- (void)captureTransitPlaceCardUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6 targetID:(unsigned long long)arg7 providerID:(id)arg8 animationID:(unsigned long long)arg9 transitCardCategory:(int)arg10 transitSystem:(id)arg11 transitDepartureSequence:(id)arg12 transitIncident:(id)arg13;
- (void)capturePlaceCardUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6 targetID:(unsigned long long)arg7 providerID:(id)arg8 animationID:(unsigned long long)arg9 actionURL:(id)arg10 photoID:(id)arg11 placeCardType:(int)arg12 localizedMapItemCategory:(id)arg13 availableActions:(id)arg14 unactionableUIElements:(id)arg15;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 placeActionDetails:(id)arg4;
- (void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 placeActionDetails:(id)arg4;
- (void)captureUserActionAsString:(id)arg1 flyoverAnimationID:(unsigned long long)arg2;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6 mapRegion:(id)arg7 zoomLevel:(double)arg8 mapType:(int)arg9;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6;
- (void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 routeDetails:(id)arg4;
- (void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapRegion:(id)arg4 zoomLevel:(double)arg5 mapType:(int)arg6;
- (void)captureMapLaunchEventWithLaunchUrl:(id)arg1 sourceAppId:(id)arg2 isLaunchedFromTTL:(_Bool)arg3 ttlEventTime:(id)arg4;
- (void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3;
- (void)captureExtensionStateWithIsTableBookingAppsInstalled:(_Bool)arg1 isTableBookingAppsEnabled:(_Bool)arg2;
- (void)captureExtensionStateWithIsRideBookingAppsInstalled:(_Bool)arg1 isRideBookingAppsEnabled:(_Bool)arg2;
- (void)capturePairedDeviceStateWithDeviceType:(int)arg1 isConnected:(_Bool)arg2 deviceOSVersion:(id)arg3 deviceHwIdentifier:(id)arg4;
- (void)captureMapSettingsWithLabelEnabled:(_Bool)arg1;
- (void)captureMapSettingsWithTrafficEnabled:(_Bool)arg1;
- (void)captureMapSettingsWithFindMyCarEnabled:(_Bool)arg1;
- (void)captureMapSettingsWithPauseSpokenAudioEnabled:(_Bool)arg1;
- (void)captureMapSettingsWithNavVoiceVolume:(int)arg1;
- (void)captureMapSettingsWithAvoidHighways:(_Bool)arg1;
- (void)captureMapSettingsWithAvoidTolls:(_Bool)arg1;
- (void)captureMapSettingsWithPreferredTransportMode:(int)arg1;
- (void)captureMapsSettingsWithPreferredTransportMode:(int)arg1 avoidTolls:(_Bool)arg2 avoidHighways:(_Bool)arg3 navVoiceVolume:(int)arg4 pauseSpokenAudioEnabled:(_Bool)arg5 findMyCarEnabled:(_Bool)arg6 trafficEnabled:(_Bool)arg7 labelEnabled:(_Bool)arg8;
- (void)captureMapUIStateWithIsAirQualityShown:(_Bool)arg1;
- (void)captureMapUIStateWithLayoutInfo:(int)arg1 layoutStyle:(int)arg2 numberOfTabs:(unsigned int)arg3 currentTabIndex:(unsigned int)arg4;
- (void)captureMapUIStateWithLayoutInfo:(int)arg1 layoutStyle:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

