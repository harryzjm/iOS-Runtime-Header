//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTAlarm;

@interface MTAlarmSyncObject
{
    MTAlarm *_alarm;
}

+ (id)createSYChangeFromProtobuffObject:(id)arg1 changeType:(long long)arg2;
+ (id)createMTAlarmFromMTPBAlarm:(id)arg1;
+ (id)createMTPBAlarmFromMTAlarm:(id)arg1;
+ (id)changeWithAlarm:(id)arg1 changeType:(long long)arg2;
@property(readonly, nonatomic) MTAlarm *alarm; // @synthesize alarm=_alarm;
- (void).cxx_destruct;
- (id)createProtobufWithOptions:(id)arg1;
- (id)objectIdentifier;
- (id)description;
- (id)lastModifiedDate;
- (id)initWithAlarm:(id)arg1 changeType:(long long)arg2;

@end
