//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKInteractiveChartsAxisScalingRule-Protocol.h>

@class HKValueRange, NSDictionary, NSString;

@interface HKAbstractMinimumRangeScalingRule : NSObject <HKInteractiveChartsAxisScalingRule>
{
    double _defaultYAxisRange;
    NSDictionary *_axisRangeOverrides;
    long long _portraitPrettyNumberRule;
    HKValueRange *_axisBounds;
}

@property(readonly, nonatomic) NSDictionary *axisRangeOverrides; // @synthesize axisRangeOverrides=_axisRangeOverrides;
@property(retain, nonatomic) HKValueRange *axisBounds; // @synthesize axisBounds=_axisBounds;
@property(nonatomic) long long portraitPrettyNumberRule; // @synthesize portraitPrettyNumberRule=_portraitPrettyNumberRule;
@property(readonly, nonatomic) double defaultYAxisRange; // @synthesize defaultYAxisRange=_defaultYAxisRange;
- (void).cxx_destruct;
- (double)_rangeForZoomLevel:(long long)arg1;
- (id)portraitYValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 allowedDecimalPrecision:(long long)arg3;
- (id)yValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

