//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKGraphSeries, HKGraphView, HKValueRange, NSArray, UIColor;

@protocol HKGraphViewDelegate <NSObject>
- (void)graphViewDidTapYAxis:(HKGraphView *)arg1;
- (void)graphView:(HKGraphView *)arg1 didUpdateLegendViewsWithTopLegendFrame:(struct CGRect)arg2;
- (UIColor *)seriesSelectionLineColorForGraphView:(HKGraphView *)arg1;
- (void)graphView:(HKGraphView *)arg1 didUpdateSeries:(HKGraphSeries *)arg2 newDataArrived:(_Bool)arg3;
- (void)graphView:(HKGraphView *)arg1 didUpdateYAxisWidth:(double)arg2 toWidth:(double)arg3;
- (void)graphViewSizeChanged:(HKGraphView *)arg1;
- (NSArray *)graphView:(HKGraphView *)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;
- (long long)stackCountForGraphView:(HKGraphView *)arg1;
- (void)graphView:(HKGraphView *)arg1 didFinishUserScrollingToValueRange:(HKValueRange *)arg2;
- (void)graphView:(HKGraphView *)arg1 didUpdateVisibleValueRange:(HKValueRange *)arg2 changeContext:(long long)arg3;
- (void)graphView:(HKGraphView *)arg1 didUpdateFromDateZoom:(long long)arg2 toDateZoom:(long long)arg3 newVisibleRange:(HKValueRange *)arg4;
- (void)graphViewDidEndSelection:(HKGraphView *)arg1;
- (void)graphView:(HKGraphView *)arg1 didUpdateSelectedPoint:(NSArray *)arg2;
- (void)graphViewDidBeginSelection:(HKGraphView *)arg1;
@end

