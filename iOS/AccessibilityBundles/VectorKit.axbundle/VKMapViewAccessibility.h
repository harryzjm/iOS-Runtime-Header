//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VKMapViewAccessibilityElementManagerDelegate-Protocol.h"

@interface VKMapViewAccessibility <VKMapViewAccessibilityElementManagerDelegate>
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)setCurrentLocationText:(id)arg1;
- (void)setMapType:(int)arg1;
- (void)_axHandleLabelsDidLayout;
- (void)labelManagerDidLayout;
- (void)mapLabelsDidLayout:(id)arg1;
- (void)didUpdateSceneStatus:(unsigned char)arg1;
- (id)initShouldRasterize:(_Bool)arg1 inBackground:(_Bool)arg2 contentScale:(double)arg3 auditToken:(id)arg4;
- (void)_axSetMapLabelLayoutTimer:(id)arg1;
- (id)_axMapLabelLayoutTimer;
- (void)_axMapVisibleRegionDidChange;
- (void)_axMapsAccessibilityPotentiallyEnabled;
- (void)_axUserTrackingModeChange:(id)arg1;
- (void)_axUpdateElementsComplete:(id)arg1;
- (id)accessibilityTourStatus;
- (void)_axUpdateElements;
- (long long)_axOrientationOfElements;
- (CDStruct_aca18c62)_axBoundsOfElements;
- (id)_axElements;
- (void)_axLoadAccessibility;
- (id)_axTourGuideElement;
- (id)_axUserLocationMarker;
- (_Bool)_axShouldSummarizeVisibleBounds;
- (void)_axStartListeningForMapVisibleRegionChanged;
- (void)_axStartListeningForMapAccessibilityEnabled;
- (void)_axStartListeningForUserTrackingModeChange;
- (void)_axStartListeningForUpdateAccessibilityElementsComplete;
- (id)_axTourGuideManager;
- (id)accessibilityElementManager;
- (id)_retrieveAXElementManager;
- (_Bool)accessibilityIsShowingRoutes;
- (_Bool)_axTrackingEnabled;
- (_Bool)_axTrackingWithHeadingEnabled;
- (void)_axSetTrackingMode:(long long)arg1;
- (long long)_axTrackingMode;
- (_Bool)_axElementsInvalidForVisibleBounds;
- (void)_accessibilityMapViewDidChangeRegionAnimated:(_Bool)arg1;
- (void)_accessibilityMapViewDidChangeVisibleRegion;
- (void)_axSummaryForVisibleBounds;
- (void)_axSetLastSummaryForVisibleBounds:(id)arg1;
- (id)_axLastSummaryForVisibleBounds;
- (CDStruct_2c43369c)accessibilityConvertScreenPointToCoordinate:(struct CGPoint)arg1;
- (id)_axWindow;
- (id)_axMapsDelegate;
- (id)_axMapViewDelegate;
- (double)accessibilityYaw;
- (long long)accessibilityOrientation;
- (CDStruct_2c43369c)accessibilityCenter;
- (CDStruct_aca18c62)accessibilityBounds;
- (id)_accessibilityScrollStatus;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)isAccessibilityElement;
- (_Bool)accessibilityOnlyShowRouteNodesDuringTransit;
- (_Bool)accessibilityMapTypeShouldShowTransit;
- (_Bool)accessibilityMapTypeSupportsAccessibility;
- (int)_accessibilityMapType;
- (float)accessibilityZoomLevel;
- (void)accessibilityZoom:(double)arg1 point:(struct CGPoint)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)accessibilityZoom:(double)arg1 point:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)accessibilityIsShowingCalloutAnnotationView;
- (id)accessibilityCalloutAnnotationView;
- (_Bool)accessibilityIsInExplorationMode;
- (_Bool)accessibilityIsInTourGuideMode;
- (_Bool)accessibilityMapLoadingComplete;
- (_Bool)_allowCustomActionHintSpeakOverride;
- (void)accessibilityDecreaseTrackingDetail;
- (void)accessibilityIncreaseTrackingDetail;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint)arg1;
- (void)accessibilityZoomInAtPoint:(struct CGPoint)arg1;
- (struct CGPoint)_accessibilityMapViewPointForZoomPoint:(struct CGPoint)arg1;
- (_Bool)accessibilityViewBoundsContainsPathPoint:(struct CGPoint)arg1;
- (void)accessibilityClearVisibleAXBoundsFrame;
- (struct CGRect)accessibilityVisibleAXViewBounds;
- (id)accessibilityLayerHostingView;
- (float)accessibilityDistanceToEndOfRoad:(struct CGPoint)arg1 forAngle:(float)arg2 withElement:(id)arg3;
- (float)accessibilityDistance:(struct CGPoint)arg1 forAngle:(float)arg2 toRoad:(id)arg3 withElement:(id)arg4;
- (id)accessibilityUpcomingRoadsForPoint:(struct CGPoint)arg1 forAngle:(float)arg2 withElement:(id)arg3;
- (void)accessibilitySetMapZoomLevel:(double)arg1 center:(CDStruct_2c43369c)arg2 yaw:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)accessibilityIntersectorsForRoad:(id)arg1 withPoint:(struct CGPoint)arg2;
- (void)explorationStateChanged:(long long)arg1;
- (void)_accessibilityMapsExplorationEnd;
- (_Bool)_accessibilityMapsExplorationIsPending;
- (_Bool)_accessibilityMapsExplorationIsActive;
- (id)_accessibilityMapsExplorationDecreaseVerbosity;
- (id)_accessibilityMapsExplorationIncreaseVerbosity;
- (id)_accessibilityMapsExplorationCurrentIntersectionDescription;
- (id)_accessibilityMapsExplorationCurrentRoadsWithAngles;
- (void)_accessibilityMapsExplorationRecordTouchpoint:(struct CGPoint)arg1;
- (void)_accessibilityMapsExplorationContinueWithVertexIndex:(unsigned long long)arg1;
- (struct CGPoint)_axIntersectionBetweenRoad:(id)arg1 andOtherRoad:(id)arg2;
- (unsigned long long)accessibilityTraits;
- (long long)accessibilityContainerType;
- (unsigned long long)_accessibilityAutomationType;
- (_Bool)accessibilityScroll:(long long)arg1;
- (float)accessibilityRealDistanceBetweenPoint:(struct CGPoint)arg1 screenPoint2:(struct CGPoint)arg2;
- (struct CGRect)accessibilityPositionFrameForElement:(CDStruct_aca18c62)arg1;
- (_Bool)accessibilityPerformEscape;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (_Bool)accessibilityActivate;
- (struct CGPoint)accessibilityConvertCoordinateToWindow:(CDStruct_2c43369c)arg1;
- (id)accessibilityElements;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axInitializeTimers;
- (void)_axSetCurrentLocationText:(id)arg1;
- (id)_axCurrentLocationText;

@end
