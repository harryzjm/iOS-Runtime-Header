//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTDictionarySerializable-Protocol.h>
#import <MobileTimer/MTDiffable-Protocol.h>
#import <MobileTimer/MTScheduleable-Protocol.h>
#import <MobileTimer/NAEquatable-Protocol.h>
#import <MobileTimer/NSCopying-Protocol.h>
#import <MobileTimer/NSMutableCopying-Protocol.h>
#import <MobileTimer/NSSecureCoding-Protocol.h>

@class INObject, MTSound, NSDate, NSString, NSURL, NSUUID;

@interface MTAlarm : NSObject <MTScheduleable, MTDiffable, MTDictionarySerializable, NAEquatable, NSSecureCoding, NSCopying, NSMutableCopying>
{
    _Bool _bedtimeDoNotDisturb;
    _Bool _enabled;
    _Bool _firing;
    _Bool _sleepAlarm;
    _Bool _allowsSnooze;
    NSUUID *_alarmID;
    unsigned long long _hour;
    unsigned long long _minute;
    unsigned long long _bedtimeHour;
    unsigned long long _bedtimeMinute;
    unsigned long long _bedtimeReminderMinutes;
    unsigned long long _repeatSchedule;
    unsigned long long _active;
    NSDate *_firedDate;
    NSDate *_snoozeFireDate;
    NSDate *_bedtimeSnoozeFireDate;
    NSDate *_dismissedDate;
    NSDate *_lastModifiedDate;
    NSString *_title;
    MTSound *_sound;
    NSDate *_bedtimeForSleepTracking;
    CDUnknownBlockType _currentDateProvider;
}

