//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface HKInteractiveChartGenericStatFormatter
{
    NSArray *_statDisplayItems;
}

@property(retain, nonatomic) NSArray *statDisplayItems; // @synthesize statDisplayItems=_statDisplayItems;
- (void).cxx_destruct;
- (id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2;
- (id)formattedUnitStringForChartData:(id)arg1;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 items:(id)arg2;

@end

