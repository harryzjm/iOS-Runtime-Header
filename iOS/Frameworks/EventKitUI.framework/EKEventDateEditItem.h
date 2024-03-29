//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "EKEventEditItem.h"

@class EKDateTimeCell, NSArray, NSDate, NSDateComponents, NSString, NSTimeZone, PreferencesTwoPartValueCell, UIDatePicker, UITableViewCell;
@protocol EKEventDateEditItemDelegate;

__attribute__((visibility("hidden")))
@interface EKEventDateEditItem : EKEventEditItem
{
    NSDateComponents *_startComponents;
    NSDateComponents *_endComponents;
    _Bool _timedEventEndedAtMidnight;
    _Bool _allDay;
    NSTimeZone *_startTimeZone;
    NSTimeZone *_endTimeZone;
    _Bool _showTimeZones;
    _Bool _canPerformTargettedReload;
    EKDateTimeCell *_modernStartDateCell;
    EKDateTimeCell *_modernEndDateCell;
    PreferencesTwoPartValueCell *_classicStartDateCell;
    PreferencesTwoPartValueCell *_classicEndDateCell;
    int _shorteningStatus;
    UITableViewCell *_allDayCell;
    UITableViewCell *_startTimeZoneCell;
    UITableViewCell *_endTimeZoneCell;
    UITableViewCell *_startDatePickerCell;
    UITableViewCell *_endDatePickerCell;
    long long _selectedSubitem;
    long long _currentPickerMode;
    UIDatePicker *_startDatePicker;
    UIDatePicker *_endDatePicker;
    _Bool _endTimeWasMessedUp;
    _Bool _changingDate;
    _Bool _showingInlineDatePicker;
    _Bool _modifyingVisibleControls;
    _Bool _pushingTZController;
    long long _targetedSubitemForTimezone;
    NSArray *_startPickerConstraints;
    NSArray *_endPickerConstraints;
    _Bool _showsAllDay;
    _Bool _proposedTime;
    NSDate *_pendingProposedTime;
    id <EKEventDateEditItemDelegate> _eventDateEditItemDelegate;
}

+ (id)_timeZoneLocalizedString;
- (void).cxx_destruct;
@property(nonatomic) __weak id <EKEventDateEditItemDelegate> eventDateEditItemDelegate; // @synthesize eventDateEditItemDelegate=_eventDateEditItemDelegate;
@property(retain, nonatomic) NSDate *pendingProposedTime; // @synthesize pendingProposedTime=_pendingProposedTime;
@property(nonatomic) _Bool proposedTime; // @synthesize proposedTime=_proposedTime;
@property(nonatomic) _Bool showsAllDay; // @synthesize showsAllDay=_showsAllDay;
- (_Bool)_shouldShowTimeZone;
- (id)_dateComponentsInSystemCalendarFromDate:(id)arg1;
- (id)_dateFromComponents:(id)arg1 timeZone:(id)arg2;
- (id)_dateInSystemCalendarFromComponents:(id)arg1;
- (id)_timeZoneDescription:(id)arg1;
- (void)_allDayChanged:(id)arg1;
- (void)dateChanged:(id)arg1 forSubitem:(long long)arg2;
- (void)_datePickerEndedEditing:(id)arg1;
- (void)_datePickerChanged:(id)arg1;
- (void)_updateDatePicker:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_endDateIsBeforeStartDate;
- (void)_resetStartString:(_Bool)arg1 endString:(_Bool)arg2;
- (void)_resetClassicStartString:(_Bool)arg1 endString:(_Bool)arg2;
- (void)_pickNextReasonableTime;
- (void)_hideInlineDateControls;
- (void)_showInlineControls:(long long)arg1 forSubitem:(long long)arg2 includingInlineDatePicker:(_Bool)arg3;
- (void)dateTimeCellEndedEditing:(id)arg1;
- (void)dateTimeCellBeganEditing:(id)arg1;
- (void)dateTimeCell:(id)arg1 dateChanged:(id)arg2;
- (void)dateTimeCellTimeTapped:(id)arg1;
- (void)dateTimeCellDateTapped:(id)arg1;
- (void)_setEndTimeZone:(id)arg1;
- (void)_setStartTimeZone:(id)arg1;
- (void)_validateTimezones;
- (void)_adjustEndDateIfNeededAfterTogglingAllDay;
- (void)_setAllDay:(_Bool)arg1 adjustAlarms:(_Bool)arg2;
- (void)_setEndDate:(id)arg1;
- (void)_setStartDate:(id)arg1;
- (void)timeZoneViewControllerDidCancel:(id)arg1;
- (void)timeZoneViewController:(id)arg1 didSelectTimeZone:(id)arg2;
- (void)shortenCell:(id)arg1;
- (void)_updateClassicDateCellColors;
- (void)_updateClassicDateCellTimeWidths;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (id)_calendarForEventComponents:(_Bool)arg1;
- (void)endInlineEditing;
- (void)editor:(id)arg1 didStartEditingItem:(id)arg2;
- (_Bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;
- (_Bool)handleClassicSubitemSelection:(long long)arg1;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (_Bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (void)setupPickerConstraintsForCell:(id)arg1 datePicker:(id)arg2;
- (id)_endDatePickerCell;
- (id)_startDatePickerCell;
- (void)adjustDatePickerInterval:(id)arg1;
- (id)_newDatePicker;
- (id)_endTimeZoneCell;
- (id)_startTimeZoneCell;
- (id)_allDayCell;
- (id)_classicEndDateCell;
- (id)_classicStartDateCell;
- (id)_modernEndDateCell;
- (id)_modernStartDateCell;
- (unsigned long long)numberOfSubitems;
- (long long)_subitemForRow:(long long)arg1;
- (long long)_rowForSubitem:(long long)arg1;
- (_Bool)isInline;
- (_Bool)forceRefreshLocationItemOnSave;
- (_Bool)forceRefreshRecurrenceItemOnSave;
- (_Bool)forceRefreshInviteesItemOnSave;
- (_Bool)requiresReconfigurationOnSave;
- (_Bool)prefersTargettedTableReloadOnSave;
- (_Bool)configureForCalendarConstraints:(id)arg1;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (void)_adjustStartAndEndComponentsForEventIfNeeded:(id)arg1;
- (void)_refreshDatePicker;
- (void)refreshFromCalendarItemAndStore;
- (_Bool)usesClassicUI;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

