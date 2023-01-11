//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKInteractiveChartViewController.h>

@class HKValueRange;

__attribute__((visibility("hidden")))
@interface WDChartExperimentsTachogram : HKInteractiveChartViewController
{
    HKValueRange *_computedAxisRange;
    HKValueRange *_requestedVisibleRange;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HKValueRange *requestedVisibleRange; // @synthesize requestedVisibleRange=_requestedVisibleRange;
@property(readonly, nonatomic) HKValueRange *computedAxisRange; // @synthesize computedAxisRange=_computedAxisRange;
- (struct CGSize)extentOfData:(id)arg1;
- (id)tachogramSeriesWithData:(id)arg1 unit:(id)arg2 maximumY:(double)arg3 axis:(id)arg4 irregularBeatStyle:(_Bool)arg5;
- (void)viewDidLoad;
- (id)initWithIrregularBeatData:(id)arg1 normalData:(id)arg2 visibleRange:(id)arg3 profile:(id)arg4;

@end
