//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface EKPersistentCalendarItem
{
}

+ (id)relations;
+ (id)defaultPropertiesToLoad;
- (void)setDetachedItems:(id)arg1;
- (id)detachedItems;
- (void)setOriginalItem:(id)arg1;
- (id)originalItem;
- (void)setLocalStructuredData:(id)arg1;
- (id)localStructuredData;
- (void)setStructuredData:(id)arg1;
- (id)structuredData;
- (void)setModifiedProperties:(unsigned int)arg1;
- (unsigned int)modifiedProperties;
- (void)setSharedItemModifiedTimeZoneName:(id)arg1;
- (id)sharedItemModifiedTimeZoneName;
- (void)setSharedItemModifiedDate:(id)arg1;
- (id)sharedItemModifiedDate;
- (void)setSharedItemModifiedByLastName:(id)arg1;
- (id)sharedItemModifiedByLastName;
- (void)setSharedItemModifiedByFirstName:(id)arg1;
- (id)sharedItemModifiedByFirstName;
- (void)setSharedItemModifiedByAddress:(id)arg1;
- (id)sharedItemModifiedByAddress;
- (void)setSharedItemModifiedByDisplayName:(id)arg1;
- (id)sharedItemModifiedByDisplayName;
- (void)setSharedItemCreatedTimeZoneName:(id)arg1;
- (id)sharedItemCreatedTimeZoneName;
- (void)setSharedItemCreatedDate:(id)arg1;
- (id)sharedItemCreatedDate;
- (void)setSharedItemCreatedByLastName:(id)arg1;
- (id)sharedItemCreatedByLastName;
- (void)setSharedItemCreatedByFirstName:(id)arg1;
- (id)sharedItemCreatedByFirstName;
- (void)setSharedItemCreatedByAddress:(id)arg1;
- (id)sharedItemCreatedByAddress;
- (void)setSharedItemCreatedByDisplayName:(id)arg1;
- (id)sharedItemCreatedByDisplayName;
- (void)removeAttachment:(id)arg1;
- (void)addAttachment:(id)arg1;
- (void)setAttachments:(id)arg1;
- (id)attachments;
- (void)setExternalData:(id)arg1;
- (id)externalData;
- (void)setExternalModificationTag:(id)arg1;
- (id)externalModificationTag;
- (void)setExternalScheduleID:(id)arg1;
- (id)externalScheduleID;
- (void)setExternalID:(id)arg1;
- (id)externalID;
- (void)setUniqueID:(id)arg1;
- (id)uniqueID;
- (int)selfParticipantStatusRaw;
- (void)setOrganizer:(id)arg1;
- (id)organizer;
- (id)selfAttendee;
- (void)setSelfAttendee:(id)arg1;
- (void)removeAttendee:(id)arg1;
- (void)addAttendee:(id)arg1;
- (void)setAttendeesRaw:(id)arg1;
- (id)attendeesRaw;
- (void)setHasAttendees:(_Bool)arg1;
- (_Bool)hasAttendees;
- (void)setEkExceptionDates:(id)arg1;
- (id)ekExceptionDates;
- (void)setSingleRecurrenceRule:(id)arg1;
- (id)singleRecurrenceRule;
- (void)removeRecurrenceRule:(id)arg1;
- (void)addRecurrenceRule:(id)arg1;
- (id)recurrenceRules;
- (void)setRecurrenceRules:(id)arg1;
- (void)setHasRecurrences:(_Bool)arg1;
- (_Bool)hasRecurrences;
- (void)setDefaultAlarmWasDeleted:(_Bool)arg1;
- (_Bool)defaultAlarmWasDeleted;
- (void)removeAlarm:(id)arg1;
- (void)addAlarm:(id)arg1;
- (id)allAlarms;
- (void)setAllAlarms:(id)arg1;
- (void)setAppLinkData:(id)arg1;
- (id)appLinkData;
- (void)setURL:(id)arg1;
- (id)URL;
- (void)setAction:(id)arg1;
- (id)action;
- (void)setSequenceNumber:(int)arg1;
- (int)sequenceNumber;
- (void)setPriority:(int)arg1;
- (int)priority;
- (void)setIsAllDay:(_Bool)arg1;
- (_Bool)isAllDay;
- (void)setEndTimeZoneName:(id)arg1;
- (id)endTimeZoneName;
- (void)setStartTimeZoneName:(id)arg1;
- (id)startTimeZoneName;
- (void)setStartDateRaw:(id)arg1;
- (id)startDateRaw;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (void)setCreationDate:(id)arg1;
- (id)creationDate;
- (void)setLastModifiedDate:(id)arg1;
- (id)lastModifiedDate;
- (void)setEndLocation:(id)arg1;
- (id)endLocation;
- (void)setTravelStartLocation:(id)arg1;
- (id)travelStartLocation;
- (void)setClientLocation:(id)arg1;
- (id)clientLocation;
- (void)setStructuredLocationWithoutPrediction:(id)arg1;
- (id)structuredLocationWithoutPrediction;
- (void)setCalendarScale:(id)arg1;
- (id)calendarScale;
- (void)setPhantomMaster:(_Bool)arg1;
- (_Bool)phantomMaster;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setHasNotes:(_Bool)arg1;
- (_Bool)hasNotes;
- (id)notes;
- (void)setNotes:(id)arg1;
- (id)calendar;
- (void)setCalendar:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
