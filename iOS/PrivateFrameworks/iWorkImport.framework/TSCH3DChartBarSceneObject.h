//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TSCH3DChartBarSceneObject
{
}

+ (struct TSCH3DScenePart)partWithEnumerator:(id)arg1 layoutSettings:(CDStruct_b1c75024)arg2;
+ (void)updateLightingEffectsState:(id)arg1 scene:(id)arg2;
+ (void)addHorizontalTransformToProperties:(id)arg1;
+ (_Bool)isHorizontalChart;
+ (_Bool)isStacked;
+ (id)chartSeriesType;
- (void)updateLightingEffectsState:(id)arg1 scene:(id)arg2;
- (tvec2_84d5962d)labelObjectSpacePosition:(unsigned int)arg1 axisValue:(double)arg2 intercept:(double)arg3;

@end

