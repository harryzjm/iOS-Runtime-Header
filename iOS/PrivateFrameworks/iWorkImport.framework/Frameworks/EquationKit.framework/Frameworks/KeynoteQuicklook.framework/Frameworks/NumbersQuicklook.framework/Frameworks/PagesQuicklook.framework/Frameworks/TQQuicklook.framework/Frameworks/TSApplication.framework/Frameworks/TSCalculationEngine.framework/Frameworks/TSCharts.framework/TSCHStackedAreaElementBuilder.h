//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSCHStackedAreaElementBuilder
{
}

- (_Bool)p_addBottomStroke:(CDStruct_e0d92598 *)arg1 toPath:(struct CGPath *)arg2 seriesIndex:(unsigned long long)arg3 withPointsArray:(CDStruct_460b8ffe *)arg4 withCount:(unsigned long long)arg5;
- (CDStruct_40a92360 *)p_centerPointsForSeries:(id)arg1 groupIndexSet:(id)arg2 xAxis:(id)arg3 yAxis:(id)arg4 plotAreaFrame:(struct CGRect)arg5;
- (CDStruct_460b8ffe *)p_createPointArrayForSeries:(id)arg1 inAreaFrame:(struct CGRect)arg2 groupIndexSet:(id)arg3 outCount:(unsigned long long *)arg4;

@end
