//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKTimePeriodDisplayTypeValueFormatter;

@interface HKInteractiveChartTimePeriodFormatter
{
    HKTimePeriodDisplayTypeValueFormatter *_timePeriodFormatter;
}

- (void).cxx_destruct;
- (id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 items:(id)arg2;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 items:(id)arg2 customDataType:(long long)arg3;
- (id)_formattedStringWithData:(id)arg1 roundToHours:(_Bool)arg2 displayUnit:(_Bool)arg3;

@end

