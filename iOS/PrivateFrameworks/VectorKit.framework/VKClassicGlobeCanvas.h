//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, VKARCameraController, VKGlobeCameraController;
@protocol VKInteractiveMapDelegate;

__attribute__((visibility("hidden")))
@interface VKClassicGlobeCanvas
{
    VKGlobeCameraController *_globeCameraController;
    int _mapType;
    double _contentScale;
    _Bool _disableRoads;
    _Bool _disableLabels;
    struct AltitudeDebugSettings _debugSettings;
    struct unique_ptr<md::GlobeAdapter, std::default_delete<md::GlobeAdapter>> _globeAdapter;
    void *_renderer;
    struct shared_ptr<md::GlobeOverlayContainer> _overlayContainer;
    struct shared_ptr<ggl::FlyoverLibrary> _flyoverLibrary;
    _Bool _initialized;
    _Bool _canShowFlyover;
    struct shared_ptr<bool> _isDead;
    _Bool _isLoading;
    _Bool _isDownloading;
    _Bool _coarseLoading;
    _Bool _tourIsDownloading;
    void *_loadingStatusTracker;
    double _currentZoomLevel;
    CDUnknownBlockType _sceneDidLoadCallback;
    VKARCameraController *_arCameraController;
    _Bool _arRoadDisabledState;
    struct CGSize _lastCanvasSize;
    _Bool _trafficEnabled;
    int _flyoverMode;
    id <VKInteractiveMapDelegate> _delegate;
}

+ (_Bool)supportsMapType:(int)arg1 scale:(int)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) int flyoverMode; // @synthesize flyoverMode=_flyoverMode;
@property(nonatomic) _Bool trafficEnabled; // @synthesize trafficEnabled=_trafficEnabled;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
@property(nonatomic) _Bool disableLabels; // @synthesize disableLabels=_disableLabels;
@property(nonatomic) _Bool disableRoads; // @synthesize disableRoads=_disableRoads;
@property(readonly, nonatomic) VKGlobeCameraController *globeCameraController; // @synthesize globeCameraController=_globeCameraController;
@property(copy, nonatomic) CDUnknownBlockType sceneDidLoadCallback; // @synthesize sceneDidLoadCallback=_sceneDidLoadCallback;
@property(readonly, nonatomic) _Bool flyoverAvailable; // @synthesize flyoverAvailable=_canShowFlyover;
@property(nonatomic) __weak id <VKInteractiveMapDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didBecomeInActive;
- (void)didBecomeActive;
- (void)transitionToTracking:(_Bool)arg1 mapMode:(long long)arg2 startLocation:(CDStruct_c3b9c2ee)arg3 startCourse:(double)arg4 cameraController:(id)arg5 pounceCompletionHandler:(CDUnknownBlockType)arg6;
- (struct GlobeOverlayContainer *)overlayContainer;
- (void)_setDefaultFov:(float)arg1;
- (void)disableTileAnalytics;
- (void)enableTileAnalytics;
- (id)flyoverStatistics;
- (void)resetFlyoverStatistics;
- (void)disableFlyoverStatistics;
- (void)enableFlyoverStatistics;
- (void)setupMapScene;
- (void)waitForLoading;
- (void)_updateDebugSettings;
- (void)didReceiveMemoryWarning:(_Bool)arg1 beAggressive:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *overlays;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)removeOverlay:(id)arg1;
- (void)addOverlay:(id)arg1;
- (_Bool)shouldHideOffscreenSelectedAnnotation;
- (CDUnknownBlockType)annotationCoordinateTest;
- (CDUnknownBlockType)annotationRectTest;
- (id)attributionsForCurrentRegion;
@property(readonly, nonatomic) NSArray *visibleTileSets;
- (void)debugHighlightObjectAtPoint:(struct CGPoint)arg1 highlightTarget:(unsigned char)arg2;
- (void)didPresent;
- (void)updateCameraForFrameResize;
- (void)_update;
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;
- (struct CGPoint)convertCoordinateToCameraModelPoint:(CDStruct_c3b9c2ee)arg1;
- (struct CGPoint)convertCoordinateToPoint:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)convertPointToCoordinateOnSphere:(struct CGPoint)arg1;
- (CDStruct_c3b9c2ee)convertPointToCoordinate:(struct CGPoint)arg1;
- (struct CGPoint)convertMapPointToPoint:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)convertPointToMapPoint:(struct CGPoint)arg1;
- (void)stopAnimations;
- (void)resumeFlyoverTourAnimation;
- (void)pauseFlyoverTourAnimation;
- (void)startFlyoverTourAnimation:(unsigned long long)arg1 animateToStart:(_Bool)arg2 labelChanged:(CDUnknownBlockType)arg3 stateChange:(CDUnknownBlockType)arg4;
- (void)stopFlyoverAnimation;
- (void)startFlyoverAnimation:(id)arg1 animateToStart:(_Bool)arg2 labelChanged:(CDUnknownBlockType)arg3 stateChange:(CDUnknownBlockType)arg4;
- (void)prepareFlyoverAnimation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)createFlyoverPreTourAnimation:(id)arg1 duration:(double)arg2;
- (void)transferStateFromCanvas:(id)arg1;
- (struct CGPoint)_centerScreenPoint;
- (void)stopSnappingAnimations;
- (id)detailedDescription;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setCamera:(shared_ptr_46708168)arg1;
- (const void *)_clientStyleState;
- (const void *)_styleManager;
- (void)_reloadStylesheet;
- (id)consoleString:(_Bool)arg1;
- (void)dealloc;
- (void)willDealloc;
- (id)initWithMapEngine:(void *)arg1 inBackground:(_Bool)arg2;
- (void)stopLoading;
- (void)setMapType:(int)arg1 animated:(_Bool)arg2;
- (_Bool)isPointValidForGesturing:(struct CGPoint)arg1;
@property(readonly, nonatomic) VKARCameraController *arCameraController; // @synthesize arCameraController=_arCameraController;
- (_Bool)useNewRenderPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

