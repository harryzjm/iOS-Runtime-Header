//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface HKInteractiveChartNumberFormatter
{
    NSString *_unitFormatString;
}

@property(copy, nonatomic) NSString *unitFormatString; // @synthesize unitFormatString=_unitFormatString;
- (void).cxx_destruct;
- (id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1;
- (id)_formattedStringWithValue:(id)arg1 formatter:(id)arg2;
- (id)init;

@end
