//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSCH3DChartElementSceneObject, TSCH3DChartModelEnumerator, TSCH3DSceneRenderPipeline, TSCH3DShaderEffects;

@protocol TSCH3DChartElementSceneObjectSeriesDelegate
- (void)didGenerateShaderEffectsForSeriesAtIndex:(const tvec2_3b141483 *)arg1 effects:(TSCH3DShaderEffects *)arg2 sceneObject:(TSCH3DChartElementSceneObject *)arg3 pipeline:(TSCH3DSceneRenderPipeline *)arg4;
- (_Bool)willProcessSeries:(TSCH3DChartModelEnumerator *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2 pipeline:(TSCH3DSceneRenderPipeline *)arg3;
@end
