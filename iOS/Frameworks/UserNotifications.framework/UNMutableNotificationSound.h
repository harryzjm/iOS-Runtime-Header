//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSNumber, NSString;

@interface UNMutableNotificationSound
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSDictionary *vibrationPattern; // @dynamic vibrationPattern;
@property(copy, nonatomic) NSString *vibrationIdentifier; // @dynamic vibrationIdentifier;
@property(nonatomic) unsigned long long toneMediaLibraryItemIdentifier; // @dynamic toneMediaLibraryItemIdentifier;
@property(copy, nonatomic) NSString *toneIdentifier; // @dynamic toneIdentifier;
@property(copy, nonatomic) NSString *toneFileName; // @dynamic toneFileName;
@property(nonatomic) _Bool shouldRepeat; // @dynamic shouldRepeat;
@property(nonatomic) _Bool shouldIgnoreRingerSwitch; // @dynamic shouldIgnoreRingerSwitch;
@property(nonatomic) double maximumDuration; // @dynamic maximumDuration;
@property(copy, nonatomic) NSNumber *audioVolume; // @dynamic audioVolume;
@property(copy, nonatomic) NSString *audioCategory; // @dynamic audioCategory;
@property(copy, nonatomic) NSString *alertTopic; // @dynamic alertTopic;

@end

