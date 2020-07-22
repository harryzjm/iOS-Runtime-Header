//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileTimer/NSObject-Protocol.h>

@class NSNumber, NSString;

@protocol MTAlarmSoundInfoProvider <NSObject>
@property(copy, nonatomic) NSString *vibrationID;
@property(readonly, nonatomic) long long alarmSoundType;
@property(readonly, nonatomic) NSString *alarmSoundIdentifier;
@property(copy, nonatomic) NSNumber *alarmSoundVolume;
- (void)setAlarmSoundIdentifier:(NSString *)arg1 ofType:(long long)arg2;
@end
