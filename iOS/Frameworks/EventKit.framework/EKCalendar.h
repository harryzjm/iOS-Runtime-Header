//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKSource, NSString;

@interface EKCalendar
{
    unsigned long long _cachedJunkStatus;
}

+ (id)typeDescription:(long long)arg1;
+ (id)_eventKitBundle;
+ (id)calendarForEntityTypes:(unsigned long long)arg1 eventStore:(id)arg2;
+ (id)calendarForEntityType:(unsigned long long)arg1 eventStore:(id)arg2;
+ (id)calendarWithEventStore:(id)arg1;
+ (id)knownSingleValueKeysForComparison;
+ (id)knownIdentityKeysForComparison;
+ (id)knownRelationshipMultiValueKeys;
+ (id)knownRelationshipSingleValueKeys;
+ (id)knownRelationshipWeakKeys;
+ (_Bool)isWeakRelationship;
+ (Class)frozenClass;
+ (id)rowIDsForCalendars:(id)arg1;
+ (id)EKObjectChangeSummarizer_multiValueDiffKeys;
+ (id)EKObjectChangeSummarizer_singleValueDiffKeys;
@property(nonatomic) unsigned long long cachedJunkStatus; // @synthesize cachedJunkStatus=_cachedJunkStatus;
- (_Bool)couldBeJunk;
- (void)setIsJunk:(_Bool)arg1;
- (_Bool)supportsJunkReporting;
- (id)sendersPhoneNumber;
- (id)sendersEmail;
- (id)exportData;
- (_Bool)isManaged;
- (_Bool)remove:(id *)arg1;
- (_Bool)commit:(id *)arg1;
- (_Bool)validate:(id *)arg1;
- (_Bool)automaticEventLocationGeocodingAllowed;
- (void)setDigest:(id)arg1;
- (id)digest;
- (void)setPushKey:(id)arg1;
- (id)pushKey;
- (void)setNotes:(id)arg1;
- (id)notes;
- (void)setSubcalAccountID:(id)arg1;
- (id)subcalAccountID;
- (id)ownerIdentityOrganizer;
- (void)setOwnerIdentityLastName:(id)arg1;
- (id)ownerIdentityLastName;
- (void)setOwnerIdentityFirstName:(id)arg1;
- (id)ownerIdentityFirstName;
- (void)setOwnerIdentityAddress:(id)arg1;
- (id)ownerIdentityAddress;
- (void)setOwnerIdentityPhoneNumber:(id)arg1;
- (id)ownerIdentityPhoneNumber;
- (void)setOwnerIdentityEmail:(id)arg1;
- (id)ownerIdentityEmail;
- (void)setOwnerIdentityId:(id)arg1;
- (int)ownerIdentityId;
- (void)setOwnerIdentityDisplayName:(id)arg1;
- (id)ownerIdentityDisplayName;
- (void)setSelfIdentityLastName:(id)arg1;
- (id)selfIdentityLastName;
- (void)setSelfIdentityFirstName:(id)arg1;
- (id)selfIdentityFirstName;
- (void)setSelfIdentityAddress:(id)arg1;
- (id)selfIdentityAddress;
- (void)setSelfIdentityPhoneNumber:(id)arg1;
- (id)selfIdentityPhoneNumber;
- (void)setSelfIdentityEmail:(id)arg1;
- (id)selfIdentityEmail;
- (void)setSelfIdentityDisplayName:(id)arg1;
- (id)selfIdentityDisplayName;
- (id)findOriginalAlarmStartingWith:(id)arg1;
- (void)removeAllSnoozedAlarms;
- (void)removeAcknowledgedSnoozedAlarms;
- (_Bool)isAlarmAcknowledgedPropertyDirty;
- (void)snoozeAlarm:(id)arg1 withLocation:(id)arg2 proximity:(long long)arg3;
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2;
- (void)removeAlarms:(id)arg1;
- (void)addAlarms:(id)arg1;
- (void)setAllAlarms:(id)arg1;
- (id)allAlarms;
- (void)setAlarms:(id)arg1;
- (id)alarms;
- (_Bool)hasSharees;
- (void)removeSharee:(id)arg1;
- (void)addSharee:(id)arg1;
- (void)setSharees:(id)arg1;
- (id)sharees;
- (_Bool)isSyncing;
- (id)lastSyncEndDate;
- (void)setLastSyncEndDate:(id)arg1;
- (id)lastSyncStartDate;
- (void)setLastSyncStartDate:(id)arg1;
- (void)setLastSyncErrorData:(id)arg1;
- (id)lastSyncErrorData;
- (void)setLastSyncError:(unsigned long long)arg1;
- (unsigned long long)lastSyncError;
- (id)lastSyncErrorUserInfo;
- (void)setLastSyncErrorUserInfo:(id)arg1;
- (void)setLastSyncError:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)setSubscriptionID:(id)arg1;
- (id)subscriptionID;
- (void)setRefreshDate:(id)arg1;
- (id)refreshDate;
@property(readonly, nonatomic) unsigned long long supportedEventAvailabilities;
- (void)setAllowReminders:(_Bool)arg1;
- (void)setAllowsEvents:(_Bool)arg1;
- (_Bool)allowReminders;
- (_Bool)allowEvents;
- (_Bool)hasTasks;
- (_Bool)hasEvents;
- (void)setAllowedEntityTypes:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long allowedEntityTypes;
- (void)setAllowedEntities:(int)arg1;
- (int)allowedEntities;
@property(retain, nonatomic) EKSource *source;
- (id)externalURI;
- (id)selectionSyncIdentifier;
- (id)syncHash;
- (void)setExternalRepresentation:(id)arg1;
- (id)externalRepresentation;
- (void)setSyncToken:(id)arg1;
- (id)syncToken;
- (void)setExternalModificationTag:(id)arg1;
- (id)externalModificationTag;
- (void)setExternalIDTag:(id)arg1;
- (id)externalIDTag;
- (void)setExternalID:(id)arg1;
- (id)externalID;
- (void)setIsAffectingAvailability:(_Bool)arg1;
- (_Bool)isAffectingAvailability;
- (void)setIsIgnoringSharedCalendarNotifications:(_Bool)arg1;
- (_Bool)isIgnoringSharedCalendarNotifications;
- (_Bool)allowsIgnoringSharedEventChangeNotifications;
- (void)setIsIgnoringEventAlerts:(_Bool)arg1;
- (_Bool)isIgnoringEventAlerts;
- (_Bool)isMutableNaturalLanguageSuggestionsCalendar;
- (_Bool)isMutableSuggestionsCalendar;
- (_Bool)isNaturalLanguageSuggestedEventCalendar;
- (_Bool)isSuggestedEventCalendar;
- (_Bool)isSuggestionsCalendar;
- (void)setMarkedImmutableSharees:(_Bool)arg1;
- (_Bool)isMarkedImmutableSharees;
- (void)setMarkedUndeletable:(_Bool)arg1;
- (_Bool)isMarkedUndeletable;
- (void)setFamilyCalendar:(_Bool)arg1;
- (_Bool)isFamilyCalendar;
- (void)setSubscribedHolidayCalendar:(_Bool)arg1;
- (_Bool)isSubscribedHolidayCalendar;
- (_Bool)isHolidaySubscribedCalendar;
- (void)setFacebookBirthdayCalendar:(_Bool)arg1;
- (_Bool)isFacebookBirthdayCalendar;
- (void)setCanBeShared:(_Bool)arg1;
- (_Bool)canBeShared;
- (void)setCanBePublished:(_Bool)arg1;
- (_Bool)canBePublished;
- (_Bool)isPublished;
- (void)setIsPublished:(_Bool)arg1;
- (void)setPublishURL:(id)arg1;
- (id)publishURL;
- (id)sharedOwnerPhoneNumber;
- (id)sharedOwnerEmail;
- (id)sharedOwnerAddress;
- (void)setSharedOwnerAddress:(id)arg1;
- (id)sharedOwnerURL;
- (void)setSharedOwnerURL:(id)arg1;
- (id)sharedOwnerName;
- (void)setSharedOwnerName:(id)arg1;
- (unsigned long long)sharingInvitationResponse;
- (void)setSharingInvitationResponse:(unsigned long long)arg1;
- (void)clearInvitationStatus;
- (void)setInvitationStatus:(unsigned long long)arg1;
- (unsigned long long)invitationStatus;
- (void)setSharingStatus:(unsigned long long)arg1;
- (unsigned long long)sharingStatus;
- (void)setSharingInvitation:(_Bool)arg1;
- (_Bool)isSharingInvitation;
- (void)setProhibitsScheduling:(_Bool)arg1;
- (_Bool)prohibitsScheduling;
- (void)setAllowsScheduling:(_Bool)arg1;
- (_Bool)allowsScheduling;
- (_Bool)_anyCalendarOfType:(unsigned long long)arg1 inSameSourceExistsPassingTest:(CDUnknownBlockType)arg2;
- (_Bool)_anotherCalendarForRemindersExists;
- (_Bool)_anotherCalendarForDefaultSchedulingExists;
- (_Bool)eligibleForDefaultSchedulingCalendar;
- (_Bool)canMergeWithCalendar:(id)arg1;
- (long long)deletionWarningsMask;
- (_Bool)_validateDeletableHelper:(id *)arg1;
- (_Bool)_validateAccessConsent:(id *)arg1;
- (_Bool)_validateDeletable:(id *)arg1;
- (_Bool)isDeletable;
- (void)setImmutable:(_Bool)arg1;
- (_Bool)isImmutableRaw;
@property(readonly, nonatomic, getter=isImmutable) _Bool immutable;
- (void)setHidden:(_Bool)arg1;
- (_Bool)isHidden;
- (void)setSubscribed:(_Bool)arg1;
@property(readonly, nonatomic, getter=isSubscribed) _Bool subscribed;
- (void)setNotificationsCollection:(_Bool)arg1;
- (_Bool)isNotificationsCollection;
- (void)setInbox:(_Bool)arg1;
- (_Bool)isInbox;
- (void)setIsDefaultSchedulingCalendar:(_Bool)arg1;
- (_Bool)isDefaultSchedulingCalendar;
- (_Bool)refresh;
- (id)description;
- (void)setDisplayOrder:(int)arg1;
- (int)displayOrder;
- (void)setReadOnly:(_Bool)arg1;
- (_Bool)readOnly;
- (void)setAllowsContentModifications:(_Bool)arg1;
@property(readonly, nonatomic) _Bool allowsContentModifications;
- (void)_setFlagValue:(_Bool)arg1 withMask:(unsigned int)arg2;
- (_Bool)_flagValueWithMask:(unsigned int)arg1;
- (void)setFlags:(unsigned int)arg1;
- (unsigned int)flags;
- (void)setCalendarIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *calendarIdentifier;
- (void)setUUID:(id)arg1;
- (id)UUID;
@property(readonly, nonatomic) long long type;
@property(nonatomic) struct CGColor *CGColor;
- (void)_clearCGColorCache;
- (_Bool)getColorRed:(int *)arg1 green:(int *)arg2 blue:(int *)arg3;
- (void)setColorString:(id)arg1;
- (id)colorString;
- (void)setColorStringRaw:(id)arg1;
- (id)colorStringRaw;
- (void)setColorDisplayOnly:(_Bool)arg1;
- (_Bool)isColorDisplayOnly;
- (void)setSymbolicColorName:(id)arg1;
- (id)symbolicColorName;
@property(copy, nonatomic) NSString *title;
- (void)setUnlocalizedTitle:(id)arg1;
- (id)unlocalizedTitle;
- (_Bool)_reset;
- (void)reset;
- (int)entityType;
- (id)init;

@end
