//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKOverlayRoomViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC15HealthRecordsUI26ChartOverlayViewController : HKOverlayRoomViewController
{
    MISSING_TYPE *chartDefining;
    MISSING_TYPE *chartType;
    MISSING_TYPE *displayTypes;
    MISSING_TYPE *chartabilityResult;
}

- (void).cxx_destruct;
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3;
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;
- (id)initialSelectedContextForMode:(long long)arg1;
- (id)contextSectionsForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)createChartOverlayViewController;
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;
- (id)controllerTitleWithApplicationItems:(id)arg1;
- (_Bool)supportsShowAllFilters;

@end
