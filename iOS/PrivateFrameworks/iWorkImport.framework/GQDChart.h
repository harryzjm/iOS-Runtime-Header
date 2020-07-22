//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GQDChartLegend, GQDChartModel, GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQDChart
{
    GQDChartLegend *mLegend;
    _Bool mIsLegendRetained;
    GQDChartModel *mModel;
    GQDSStyle *mStyle;
    long long mType;
}

+ (const struct StateSpec *)stateForReading;
- (void)setLegend:(id)arg1;
- (long long)type;
- (id)graphicStyle;
- (id)style;
- (id)model;
- (id)legend;
- (void)dealloc;

@end

