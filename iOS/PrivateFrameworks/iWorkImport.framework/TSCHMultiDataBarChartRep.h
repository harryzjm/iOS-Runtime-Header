//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TSCHMultiDataBarChartRep
{
}

- (void)updateAppearanceForElementLayer:(id)arg1 seriesIndex:(unsigned long long)arg2;
- (void)updateElementFrame:(struct CGRect)arg1 forElementLayer:(id)arg2 series:(id)arg3 addingAnimationsToAnimationInfo:(id)arg4;
- (void)updateElementLayerLayoutForCurrentRepElementIndexAnimationInfo:(id)arg1;
- (void)p_calculateInterceptForElementFrame:(struct CGRect)arg1 elementLayer:(id)arg2 animationInfo:(id)arg3;
- (_Bool)p_repElementIsAboveInterceptForSeriesIndex:(unsigned long long)arg1 groupIndex:(unsigned long long)arg2;
- (struct CGRect)currentRepElementBoundsInNaturalSpace;
- (struct CGRect)p_renderingElementFrameForBarElementFrame:(struct CGRect)arg1;
- (struct CGRect)p_clampRenderingElementFrame:(struct CGRect)arg1 barElementFrame:(struct CGRect)arg2;
- (id)p_currentBarSeriesModelCache;
- (unsigned long long)p_currentGroupIndex;
- (unsigned long long)p_currentSeriesIndex;
- (id)p_barElementsRenderer;

@end

