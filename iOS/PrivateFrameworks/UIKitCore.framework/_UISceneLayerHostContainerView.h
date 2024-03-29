//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class CAContext, FBSSceneSettings, FBScene, NSMutableOrderedSet, NSMutableSet, NSSet, NSString, UIScenePresentationContext, _UIContextLayerHostView;
@protocol _UISceneLayerHostContainerViewDataSource;

__attribute__((visibility("hidden")))
@interface _UISceneLayerHostContainerView : UIView
{
    FBScene *_scene;
    id <_UISceneLayerHostContainerViewDataSource> _dataSource;
    NSMutableOrderedSet *_hostViews;
    NSMutableOrderedSet *_hostedLayers;
    NSMutableSet *_hiddenLayers;
    FBSSceneSettings *_effectiveSceneSettings;
    UIScenePresentationContext *_presentationContext;
    UIView *_innerLayerContainer;
    UIView *_backgroundView;
    CAContext *_asyncRenderGroupingContext;
    _UISceneLayerHostContainerView *_asyncRenderGroupingContainerView;
    _UIContextLayerHostView *_asyncRenderGroupingHostView;
    NSString *_debugDescription;
    _Bool _invalidated;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak FBScene *scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) __weak id <_UISceneLayerHostContainerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)_presentationContextForLayer:(id)arg1;
- (void)_updateRenderingModeForLayersInNormalPresentation;
- (void)_updateAsyncDrawingOptionsInAsyncPresentation;
- (void)_invalidateAndRemoveAsyncViewsFromHierarchy;
- (void)_rebuildLayersForNormalPresentationWithReason:(id)arg1 withFence:(id)arg2;
- (void)_rebuildLayersForAsyncPresentationWithReason:(id)arg1 withFence:(id)arg2;
- (void)_rebuildLayersForReason:(id)arg1 withFence:(id)arg2;
- (id)_filteredLayersToPresent;
- (void)_adjustHostViewFrameAlignment:(id)arg1;
- (id)_createHostViewForLayer:(id)arg1;
- (_Bool)_canShowKeyboardLayer;
- (void)_toggleStopsHitTestTransformAccumulationWithNewContext:(id)arg1;
- (void)_toggleResizesHostedContextWithNewContext:(id)arg1;
- (void)_toggleInheritsSecurityWithNewContext:(id)arg1;
- (void)_toggleClippingDisabledWithNewContext:(id)arg1;
- (void)_presentationContextChangedFrom:(id)arg1 toContext:(id)arg2 force:(_Bool)arg3;
- (void)_setPresentationContext:(id)arg1;
- (void)_applyBackgroundViewToHierarchy;
- (void)_setBackgroundView:(id)arg1;
- (void)_refreshDataSource;
- (void)_setDataSource:(id)arg1;
- (id)_asyncRenderingHostView;
- (id)_asyncRenderingContainerView;
- (id)_asyncContext;
- (id)_presentationContext;
- (id)_backgroundView;
- (id)_hostViews;
- (id)_realHostedLayers;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)sceneLayerManagerDidUpdateLayers:(id)arg1;
- (void)invalidate;
- (long long)_focusedSound;
- (id)window;
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)updateForGeometrySettingsChanges:(id)arg1;
- (void)refreshDataSource:(id)arg1;
- (void)popDataSource:(id)arg1;
- (void)pushDataSource:(id)arg1;
@property(readonly, nonatomic) NSSet *nonHostedLayers;
@property(readonly, nonatomic) NSSet *hostedLayers;
- (void)dealloc;
- (id)initWithScene:(id)arg1 debugDescription:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

