//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSCH3DChartElementSceneObject, TSCH3DChartModelEnumerator, TSCH3DRenderElementInfo, TSCH3DSceneRenderPipeline;

@protocol TSCH3DChartElementSceneObjectElementDelegate
- (_Bool)willSubmitElement:(TSCH3DRenderElementInfo *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2;
- (_Bool)willRenderElement:(TSCH3DRenderElementInfo *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2;
- (void)didTransformElement:(TSCH3DRenderElementInfo *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2;
- (_Bool)willUpdateElementEffectsStatesForElement:(TSCH3DRenderElementInfo *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2;
- (struct ElementRenderPass)renderPassForElement:(TSCH3DRenderElementInfo *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2;
- (_Bool)willProcessElement:(TSCH3DRenderElementInfo *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2;
- (void)didProcessElements:(TSCH3DChartModelEnumerator *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2 pipeline:(TSCH3DSceneRenderPipeline *)arg3;
- (_Bool)willProcessElements:(TSCH3DChartModelEnumerator *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2 pipeline:(TSCH3DSceneRenderPipeline *)arg3;
@end

