//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAlarmSoundInfoProvider-Protocol.h>
#import <MobileTimer/NAEquatable-Protocol.h>
#import <MobileTimer/NSCopying-Protocol.h>

@class NSDateComponents, NSNumber, NSString;

@interface MTSleepAlarm : NSObject <NAEquatable, NSCopying, MTAlarmSoundInfoProvider>
{
    NSString *_vibrationID;
    _Bool _enabled;
    long long _repeatSchedule;
    NSNumber *_alarmSoundVolume;
    NSNumber *_bedtimeReminderMinutes;
    NSDateComponents *_sleepTime;
    NSDateComponents *_wakeTime;
    NSString *_alarmSoundIdentifier;
    long long _alarmSoundType;
}

@property(nonatomic) long long alarmSoundType; // @synthesize alarmSoundType=_alarmSoundType;
@property(copy, nonatomic) NSString *alarmSoundIdentifier; // @synthesize alarmSoundIdentifier=_alarmSoundIdentifier;
@property(copy, nonatomic) NSDateComponents *wakeTime; // @synthesize wakeTime=_wakeTime;
@property(copy, nonatomic) NSDateComponents *sleepTime; // @synthesize sleepTime=_sleepTime;
@property(copy, nonatomic) NSNumber *bedtimeReminderMinutes; // @synthesize bedtimeReminderMinutes=_bedtimeReminderMinutes;
@property(copy, nonatomic) NSNumber *alarmSoundVolume; // @synthesize alarmSoundVolume=_alarmSoundVolume;
@property(nonatomic) long long repeatSchedule; // @synthesize repeatSchedule=_repeatSchedule;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)_repeatString;
@property(copy, nonatomic) NSString *vibrationID;
- (void)setAlarmSoundIdentifier:(id)arg1 ofType:(long long)arg2;
- (id)_dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

