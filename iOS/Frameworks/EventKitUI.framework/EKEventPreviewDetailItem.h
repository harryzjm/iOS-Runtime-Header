//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CalendarModel, EKDayPreviewController, EKEvent, NSDate, UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventPreviewDetailItem
{
    UITableViewCell *_cell;
    EKDayPreviewController *_containedDayViewController;
    EKEvent *_eventCopy;
    CalendarModel *_model;
    _Bool _inlineDayViewRespectsSelectedCalendarsFilter;
    NSDate *_proposedTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *proposedTime; // @synthesize proposedTime=_proposedTime;
@property(nonatomic) _Bool inlineDayViewRespectsSelectedCalendarsFilter; // @synthesize inlineDayViewRespectsSelectedCalendarsFilter=_inlineDayViewRespectsSelectedCalendarsFilter;
- (void)eventViewController:(id)arg1 didSelectReadOnlySubitem:(unsigned long long)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)_dayPreviewViewController;
- (void)_datesForPreviewViewControllerWithStartDate:(id *)arg1 endDate:(id *)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 forceUpdate:(_Bool)arg3;
- (void)_createNewEventCopy;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (void)reset;
- (void)refreshCopiedEvents;
- (id)initWithModel:(id)arg1;

@end

