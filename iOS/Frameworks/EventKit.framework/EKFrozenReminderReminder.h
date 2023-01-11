//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface EKFrozenReminderReminder
{
}

+ (Class)meltedClass;
- (_Bool)defaultAlarmWasDeleted;
- (_Bool)defaultAlarmRemoved;
- (id)ekExceptionDates;
- (id)detachedItems;
- (id)attachments;
- (id)travelStartLocation;
- (id)originalItem;
- (id)selfAttendee;
- (id)organizer;
- (id)clientLocation;
- (id)recurrenceRules;
- (id)attendeesRaw;
- (_Bool)hasNotes;
- (_Bool)hasAttendees;
- (_Bool)hasRecurrences;
- (id)structuredLocationWithoutPrediction;
- (id)uniqueID;
- (id)UUID;
- (id)action;
- (id)appLinkData;
- (unsigned long long)priority;
- (id)completionDate;
- (id)timeZone;
- (id)dueDateComponents;
- (id)startDateComponents;
- (id)alarms;
- (id)allAlarms;
- (id)creationDate;
- (id)lastModifiedDate;
- (id)URL;
- (id)notes;
- (id)structuredLocation;
- (id)title;
- (id)calendarItemExternalIdentifier;
- (id)calendar;
- (id)calendarItemIdentifier;
- (void)_fixAlarmUUIDsForClone:(id)arg1 from:(id)arg2;
- (id)_copyToNewList:(id)arg1 error:(id *)arg2;
- (_Bool)_applyChangesToSaveRequest:(id)arg1 error:(id *)arg2;
- (_Bool)_applyChanges:(id)arg1 error:(id *)arg2;
- (id)uniqueIdentifier;
- (id)remObjectID;
- (id)_reminder;
- (id)initNewReminderInStore:(id)arg1;

@end
