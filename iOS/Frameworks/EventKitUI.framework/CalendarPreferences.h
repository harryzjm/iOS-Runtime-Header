//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CalPreferences, NSArray, NSDate, NSNumber, NSString;

@interface CalendarPreferences : NSObject
{
    CalPreferences *_preferences;
    _Bool _drawDebugViewColors;
}

+ (id)sharedPreferences;
@property(nonatomic) _Bool drawDebugViewColors; // @synthesize drawDebugViewColors=_drawDebugViewColors;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *upNextColor;
@property(retain, nonatomic) NSString *upNextLocation;
@property(nonatomic) double upNextDuration;
@property(retain, nonatomic) NSDate *upNextStartTime;
@property(retain, nonatomic) NSString *upNextTitle;
@property(nonatomic) _Bool upNextSimpleModeEnabled;
@property(retain, nonatomic) NSArray *deselectedCalendarSyncHashes;
@property(nonatomic) _Bool eventAutocompleteEnabled;
@property(nonatomic) _Bool enableAvatars;
@property(nonatomic) _Bool disableTodayPushes;
@property(nonatomic, getter=isShortResumeToTodayTimeout) _Bool shortResumeToTodayTimeout;
@property(nonatomic) _Bool hideInlineDayViewInEventDetails;
@property(nonatomic) _Bool showWindowDebugButton;
@property(nonatomic) _Bool largeListViewDisclosingEventDetails;
@property(nonatomic) _Bool swipeToDeleteEnabled;
@property(nonatomic) _Bool disableContinuity;
@property(nonatomic) _Bool showDetailedListView;
@property(nonatomic) _Bool showExperimentalUI;
@property(nonatomic) unsigned long long debugOccurrenceViewIconOverload;
@property(nonatomic) unsigned long long promptForCommentWhenDeclining;
@property(retain, nonatomic) NSNumber *locationSearchResultLimit;
@property(nonatomic) _Bool showEventsInPhoneMonthView;
@property(retain, nonatomic) NSArray *calendarUUIDsExcludedFromNotifications;
@property(nonatomic) _Bool requestSyncOnApplicationLaunch;
@property(nonatomic) _Bool viewedTimeZoneAutomatic;
@property(nonatomic) _Bool immediateAlarmCreation;
@property(nonatomic) _Bool showMonthDividedListView;
@property(nonatomic) _Bool showListView;
@property(nonatomic) _Bool showWeekNumbers;
@property(retain, nonatomic) NSString *overlayCalendarID;
@property(retain, nonatomic) NSString *searchString;
@property(retain, nonatomic) NSNumber *weekViewHourScale;
@property(retain, nonatomic) NSNumber *dayViewHourScale;
@property(retain, nonatomic) NSNumber *lastSuspendTime;
@property(retain, nonatomic) NSNumber *lastViewedDate;
@property(retain, nonatomic) NSNumber *lastViewMode;
@property(retain, nonatomic) NSNumber *weekStart;
@property(retain, nonatomic) NSDate *simulatedCurrentDate;
- (id)init;

@end

