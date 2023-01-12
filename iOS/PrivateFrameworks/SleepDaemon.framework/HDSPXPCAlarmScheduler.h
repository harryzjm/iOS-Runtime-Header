//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HDSPEventScheduleDelegate;

__attribute__((visibility("hidden")))
@interface HDSPXPCAlarmScheduler : NSObject
{
    id <HDSPEventScheduleDelegate> delegate;
    CDUnknownBlockType _currentDateProvider;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType currentDateProvider; // @synthesize currentDateProvider=_currentDateProvider;
@property(nonatomic) __weak id <HDSPEventScheduleDelegate> delegate; // @synthesize delegate;
- (id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2;
- (void)unschedule;
- (void)scheduleEventForDate:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithCurrentDateProvider:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

