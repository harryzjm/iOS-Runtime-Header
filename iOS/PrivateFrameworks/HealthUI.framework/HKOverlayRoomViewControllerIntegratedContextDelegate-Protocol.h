//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKDisplayType, HKInteractiveChartDataFormatter, HKInteractiveChartOverlayNamedDataSource, HKLineSeries, HKOverlayRoomApplicationItems, NSArray, NSString;

@protocol HKOverlayRoomViewControllerIntegratedContextDelegate <NSObject>
@property(readonly, nonatomic) HKLineSeries *alternateLineSeries;
@property(readonly, nonatomic) HKInteractiveChartOverlayNamedDataSource *cacheDataSource;

@optional
- (HKInteractiveChartDataFormatter *)formatterForTimescope:(long long)arg1;
- (NSString *)valueContextString:(NSArray *)arg1 applicationItems:(HKOverlayRoomApplicationItems *)arg2 representativeDisplayType:(HKDisplayType *)arg3;
- (NSString *)valueString:(NSArray *)arg1 applicationItems:(HKOverlayRoomApplicationItems *)arg2 representativeDisplayType:(HKDisplayType *)arg3;
@end
