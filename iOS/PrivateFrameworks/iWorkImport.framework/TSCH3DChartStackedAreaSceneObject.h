//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TSCH3DChartStackedAreaSceneObject
{
}

+ (float)depthLimitFactorForSeriesCount:(long long)arg1 maxLimitingSeries:(long long)arg2;
+ (_Bool)supportsChartSeriesDepthOffset;
+ (float)chartSeriesDepth;
+ (float)chartSeriesPolygonOffset;
+ (id)chartSeriesType;
- (void)sortElements:(vector_cd7372eb *)arg1 pipeline:(id)arg2;
- (float)depthForScene:(id)arg1;
- (_Bool)transparencyDepthMask;

@end

