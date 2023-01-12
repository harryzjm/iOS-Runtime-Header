//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC11WeatherMaps25InteractiveViewController : UIViewController
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *mapLocationAccessibilityModelManager;
    MISSING_TYPE *$__lazy_storage_$_mapView;
    MISSING_TYPE *configuration;
    MISSING_TYPE *selectedLocationZoomLevel;
    MISSING_TYPE *isUserInteractionEnabled;
    MISSING_TYPE *annotationManager;
    MISSING_TYPE *cameraFocusFactory;
    MISSING_TYPE *geocodeManager;
    MISSING_TYPE *interaction;
    MISSING_TYPE *locationMetadataManager;
    MISSING_TYPE *overlayManager;
    MISSING_TYPE *overlayProgressReporter;
    MISSING_TYPE *visibleMapRect;
    MISSING_TYPE *backgroundEffectView;
    MISSING_TYPE *overlayProgressBar;
    MISSING_TYPE *activeOverlay;
    MISSING_TYPE *annotatedLocations;
    MISSING_TYPE *presentingOverlayKind;
    MISSING_TYPE *selectedLocation;
    MISSING_TYPE *doNotForwardSelectedAnnotationToDelegate;
    MISSING_TYPE *debugLabel;
    MISSING_TYPE *previousParent;
    MISSING_TYPE *lastHoverLocation;
    MISSING_TYPE *controlsView;
    MISSING_TYPE *controlsAdded;
    MISSING_TYPE *scrubberStore;
    MISSING_TYPE *scrubberObserver;
    MISSING_TYPE *scrubberOverlayViewController;
    MISSING_TYPE *progressBarHeight;
    MISSING_TYPE *verticalSpacingAttributionToScrubber;
    MISSING_TYPE *$__lazy_storage_$_backgroundEffectManagerBlur;
    MISSING_TYPE *$__lazy_storage_$_backgroundEffectManagerUltraThin;
    MISSING_TYPE *backdropLayerBlur;
    MISSING_TYPE *backdropLayerUltraThin;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)zoomOut;
- (void)zoomIn;
- (void)selectAirQualityOverlay;
- (void)selectPrecipitationOverlay;
- (void)selectTemperatureOverlay;
@property(nonatomic, readonly) NSArray *keyCommands;
- (void)didHoverMap:(id)arg1;
- (void)didTapMap:(id)arg1;
- (void)mapGestureDidChange;
- (_Bool)accessibilityPerformEscape;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

@end

