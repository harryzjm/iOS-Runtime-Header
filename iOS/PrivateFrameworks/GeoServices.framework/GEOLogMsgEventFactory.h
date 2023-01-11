//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GEOLogMsgEventFactory : NSObject
{
    NSMutableDictionary *_appStateTransitionData;
    NSMutableDictionary *_appStateTransitionTimingData;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)logMsgEventForTileCacheMissAnalyticForRequestReason:(int)arg1 missType:(int)arg2 missCount:(unsigned int)arg3 missByteCount:(unsigned int)arg4 httpStatus:(unsigned int)arg5 errors:(id)arg6;
- (id)logMsgEventForTileCacheHitAnalyticForRequestReason:(int)arg1 tileSource:(int)arg2 hitCount:(unsigned int)arg3 hitByteCount:(unsigned int)arg4;
- (id)logMsgEventForParkedCarAtLocation:(id)arg1 atTime:(double)arg2 withUncertainty:(double)arg3;
- (id)logMsgEventForBatchTrafficProbes:(id)arg1;
- (id)logMsgEventForRealtimeTrafficProbes:(id)arg1;
- (id)logMsgEventForWiFiConnectionQuality:(id)arg1;
- (id)logMsgEventForClientACKeypressWithQuery:(id)arg1 queryTokens:(id)arg2 acSuggestionEntries:(id)arg3 keyPressStatus:(int)arg4;
- (id)logMsgEventForClientACResponseWithQuery:(id)arg1 queryTokens:(id)arg2 acSuggestionEntries:(id)arg3;
- (id)logMsgEventForClientACSuggestionsWithQuery:(id)arg1 queryTokens:(id)arg2 acSuggestionEntries:(id)arg3 selectedIndex:(int)arg4;
- (id)logMsgEventForTelemetricWithEntities:(id)arg1;
- (id)logMsgEventForTelemetricWithEventKey:(int)arg1 eventValue:(unsigned long long)arg2 eventDetail:(id)arg3;
- (id)logMsgEventForFullNavTraceWithData:(id)arg1;
- (id)bookedTableWithBookedUsingMaps:(_Bool)arg1 cancelled:(_Bool)arg2 viewedInProactiveTray:(_Bool)arg3 tappedProactiveTrayItem:(_Bool)arg4 viewedInPlacecard:(_Bool)arg5 viewedDetailsInPlacecard:(_Bool)arg6 isAsync:(_Bool)arg7 bookedAppId:(id)arg8 muid:(unsigned long long)arg9 called:(_Bool)arg10 routed:(_Bool)arg11 tappedChangeReservation:(_Bool)arg12 tappedCancelReservation:(_Bool)arg13;
- (id)logMsgEventForTablebookedSessionWithSessionID:(id)arg1 bookedTables:(id)arg2;
- (id)logMsgEventForTablebookingWithSessionID:(id)arg1 endState:(int)arg2 endView:(int)arg3 bookTableAppId:(id)arg4 muid:(unsigned long long)arg5 blurredReservationTimestamp:(long long)arg6 blurredBookingTimestamp:(long long)arg7 durationOfSessionInSeconds:(double)arg8 installNeeded:(_Bool)arg9 installNeededTappedAppId:(id)arg10 installCompleted:(_Bool)arg11 tableSize:(unsigned int)arg12 addedSpecialRequest:(_Bool)arg13 swipedAvailableTimes:(_Bool)arg14 tappedDatePicker:(_Bool)arg15 errorMessages:(id)arg16;
- (id)logMsgEventForRidebookedWithSessionId:(id)arg1 statusIssue:(int)arg2 bookedUsingMaps:(_Bool)arg3 cancelled:(_Bool)arg4 contactedDriver:(_Bool)arg5 viewedInProactiveTray:(_Bool)arg6 tappedProactiveTrayItem:(_Bool)arg7 viewedDetails:(_Bool)arg8 invalidVehicleLocation:(_Bool)arg9 missingVehicleLocation:(_Bool)arg10 rideAppId:(id)arg11 rideAppVersion:(id)arg12 numberOfAppsInstalled:(unsigned long long)arg13 enabled:(unsigned long long)arg14 intentResponseFailures:(id)arg15;
- (id)logMsgEventForSessionId:(id)arg1 statusIssue:(int)arg2 ridebookingEndState:(int)arg3 endView:(int)arg4 rideAppId:(id)arg5 rideAppVersion:(id)arg6 originBlurred:(id)arg7 destinationBlurred:(id)arg8 exploredOtherOptions:(_Bool)arg9 rideType:(id)arg10 distanceToPickupInMeters:(double)arg11 paymentIsApplePay:(_Bool)arg12 numberOfAvailableExtensions:(unsigned long long)arg13 switchedApp:(_Bool)arg14 comparedRideOptions:(_Bool)arg15 showedSurgePricingAlert:(_Bool)arg16 durationOfSessionInSeconds:(double)arg17 installedApp:(_Bool)arg18 timestamp:(long long)arg19 unavailable:(_Bool)arg20 movedPickupLocation:(_Bool)arg21 errorMessages:(id)arg22 numberOfAppsInstalled:(unsigned long long)arg23 enabled:(unsigned long long)arg24 intentResponseFailures:(id)arg25;
- (id)logMsgEventForCommuteDoomWindow:(id)arg1 exitTime:(id)arg2 destinations:(id)arg3 reason:(long long)arg4 networkRequests:(unsigned long long)arg5 alerts:(unsigned long long)arg6;
- (id)logMsgEventForProactiveSuggestionInteractionForType:(int)arg1 items:(id)arg2 interactedWithItemIndex:(int)arg3 forDuration:(double)arg4;
- (id)logMsgsEventForMapsWidgetsInteractionForType:(int)arg1 endState:(int)arg2 widgetSpecificObject:(id)arg3 wasLocked:(_Bool)arg4 startDate:(id)arg5 forDuration:(double)arg6;
- (id)logMsgEventForRefineSearchSessionOfType:(int)arg1 refineSearchType:(int)arg2 suggestionItems:(id)arg3 searchString:(id)arg4;
- (id)logMsgEventForListInteractionSessionOfType:(int)arg1 listResultItems:(id)arg2 searchString:(id)arg3;
- (id)logMsgEventForLogFrameworkMetricType:(int)arg1 metricState:(int)arg2 purgeReason:(int)arg3 logMessageType:(int)arg4;
- (id)logMsgEventForLogFrameworkMetricType:(int)arg1 metricState:(int)arg2 purgeReason:(int)arg3 logCollectionRequest:(id)arg4;
- (id)logMsgEventForTimeToLeaveIntialTravelTime:(double)arg1;
- (id)logMsgEventForTimeToLeaveHypothesisWithEarlyDepartureDelta:(double)arg1 lateDepartureDelta:(double)arg2 earlyArrivalDelta:(double)arg3 lateArrivalDelta:(double)arg4 rerouteCount:(unsigned long long)arg5 uiNotification:(int)arg6;
- (id)logMsgEventForTransitAppLaunchWithBundleId:(id)arg1 sourceLocation:(id)arg2 destinationLocation:(id)arg3 userSessionSnapshot:(id)arg4;
- (id)logMsgEventForDirectionsFeedbacks:(id)arg1 finalLocation:(id)arg2 arrivedAtDestination:(_Bool)arg3 navigationAudioFeedback:(struct GEONavigationAudioFeedback)arg4 durationOfTrip:(double)arg5 durationsInNavigationModes:(id)arg6;
- (id)logMsgEventForCacheHitWithCacheType:(int)arg1 cacheHitCount:(unsigned int)arg2 cacheMissCount:(unsigned int)arg3;
- (id)logMsgEventForGenericAppErrorDomain:(id)arg1 appErrorCode:(long long)arg2;
- (id)logMsgEventForTileUsageWithRequestAppId:(id)arg1 andTileUsageInfo:(id)arg2;
- (id)logMsgEventForNetworkService:(int)arg1 requestAppId:(id)arg2 requestErrorDomain:(id)arg3 requestErrorCode:(long long)arg4 requestDataSize:(int)arg5 responseDataSize:(int)arg6 responseTime:(int)arg7 httpResponseStatusCode:(int)arg8 remoteAddressAndPort:(id)arg9;
- (id)logMsgEventForPlaceDataCacheFromAppWithID:(id)arg1;
- (id)logMsgEventForTileSetState:(int)arg1 newCoverage:(double)arg2 oldCoverage:(double)arg3 seconds:(double)arg4;
- (id)logMsgEventForStateTransition:(id)arg1 generateOnlyIfStateChanged:(_Bool)arg2 userSessionSnapshot:(id)arg3;
- (id)logMsgEventForStaleResources:(id)arg1 userSessionSnapshot:(id)arg2;
- (id)logMsgEventForMapLaunch:(id)arg1 sourceAppId:(id)arg2 isLaunchedFromTTL:(_Bool)arg3 ttlEventTime:(id)arg4;
- (id)logMsgEventForUserAction:(id)arg1 eventValue:(id)arg2 eventTarget:(int)arg3;
- (int)_bucketValueForTravelTime:(double)arg1;
- (int)_bucketValueForTimeDelta:(double)arg1;
- (void)clearStateTimingData;
- (id)init;

@end

