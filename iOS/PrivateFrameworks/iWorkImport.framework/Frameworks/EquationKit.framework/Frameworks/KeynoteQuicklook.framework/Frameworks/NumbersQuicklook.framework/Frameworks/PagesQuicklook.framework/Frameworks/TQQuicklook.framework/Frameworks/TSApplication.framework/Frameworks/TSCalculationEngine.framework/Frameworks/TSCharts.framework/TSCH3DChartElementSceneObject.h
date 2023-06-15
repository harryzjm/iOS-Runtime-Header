//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSCH3DChartElementSceneObject
{
}

+ (id)resetSeriesStorage:(id)arg1 forSeries:(id)arg2;
+ (_Bool)shouldCreateMeshSeriesStorage;
+ (void)setLowDetailedGeometriesForScene:(id)arg1;
+ (id)scenePropertiesKey;
+ (id)partWithEnumerator:(id)arg1 layoutSettings:(CDStruct_c48db077)arg2;
+ (_Bool)isHorizontalChart;
- (_Bool)transparencyDepthMask;
- (void)p_processItems:(id)arg1 processItemsClass:(Class)arg2;
- (void)renderSeriesLabelsSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)setTransparencyBlendingForProcessor:(id)arg1;
- (_Bool)shouldDelayForChartOpacity:(float)arg1;
- (float)chartOpacityForScene:(id)arg1;
- (_Bool)p_isRenderPassDelayedForDelegate:(id)arg1;
- (_Bool)applyEffectsForProperties:(id)arg1 series:(id)arg2 index:(void *)arg3 pipeline:(id)arg4 injectEffectsUsingBlock:(CDUnknownBlockType)arg5;
- (struct ElementRenderPass)render:(id)arg1 pushMatrix:(_Bool)arg2 delayedPass:(_Bool)arg3;
- (void)postrenderElement:(id)arg1;
- (void)renderElement:(id)arg1;
- (void)renderTwoPassGeometry:(_Bool)arg1 processor:(id)arg2 renderBlock:(CDUnknownBlockType)arg3;
- (void)prerenderElement:(id)arg1;
- (id)selectionPathForInfo:(id)arg1 scene:(id)arg2 pickedPoint:(id)arg3;
- (void)getSceneObjectElementsBounds:(id)arg1;
- (void)getSelectionKnobsPositions:(id)arg1;
- (void)rayPick:(id)arg1;
- (void)getBounds:(id)arg1;
- (void)render:(id)arg1;
- (_Bool)shouldRenderEachValue;
- (_Bool)shouldRenderSeries:(id)arg1;
- (tvec3_17f03ce0)adjustedScaleForInfoChartScale:(void *)arg1 scene:(id)arg2;
- (float)depthForScene:(id)arg1;
- (void)renderLabelsSceneObject:(id)arg1 pipeline:(id)arg2;
- (tvec2_84d5962d)labelOffset:(unsigned int)arg1 labelSize:(const void *)arg2 textureSize:(const void *)arg3 dataSpaceValue:(float)arg4;
- (tvec2_84d5962d)labelObjectSpacePosition:(unsigned int)arg1 axisValue:(double)arg2 intercept:(double)arg3;
- (void)updateLightingEffectsState:(id)arg1 scene:(id)arg2;
- (id)geometryForSeries:(id)arg1 index:(void *)arg2 scene:(id)arg3;
- (id)modelEnumeratorFromScene:(id)arg1;
- (id)elementPropertiesFromScene:(id)arg1;
- (id)scenePartForScene:(id)arg1;
- (id)scenePropertiesKey;
- (id)delegateFromScene:(id)arg1;
- (Class)getBounds3DClass;
- (Class)resizer3DClass;

@end

