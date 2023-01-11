//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface HKAccessibilitySpan : NSObject
{
    NSString *_dataSeriesTitle;
    long long _dataSeriesType;
    NSNumber *_dataComprehensionMinYValue;
    NSNumber *_dataComprehensionMaxYValue;
    NSString *_dataComprehensionUnitForChart;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *dataComprehensionUnitForChart; // @synthesize dataComprehensionUnitForChart=_dataComprehensionUnitForChart;
@property(readonly, nonatomic) NSNumber *dataComprehensionMaxYValue; // @synthesize dataComprehensionMaxYValue=_dataComprehensionMaxYValue;
@property(readonly, nonatomic) NSNumber *dataComprehensionMinYValue; // @synthesize dataComprehensionMinYValue=_dataComprehensionMinYValue;
@property(readonly, nonatomic) long long dataSeriesType; // @synthesize dataSeriesType=_dataSeriesType;
@property(readonly, nonatomic) NSString *dataSeriesTitle; // @synthesize dataSeriesTitle=_dataSeriesTitle;
- (id)description;
- (id)initWithTitle:(id)arg1 seriesType:(long long)arg2 dataComprehensionMinYValue:(id)arg3 dataComprehensionMaxYValue:(id)arg4 dataComprehensionUnitForChart:(id)arg5;

@end
