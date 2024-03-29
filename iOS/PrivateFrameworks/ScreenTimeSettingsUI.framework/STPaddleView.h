//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSDateFormatter, NSDateIntervalFormatter, STUsageReportGraphDataPoint, UILabel;

__attribute__((visibility("hidden")))
@interface STPaddleView : UIView
{
    STUsageReportGraphDataPoint *_dataPoint;
    UIView *_backgroundView;
    UILabel *_dayLabel;
    UILabel *_dateTimeLabel;
    UILabel *_usageLabel;
    NSDateIntervalFormatter *_hourIntervalDateFormatter;
    NSDateFormatter *_weekdayDateFormatter;
    NSDateFormatter *_monthDateFormatter;
}

- (void).cxx_destruct;
@property(readonly) NSDateFormatter *monthDateFormatter; // @synthesize monthDateFormatter=_monthDateFormatter;
@property(readonly) NSDateFormatter *weekdayDateFormatter; // @synthesize weekdayDateFormatter=_weekdayDateFormatter;
@property(readonly) NSDateIntervalFormatter *hourIntervalDateFormatter; // @synthesize hourIntervalDateFormatter=_hourIntervalDateFormatter;
@property(readonly) UILabel *usageLabel; // @synthesize usageLabel=_usageLabel;
@property(readonly) UILabel *dateTimeLabel; // @synthesize dateTimeLabel=_dateTimeLabel;
@property(readonly) UILabel *dayLabel; // @synthesize dayLabel=_dayLabel;
@property(readonly) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) STUsageReportGraphDataPoint *dataPoint; // @synthesize dataPoint=_dataPoint;
- (id)init;

@end

