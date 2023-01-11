//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTAlarmManager, NSSet;
@protocol NAScheduler;

@interface MTNextAlarmManager : NSObject
{
    NSSet *_nextAlarms;
    CDUnknownBlockType _updateHandler;
    id <NAScheduler> _serializer;
    MTAlarmManager *_alarmManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MTAlarmManager *alarmManager; // @synthesize alarmManager=_alarmManager;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(retain, nonatomic) NSSet *nextAlarms; // @synthesize nextAlarms=_nextAlarms;
- (void)_handleAlarmsDidChange;
- (void)calculateNextAlarms;
- (id)init;

@end
