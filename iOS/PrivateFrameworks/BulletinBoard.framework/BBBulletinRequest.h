//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BBAccessoryIcon, BBAction, BBAttachmentMetadata, BBContent, BBSectionIcon, BBSound, NSArray, NSDate, NSDictionary, NSSet, NSString, NSTimeZone;

@interface BBBulletinRequest
{
    unsigned long long _expirationEvents;
}

@property(nonatomic) unsigned long long expirationEvents; // @synthesize expirationEvents=_expirationEvents;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
@property(nonatomic) _Bool tentative;
@property(nonatomic) _Bool showsUnreadIndicator;
- (void)generateBulletinID;
- (void)addAlertSuppressionAppID:(id)arg1;
@property(nonatomic) unsigned long long realertCount;
- (void)setUnlockActionLabel:(id)arg1;
- (void)_updateSupplementaryAction:(id)arg1;
- (void)setSupplementaryActions:(id)arg1 forLayout:(long long)arg2;
@property(copy, nonatomic) NSArray *supplementaryActions; // @dynamic supplementaryActions;
- (void)withdraw;
- (void)publish;
- (void)publish:(_Bool)arg1;
- (void)addButton:(id)arg1;
- (void)addAttachmentOfType:(long long)arg1;
@property(nonatomic) long long primaryAttachmentType; // @dynamic primaryAttachmentType;
- (void)setContextValue:(id)arg1 forKey:(id)arg2;
- (void)generateNewBulletinID;
- (_Bool)hasAdditionalAttachmentsModificationsRelativeTo:(id)arg1;
- (_Bool)hasContentModificationsRelativeTo:(id)arg1;

// Remaining properties
@property(retain, nonatomic) BBAccessoryIcon *accessoryIconMask; // @dynamic accessoryIconMask;
@property(copy, nonatomic) BBAction *acknowledgeAction; // @dynamic acknowledgeAction;
@property(copy, nonatomic) NSArray *additionalAttachments; // @dynamic additionalAttachments;
@property(nonatomic) long long addressBookRecordID; // @dynamic addressBookRecordID;
@property(copy, nonatomic) NSSet *alertSuppressionAppIDs_deprecated; // @dynamic alertSuppressionAppIDs_deprecated;
@property(copy, nonatomic) NSSet *alertSuppressionContexts; // @dynamic alertSuppressionContexts;
@property(copy, nonatomic) BBAction *alternateAction; // @dynamic alternateAction;
@property(nonatomic) long long backgroundStyle; // @dynamic backgroundStyle;
@property(copy, nonatomic) NSString *bulletinID; // @dynamic bulletinID;
@property(copy, nonatomic) NSArray *buttons; // @dynamic buttons;
@property(copy, nonatomic) NSString *categoryID; // @dynamic categoryID;
@property(nonatomic) _Bool clearable; // @dynamic clearable;
@property(nonatomic) long long contentPreviewSetting; // @dynamic contentPreviewSetting;
@property(retain, nonatomic) NSDictionary *context; // @dynamic context;
@property(nonatomic) unsigned long long counter; // @dynamic counter;
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(nonatomic) long long dateFormatStyle; // @dynamic dateFormatStyle;
@property(nonatomic) _Bool dateIsAllDay; // @dynamic dateIsAllDay;
@property(copy, nonatomic) BBAction *defaultAction; // @dynamic defaultAction;
@property(copy, nonatomic) BBAction *dismissAction; // @dynamic dismissAction;
@property(copy, nonatomic) NSString *dismissalID; // @dynamic dismissalID;
@property(retain, nonatomic) NSDate *endDate; // @dynamic endDate;
@property(retain, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(copy, nonatomic) BBAction *expireAction; // @dynamic expireAction;
@property(nonatomic) _Bool expiresOnPublisherDeath; // @dynamic expiresOnPublisherDeath;
@property(nonatomic) _Bool hasCriticalIcon; // @dynamic hasCriticalIcon;
@property(nonatomic) _Bool hasEventDate; // @dynamic hasEventDate;
@property(copy, nonatomic) NSString *header; // @dynamic header;
@property(retain, nonatomic) BBSectionIcon *icon; // @dynamic icon;
@property(nonatomic) _Bool ignoresDowntime; // @dynamic ignoresDowntime;
@property(nonatomic) _Bool ignoresQuietMode; // @dynamic ignoresQuietMode;
@property(copy, nonatomic) NSArray *intentIDs; // @dynamic intentIDs;
@property(retain, nonatomic) NSDate *lastInterruptDate; // @dynamic lastInterruptDate;
@property(nonatomic, getter=isLoading) _Bool loading; // @dynamic loading;
@property(nonatomic) long long lockScreenPriority; // @dynamic lockScreenPriority;
@property(copy, nonatomic) NSString *message; // @dynamic message;
@property(retain, nonatomic) BBContent *modalAlertContent; // @dynamic modalAlertContent;
@property(copy, nonatomic) NSString *parentSectionID; // @dynamic parentSectionID;
@property(copy, nonatomic) NSArray *peopleIDs; // @dynamic peopleIDs;
@property(nonatomic) _Bool preventAutomaticRemovalFromLockScreen; // @dynamic preventAutomaticRemovalFromLockScreen;
@property(copy, nonatomic) BBAttachmentMetadata *primaryAttachment; // @dynamic primaryAttachment;
@property(retain, nonatomic) NSDate *publicationDate; // @dynamic publicationDate;
@property(copy, nonatomic) NSString *publisherBulletinID; // @dynamic publisherBulletinID;
@property(copy, nonatomic) BBAction *raiseAction; // @dynamic raiseAction;
@property(nonatomic) unsigned long long realertCount_deprecated; // @dynamic realertCount_deprecated;
@property(retain, nonatomic) NSDate *recencyDate; // @dynamic recencyDate;
@property(copy, nonatomic) NSString *recordID; // @dynamic recordID;
@property(copy, nonatomic) NSString *section; // @dynamic section;
@property(copy, nonatomic) NSString *sectionID; // @dynamic sectionID;
@property(nonatomic) long long sectionSubtype; // @dynamic sectionSubtype;
@property(copy, nonatomic) BBAction *silenceAction; // @dynamic silenceAction;
@property(copy, nonatomic) BBAction *snoozeAction; // @dynamic snoozeAction;
@property(retain, nonatomic) BBSound *sound; // @dynamic sound;
@property(retain, nonatomic) BBContent *starkBannerContent; // @dynamic starkBannerContent;
@property(copy, nonatomic) NSSet *subsectionIDs; // @dynamic subsectionIDs;
@property(copy, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(copy, nonatomic) NSString *summaryArgument; // @dynamic summaryArgument;
@property(nonatomic) unsigned long long summaryArgumentCount; // @dynamic summaryArgumentCount;
@property(copy, nonatomic) NSString *threadID; // @dynamic threadID;
@property(retain, nonatomic) NSTimeZone *timeZone; // @dynamic timeZone;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) _Bool turnsOnDisplay; // @dynamic turnsOnDisplay;
@property(copy, nonatomic) NSString *universalSectionID; // @dynamic universalSectionID;
@property(copy, nonatomic) NSString *unlockActionLabelOverride; // @dynamic unlockActionLabelOverride;
@property(nonatomic) _Bool usesExternalSync; // @dynamic usesExternalSync;
@property(nonatomic) _Bool wantsFullscreenPresentation; // @dynamic wantsFullscreenPresentation;

@end

