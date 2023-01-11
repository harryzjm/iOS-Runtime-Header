//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotifications/NSCopying-Protocol.h>
#import <UserNotifications/NSMutableCopying-Protocol.h>
#import <UserNotifications/NSSecureCoding-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface UNNotificationSound : NSObject <NSMutableCopying, NSCopying, NSSecureCoding>
{
    long long _alertType;
    NSString *_alertTopic;
    NSString *_audioCategory;
    NSNumber *_audioVolume;
    double _maximumDuration;
    _Bool _critical;
    _Bool _shouldIgnoreRingerSwitch;
    _Bool _shouldRepeat;
    NSString *_toneFileName;
    NSURL *_toneFileURL;
    NSString *_toneIdentifier;
    unsigned long long _toneMediaLibraryItemIdentifier;
    NSString *_vibrationIdentifier;
    NSURL *_vibrationPatternFileURL;
}

+ (_Bool)supportsSecureCoding;
+ (id)_soundWithAlertType:(long long)arg1 audioVolume:(id)arg2 critical:(_Bool)arg3 toneFileName:(id)arg4;
+ (id)soundWithAlertType:(long long)arg1;
+ (id)soundNamed:(id)arg1;
+ (id)criticalSoundNamed:(id)arg1 withAudioVolume:(float)arg2;
+ (id)criticalSoundNamed:(id)arg1;
+ (id)defaultCriticalSoundWithAudioVolume:(float)arg1;
+ (id)defaultCriticalSound;
+ (id)defaultSystemSound;
+ (id)defaultSound;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isCritical) _Bool critical; // @synthesize critical=_critical;
@property(readonly, copy, nonatomic) NSURL *vibrationPatternFileURL; // @synthesize vibrationPatternFileURL=_vibrationPatternFileURL;
@property(readonly, copy, nonatomic) NSString *vibrationIdentifier; // @synthesize vibrationIdentifier=_vibrationIdentifier;
@property(readonly, nonatomic) long long alertType; // @synthesize alertType=_alertType;
@property(readonly, copy, nonatomic) NSString *toneIdentifier; // @synthesize toneIdentifier=_toneIdentifier;
@property(readonly, copy, nonatomic) NSURL *toneFileURL; // @synthesize toneFileURL=_toneFileURL;
@property(readonly, copy, nonatomic) NSString *toneFileName; // @synthesize toneFileName=_toneFileName;
@property(readonly, nonatomic) _Bool shouldRepeat; // @synthesize shouldRepeat=_shouldRepeat;
@property(readonly, nonatomic) _Bool shouldIgnoreRingerSwitch; // @synthesize shouldIgnoreRingerSwitch=_shouldIgnoreRingerSwitch;
@property(readonly, nonatomic) double maximumDuration; // @synthesize maximumDuration=_maximumDuration;
@property(readonly, nonatomic) unsigned long long toneMediaLibraryItemIdentifier; // @synthesize toneMediaLibraryItemIdentifier=_toneMediaLibraryItemIdentifier;
@property(readonly, copy, nonatomic) NSNumber *audioVolume; // @synthesize audioVolume=_audioVolume;
@property(readonly, copy, nonatomic) NSString *audioCategory; // @synthesize audioCategory=_audioCategory;
@property(readonly, copy, nonatomic) NSString *alertTopic; // @synthesize alertTopic=_alertTopic;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)_initWithAlertType:(long long)arg1 alertTopic:(id)arg2 audioCategory:(id)arg3 audioVolume:(id)arg4 critical:(_Bool)arg5 maximumDuration:(double)arg6 shouldIgnoreRingerSwitch:(_Bool)arg7 shouldRepeat:(_Bool)arg8 toneFileName:(id)arg9 toneFileURL:(id)arg10 toneIdentifier:(id)arg11 toneMediaLibraryItemIdentifier:(unsigned long long)arg12 vibrationIdentifier:(id)arg13 vibrationPatternFileURL:(id)arg14;

@end
