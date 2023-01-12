//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssetViewer/ASVTurntableGestureRecognizerDelegate-Protocol.h>
#import <AssetViewer/ASVUnifiedGestureRecognizerDelegate-Protocol.h>
#import <AssetViewer/ASVWorldGestureRecognizerDelegate-Protocol.h>

@class ASVUnifiedGestureRecognizer, MISSING_TYPE, NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _TtC11AssetViewer16EntityController : NSObject <ASVWorldGestureRecognizerDelegate, ASVTurntableGestureRecognizerDelegate, ASVUnifiedGestureRecognizerDelegate>
{
    MISSING_TYPE *entity;
    MISSING_TYPE *type;
    MISSING_TYPE *animationManager;
    MISSING_TYPE *animationID;
    MISSING_TYPE *worldGestureRecognizer;
    MISSING_TYPE *delegate;
    MISSING_TYPE *entityWorldPosistionRefreshGuard;
    MISSING_TYPE *lastARFrameTimestampForMovement;
    MISSING_TYPE *lastScreenPointForMovement;
    MISSING_TYPE *lastBoundingBox;
    MISSING_TYPE *debugVisualizationEntity;
    MISSING_TYPE *debugBoundingBoxEntities;
    MISSING_TYPE *currentTurntableYaw;
    MISSING_TYPE *currentTurntablePitch;
    MISSING_TYPE *levitationHeight;
    MISSING_TYPE *savedLevitationHeight;
    MISSING_TYPE *transformToCameraInObjectMode;
    MISSING_TYPE *transformToWorldInARMode;
    MISSING_TYPE *initialAABB;
    MISSING_TYPE *_assetNaturalSize;
    MISSING_TYPE *_assetScaleToFitUnitBox;
    MISSING_TYPE *projectPointHandler;
    MISSING_TYPE *shouldDisableGesturesHandler;
    MISSING_TYPE *shouldUseTightBoundsSPI;
    MISSING_TYPE *planeType;
    MISSING_TYPE *planeAnimator;
    MISSING_TYPE *trackedRaycast;
    MISSING_TYPE *verticalPlacementMarker;
    MISSING_TYPE *groundPlaneEntity;
    MISSING_TYPE *sceneUnderstandingState;
    MISSING_TYPE *shadowPlaneEntity;
    MISSING_TYPE *physicsStateManager;
    MISSING_TYPE *accessibilityAssetURL;
}

- (void).cxx_destruct;
- (id)init;
- (void)scaleTo:(float)arg1 updateARScale:(_Bool)arg2;
- (struct CGRect)calculateAssetScreenBoundingRectIn:(id)arg1;
- (void)rotateByDeltaYaw:(float)arg1 deltaPitch:(float)arg2;
- (void)dealloc;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSArray *entityAccessibilityWrappers;
@property(nonatomic, copy) NSURL *accessibilityAssetURL;
@property(nonatomic) float levitationHeight; // @synthesize levitationHeight;
@property(nonatomic, retain) ASVUnifiedGestureRecognizer *worldGestureRecognizer; // @synthesize worldGestureRecognizer;
- (void)worldGestureRecognizer:(id)arg1 levitatedAssetToScreenPoint: /* Error: Ran out of types for this method. */;
- (void)worldGestureRecognizerEndedLevitation:(id)arg1;
- (void)worldGestureRecognizerBeganLevitation:(id)arg1;
- (void)worldGestureRecognizer:(id)arg1 translatedAssetToScreenPoint: /* Error: Ran out of types for this method. */;
- (void)worldGestureRecognizerEndedTranslationDeceleration:(id)arg1;
- (void)worldGestureRecognizer:(id)arg1 decelerationTranslationDelta: /* Error: Ran out of types for this method. */;
- (void)worldGestureRecognizerBeganTranslationDeceleration:(id)arg1;
- (void)worldGestureRecognizerEndedTranslation:(id)arg1;
- (void)worldGestureRecognizerBeganTranslation:(id)arg1;
- (void)turntableGestureRecognizer:(id)arg1 rotatedAssetByDeltaYaw:(float)arg2 deltaPitch:(float)arg3;
- (void)unifiedGestureRecognizerEndedScaling:(id)arg1;
- (void)unifiedGestureRecognizer:(id)arg1 scaledAssetToScale:(float)arg2;
- (void)unifiedGestureRecognizerBeganScaling:(id)arg1;
- (void)unifiedGestureRecognizerEndedRotation:(id)arg1;
- (void)unifiedGestureRecognizer:(id)arg1 rotatedAssetByDeltaYaw:(float)arg2;
- (void)unifiedGestureRecognizerBeganRotation:(id)arg1;
- (void)unifiedGestureRecognizer:(id)arg1 singleTappedAtScreenPoint:(_Bool)arg2 onAsset: /* Error: Ran out of types for this method. */;
- (void)unifiedGestureRecognizer:(id)arg1 doubleTappedAtScreenPoint:(_Bool)arg2 onAsset: /* Error: Ran out of types for this method. */;

@end