+ (id)mostRecentlyUpdatedAlarmForAlarms:(id)arg1;
+ (id)descriptionForActiveStatus:(unsigned long long)arg1;
+ (_Bool)supportsSecureCoding;
+ (_Bool)_date:(id)arg1 isOnDay:(long long)arg2 calendar:(id)arg3;
+ (_Bool)_isInternalBuild;
+ (unsigned long long)defaultActiveStatus;
+ (id)sleepAlarmWithHour:(long long)arg1 minute:(long long)arg2 bedtimeHour:(long long)arg3 bedtimeMinute:(long long)arg4;
+ (id)sleepAlarmWithHour:(long long)arg1 minute:(long long)arg2;
+ (id)sleepAlarm;
+ (id)alarmWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2;
+ (id)alarm;
@property(copy, nonatomic) CDUnknownBlockType currentDateProvider; // @synthesize currentDateProvider=_currentDateProvider;
@property(copy, nonatomic) NSDate *bedtimeForSleepTracking; // @synthesize bedtimeForSleepTracking=_bedtimeForSleepTracking;
@property(copy, nonatomic) MTSound *sound; // @synthesize sound=_sound;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(copy, nonatomic) NSDate *dismissedDate; // @synthesize dismissedDate=_dismissedDate;
@property(copy, nonatomic) NSDate *bedtimeSnoozeFireDate; // @synthesize bedtimeSnoozeFireDate=_bedtimeSnoozeFireDate;
@property(copy, nonatomic) NSDate *snoozeFireDate; // @synthesize snoozeFireDate=_snoozeFireDate;
@property(copy, nonatomic) NSDate *firedDate; // @synthesize firedDate=_firedDate;
@property(nonatomic) _Bool allowsSnooze; // @synthesize allowsSnooze=_allowsSnooze;
@property(nonatomic, getter=isSleepAlarm) _Bool sleepAlarm; // @synthesize sleepAlarm=_sleepAlarm;
@property(nonatomic, getter=isFiring) _Bool firing; // @synthesize firing=_firing;
@property(nonatomic) unsigned long long active; // @synthesize active=_active;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) unsigned long long repeatSchedule; // @synthesize repeatSchedule=_repeatSchedule;
@property(nonatomic) _Bool bedtimeDoNotDisturb; // @synthesize bedtimeDoNotDisturb=_bedtimeDoNotDisturb;
@property(nonatomic) unsigned long long bedtimeReminderMinutes; // @synthesize bedtimeReminderMinutes=_bedtimeReminderMinutes;
@property(nonatomic) unsigned long long bedtimeMinute; // @synthesize bedtimeMinute=_bedtimeMinute;
@property(nonatomic) unsigned long long bedtimeHour; // @synthesize bedtimeHour=_bedtimeHour;
@property(nonatomic) unsigned long long minute; // @synthesize minute=_minute;
@property(nonatomic) unsigned long long hour; // @synthesize hour=_hour;
@property(readonly, nonatomic) NSUUID *alarmID; // @synthesize alarmID=_alarmID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_copyStateOntoAlarm:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_isEqualToAlarm:(id)arg1 checkLastModified:(_Bool)arg2;
- (_Bool)isEqualToAlarm:(id)arg1;
- (_Bool)isEqualIgnoringLastModifiedDate:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)_nextDateHelperWithDate:(id)arg1 calendar:(id)arg2;
- (id)_actualTriggerStartDateForDate:(id)arg1;
- (id)_nextBedtimeTriggersHelperWithDate:(id)arg1 wakeUpDate:(id)arg2 includeBedtimeNotification:(_Bool)arg3 includeBedtime:(_Bool)arg4 calendar:(id)arg5;
- (id)nextTriggersAfterDate:(id)arg1 includeSnooze:(_Bool)arg2 includeBedtimeNotification:(_Bool)arg3 includeBedtime:(_Bool)arg4;
- (id)nextTriggersAfterDate:(id)arg1 includeSnooze:(_Bool)arg2 includeBedtimeNotification:(_Bool)arg3;
- (id)nextTriggersAfterDate:(id)arg1 includeBedtime:(_Bool)arg2;
- (id)nextTriggersAfterDate:(id)arg1;
- (id)nextTriggerAfterDate:(id)arg1 ofType:(unsigned long long)arg2;
- (id)nextTriggerAfterDate:(id)arg1 includeSnooze:(_Bool)arg2 includeBedtimeNotification:(_Bool)arg3;
- (id)nextTriggerAfterDate:(id)arg1 includeBedtimeNotification:(_Bool)arg2;
- (id)nextTriggerAfterDate:(id)arg1;
- (id)nextTrigger;
- (id)nextFireDateAfterDate:(id)arg1 includeBedtimeNotification:(_Bool)arg2;
- (id)nextFireDateAfterDate:(id)arg1;
@property(readonly, nonatomic) NSDate *nextFireDate;
- (long long)compare:(id)arg1;
- (double)sleepDurationSeconds;
@property(readonly, nonatomic) unsigned long long sleepDuration;
@property(readonly, nonatomic) NSString *displayTitle;
@property(readonly, nonatomic, getter=isBedtimeSnoozed) _Bool bedtimeSnoozed;
@property(readonly, nonatomic, getter=isSnoozed) _Bool snoozed;
@property(readonly, nonatomic) _Bool repeats;
@property(readonly, nonatomic) NSURL *alarmURL;
- (id)dateComponents;
- (id)alarmIDString;
@property(readonly, nonatomic, getter=isActiveAndEnabledForThisDevice) _Bool activeAndEnabledForThisDevice;
- (void)setActiveForThisDevice:(_Bool)arg1;
@property(readonly, nonatomic, getter=isActiveForThisDevice) _Bool activeForThisDevice;
@property(readonly, nonatomic, getter=isActiveAnywhere) _Bool activeAnywhere;
- (id)initWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 currentDateProvider:(CDUnknownBlockType)arg3;
- (id)initWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2;
- (id)_initCommon;
- (id)initWithCurrentTimeFromCurrentDateProvider:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)upcomingTriggersAfterDate:(id)arg1;
- (_Bool)shouldBeScheduled;
- (id)identifier;
@property(readonly, nonatomic) INObject *timeObject;
@property(readonly, nonatomic) NSString *intentLabel;
@property(readonly, nonatomic) INObject *alarmIDIntentObject;
- (id)keysAffectingNotification;
- (id)keysAffectingScheduling;
- (id)keysAffectingSnooze;
- (id)keyForIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

