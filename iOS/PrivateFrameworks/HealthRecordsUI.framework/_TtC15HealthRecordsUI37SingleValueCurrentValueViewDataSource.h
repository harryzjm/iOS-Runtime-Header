//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKCurrentValueViewDataSource.h>

#import <HealthRecordsUI/HKCurrentValueViewDataSourceDelegate-Protocol.h>

@class MISSING_TYPE;

@interface _TtC15HealthRecordsUI37SingleValueCurrentValueViewDataSource : HKCurrentValueViewDataSource <HKCurrentValueViewDataSourceDelegate>
{
    MISSING_TYPE *lastCachedNumberOfChartPoints;
}

- (id)init;
- (id)initWithDateCache:(id)arg1 displayCategoryController:(id)arg2 healthStore:(id)arg3 selectedRangeFormatter:(id)arg4;
- (void)updateDataSourceWithGraphView:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;
- (id)titleForSelectedRangeData:(id)arg1;

@end
