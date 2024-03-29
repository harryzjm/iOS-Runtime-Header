//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapRegion, NSString, VKCamera;
@protocol MDRenderTarget, VKMapViewCameraDelegate;

__attribute__((visibility("hidden")))
@interface VKCameraController : NSObject
{
    VKCamera *_vkCamera;
    shared_ptr_46708168 _camera;
    id <MDRenderTarget> _canvas;
    id <VKMapViewCameraDelegate> _cameraDelegate;
    _Bool _gesturing;
    unsigned long long _regionChangeCount;
    _Bool _inProgressRegionChangeIsAnimated;
    struct VKEdgeInsets _edgeInsets;
    _Bool _edgeInsetsAnimating;
    struct MapDataAccess *_mapDataAccess;
    struct AnimationRunner *_animationRunner;
    struct RunLoopController *_runLoopController;
    _Bool _staysCenteredDuringPinch;
    _Bool _staysCenteredDuringRotation;
    _Bool _isPitchEnabled;
    _Bool _isRotateEnabled;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct RunLoopController *runLoopController; // @synthesize runLoopController=_runLoopController;
@property(readonly, nonatomic) struct AnimationRunner *animationRunner; // @synthesize animationRunner=_animationRunner;
@property(readonly, nonatomic) struct MapDataAccess *mapDataAccess; // @synthesize mapDataAccess=_mapDataAccess;
@property(nonatomic) _Bool isRotateEnabled; // @synthesize isRotateEnabled=_isRotateEnabled;
@property(nonatomic) _Bool isPitchEnabled; // @synthesize isPitchEnabled=_isPitchEnabled;
@property(nonatomic) _Bool staysCenteredDuringRotation; // @synthesize staysCenteredDuringRotation=_staysCenteredDuringRotation;
@property(nonatomic) _Bool staysCenteredDuringPinch; // @synthesize staysCenteredDuringPinch=_staysCenteredDuringPinch;
- (_Bool)usesVKCamera;
- (void)populateDebugNode:(void *)arg1 withOptions:(const void *)arg2;
- (_Bool)centerCoordinate:(CDStruct_2c43369c *)arg1 andDistanceFromCenter:(double *)arg2 forMapRegion:(id)arg3;
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;
- (_Bool)wantsTimerTick;
@property(readonly, nonatomic) double altitude;
@property(readonly, nonatomic) double maxPitch;
@property(readonly, nonatomic) double minPitch;
@property(nonatomic) double pitch;
@property(readonly, nonatomic) double presentationHeading;
@property(nonatomic) double heading;
@property(nonatomic) double distanceFromCenterCoordinate;
@property(nonatomic) CDStruct_2c43369c centerCoordinate;
@property(readonly, nonatomic) GEOMapRegion *mapRegionIgnoringEdgeInsets;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
- (void)updateCameraToPositionOrientationLimits;
- (void)stylesheetDidReload;
- (void)stylesheetDidChange;
@property(readonly, nonatomic) _Bool isRotated;
@property(readonly, nonatomic) _Bool isFullyPitched;
@property(readonly, nonatomic) _Bool isPitched;
@property(readonly, nonatomic) _Bool canRotate;
@property(readonly, nonatomic) _Bool canPitch;
- (long long)tileSize;
- (_Bool)canZoomOutForTileSize:(long long)arg1;
- (_Bool)canZoomInForTileSize:(long long)arg1;
- (double)topDownMinimumZoomLevelForTileSize:(long long)arg1;
- (double)currentZoomLevelForTileSize:(long long)arg1;
- (double)maximumZoomLevelForTileSize:(long long)arg1;
- (double)minimumZoomLevelForTileSize:(long long)arg1;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;
- (double)topDownMinimumZoomLevel;
- (double)currentZoomLevel;
- (double)maximumZoomLevel;
- (double)minimumZoomLevel;
- (_Bool)edgeInsetsAnimating;
- (void)setEdgeInsetsAnimating:(_Bool)arg1;
- (struct VKEdgeInsets)edgeInsets;
- (void)setEdgeInsets:(struct VKEdgeInsets)arg1;
- (Matrix_443f5d51)cursorFromScreenPoint:(struct CGPoint)arg1;
- (struct CGPoint)scaledScreenPointForPoint:(struct CGPoint)arg1;
- (struct CGPoint)centerScreenPoint;
- (id)detailedDescription;
- (void)checkAndResetRegionChangeCount;
- (_Bool)isChangingRegion;
- (_Bool)isAnimating;
- (void)endRegionChange;
- (void)beginRegionChange:(_Bool)arg1;
- (void)canvasDidLayout;
- (void)setGesturing:(_Bool)arg1;
- (_Bool)isGesturing;
- (void)setCameraDelegate:(id)arg1;
- (id)cameraDelegate;
- (void)setCanvas:(id)arg1;
- (id)canvas;
- (shared_ptr_46708168)camera;
- (void)setCamera:(shared_ptr_46708168)arg1;
- (id)vkCamera;
- (void)setVkCamera:(id)arg1;
- (id)initWithMapDataAccess:(struct MapDataAccess *)arg1 animationRunner:(struct AnimationRunner *)arg2 runLoopController:(struct RunLoopController *)arg3 cameraDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

