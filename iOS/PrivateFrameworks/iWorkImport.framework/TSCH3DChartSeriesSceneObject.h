//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TSCH3DChartSeriesSceneObject
{
}

+ (float)depthLimitFactorForSeriesCount:(long long)arg1 maxLimitingSeries:(long long)arg2;
+ (id)createBoundsForSeries:(id)arg1;
+ (_Bool)shouldCreateMeshSeriesStorage;
+ (Class)propertiesClass;
+ (float)chartSeriesPolygonOffset;
- (void)sortElements:(vector_d7c2985b *)arg1 pipeline:(id)arg2;
- (float)shadowCameraDepthLimitAdjustmentFactorForScene:(id)arg1;
- (_Bool)transparencyDepthMask;
- (_Bool)shouldRenderSeries:(id)arg1;
- (float)chartMinZForScene:(id)arg1;
- (float)depthForScene:(id)arg1;
- (void)updateElementEffectsStates:(const struct RenderElementInfo *)arg1 depthToWidthRatio:(float)arg2;
- (void)updateTilingEffect:(struct TexCoordTilingShaderEffectState *)arg1 properties:(id)arg2 textureTiling:(id)arg3 size:(tvec3_17f03ce0 *)arg4;
- (void)postrenderElement:(const struct RenderElementInfo *)arg1;
- (void)prerenderElement:(const struct RenderElementInfo *)arg1;
- (void)renderLabelsSceneObject:(id)arg1 pipeline:(id)arg2 enumerator:(id)arg3 properties:(id)arg4;

@end

