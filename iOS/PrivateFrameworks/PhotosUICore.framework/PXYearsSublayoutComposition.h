//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXYearsLayoutGenerator, PXYearsLayoutMetrics;

@interface PXYearsSublayoutComposition
{
    PXYearsLayoutGenerator *_layoutGenerator;
    PXYearsLayoutMetrics *_metrics;
}

@property(copy, nonatomic) PXYearsLayoutMetrics *metrics; // @synthesize metrics=_metrics;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long presentedNumberOfColumns;
- (id)configuredLayoutGenerator;

@end
