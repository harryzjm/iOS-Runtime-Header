//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSCH3DChartAddRotationBoundsSceneObjectMode
{
    int _rotationType;
}

@property(nonatomic) int rotationType; // @synthesize rotationType=_rotationType;
- (void)getBounds:(id)arg1;
- (void)p_submitGeometryForChartBounds:(void *)arg1 pivot:(void *)arg2 thicknessIndex:(unsigned long long)arg3 pipeline:(id)arg4;
- (double)p_radiusFromBounds:(void *)arg1 pivot:(void *)arg2;

@end

