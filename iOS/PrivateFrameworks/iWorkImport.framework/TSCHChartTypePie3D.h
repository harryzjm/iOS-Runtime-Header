//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TSCHChartTypePie3D
{
}

- (_Bool)approximatesTitleAccommodationUsingLegendSize;
- (id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(struct CGSize)arg3 imageScale:(double)arg4 swatchFrame:(struct CGRect)arg5 documentRoot:(id)arg6 shouldCache:(_Bool *)arg7;
- (id)categoryLabelPositioner;
- (id)valueLabelPositioner;
- (_Bool)supportsGroupedShadows;
- (_Bool)supportsBevels;
- (id)defaultSeriesType:(unsigned long long)arg1;
- (id)userInterfaceName;
- (id)init;
- (id)titlePositionerWithInfo:(id)arg1 scene:(id)arg2;
- (struct TSCH3DChartRotationLimit)rotation3DLimit;

@end

