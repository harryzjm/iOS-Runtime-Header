//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTAlarm, NSArray, NSDate;

@interface MTAlarmStateSyncObject
{
    NSArray *_alarms;
    MTAlarm *_sleepAlarm;
    NSDate *_stateModifiedDate;
}

+ (id)createSYChangeFromProtobuffObject:(id)arg1 changeType:(long long)arg2;
+ (id)alarmStateWithAlarms:(id)arg1 sleepAlarm:(id)arg2 lastModifiedDate:(id)arg3 changeType:(long long)arg4;
@property(retain, nonatomic) NSDate *stateModifiedDate; // @synthesize stateModifiedDate=_stateModifiedDate;
@property(readonly, nonatomic) MTAlarm *sleepAlarm; // @synthesize sleepAlarm=_sleepAlarm;
@property(readonly, nonatomic) NSArray *alarms; // @synthesize alarms=_alarms;
- (void).cxx_destruct;
- (id)description;
- (id)createProtobufWithOptions:(id)arg1;
- (id)objectIdentifier;
- (id)allAlarms;
- (id)lastModifiedDate;
- (id)initWithAlarms:(id)arg1 sleepAlarm:(id)arg2 lastModifiedDate:(id)arg3 changeType:(long long)arg4;

@end
