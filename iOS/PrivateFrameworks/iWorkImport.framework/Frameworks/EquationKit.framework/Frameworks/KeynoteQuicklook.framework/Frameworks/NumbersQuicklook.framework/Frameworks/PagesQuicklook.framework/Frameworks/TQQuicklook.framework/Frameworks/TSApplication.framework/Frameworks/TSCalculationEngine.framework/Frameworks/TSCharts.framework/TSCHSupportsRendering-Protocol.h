//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSCharts/NSObject-Protocol.h>

@class NSIndexSet, TSCHChartLayout, TSDLayoutGeometry;

@protocol TSCHSupportsRendering <NSObject>
- (void)drawInContext:(struct CGContext *)arg1;
- (_Bool)requireSeparateLabelLayer;
- (_Bool)renderElementsShadowOnly;
- (_Bool)renderElementsWithoutShadows;
- (_Bool)renderLabels;
- (_Bool)renderReferenceLines;
- (_Bool)renderGrid;
- (_Bool)renderElements;
- (_Bool)renderTrendLinesForSeriesIndex:(unsigned long long)arg1;
- (NSIndexSet *)renderGroupIndexSetForSeriesIndex:(unsigned long long)arg1;
- (NSIndexSet *)renderSeriesIndexSet;
- (_Bool)is2DRepFor3DChartRep;
- (_Bool)isDrawingIntoPDF;
- (_Bool)forceRenderBlankBackground;
- (double)viewScale;
- (TSDLayoutGeometry *)geometry;
- (_Bool)shadowsEnabled;
- (TSCHChartLayout *)chartLayout;
@end

