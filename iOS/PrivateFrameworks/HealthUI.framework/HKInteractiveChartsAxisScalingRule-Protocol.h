//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKGraphSeriesAxisScalingRule-Protocol.h>

@class HKQuantityType, HKUnit, HKValueRange;

@protocol HKInteractiveChartsAxisScalingRule <HKGraphSeriesAxisScalingRule>
- (HKValueRange *)portraitYValueRangeForRange:(HKValueRange *)arg1 zoomLevel:(long long)arg2 allowedDecimalPrecision:(long long)arg3;

@optional
- (_Bool)isCompatibleWithQuantityType:(HKQuantityType *)arg1;
- (void)setUnit:(HKUnit *)arg1;
@end

