//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface UIDatePickerWeekMonthDayView
{
    struct {
        unsigned int weekdayLast:1;
    } _datePickerWeekMonthDayViewFlags;
    _Bool _isModern;
    UILabel *_dateLabel;
    UILabel *_weekdayLabel;
    NSString *_formattedDateString;
    double _weekdayWidth;
}

@property(nonatomic) _Bool isModern; // @synthesize isModern=_isModern;
@property(nonatomic) double weekdayWidth; // @synthesize weekdayWidth=_weekdayWidth;
@property(copy, nonatomic) NSString *formattedDateString; // @synthesize formattedDateString=_formattedDateString;
@property(readonly, nonatomic) UILabel *weekdayLabel; // @synthesize weekdayLabel=_weekdayLabel;
@property(readonly, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
- (void).cxx_destruct;
@property(nonatomic) _Bool weekdayLast;
- (void)layoutSubviews;
- (_Bool)_canBeReusedInPickerView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
