//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthRecordsUI/NSObject-Protocol.h>

@class HKDisplayType, HKDisplayTypeContextItem, HKInteractiveChartOverlayViewController, HKInteractiveChartViewController, HKSampleType, NSDateInterval;

@protocol HKOverlayContext <NSObject>
- (long long)resolutionForTimeScope:(long long)arg1 traitResolution:(long long)arg2;
- (HKDisplayTypeContextItem *)contextItemForLastUpdate;
- (void)updateContextItemForDateInterval:(NSDateInterval *)arg1 overlayController:(HKInteractiveChartOverlayViewController *)arg2 timeScope:(long long)arg3 resolution:(long long)arg4 completion:(void (^)(_Bool, NSError *))arg5;
- (HKDisplayType *)overlayDisplayTypeForTimeScope:(long long)arg1;
- (HKSampleType *)sampleTypeForDateRangeUpdates;

@optional
- (void)prepareContextForDateInterval:(NSDateInterval *)arg1 overlayController:(HKInteractiveChartOverlayViewController *)arg2 timeScope:(long long)arg3 resolution:(long long)arg4;
- (_Bool)unselectedContextShouldUseContextBaseType;
- (HKDisplayType *)baseDisplayTypeForOverlay:(long long)arg1;
- (void)invalidateContextItem;
- (void)overlayWasExplicitlySelected:(HKDisplayTypeContextItem *)arg1 chartController:(HKInteractiveChartViewController *)arg2;
- (void)overlayStateDidChange:(_Bool)arg1 contextItem:(HKDisplayTypeContextItem *)arg2 chartController:(HKInteractiveChartViewController *)arg3;
- (void)overlayStateWillChange:(_Bool)arg1 contextItem:(HKDisplayTypeContextItem *)arg2 chartController:(HKInteractiveChartViewController *)arg3;
- (_Bool)canSelectOverlayContextItem:(HKDisplayTypeContextItem *)arg1 isDeselecting:(_Bool)arg2 timeScope:(long long)arg3 chartController:(HKInteractiveChartViewController *)arg4;
@end

