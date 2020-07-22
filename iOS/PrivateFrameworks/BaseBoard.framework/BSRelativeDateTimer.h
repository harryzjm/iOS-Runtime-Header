//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <BaseBoard/BSPowerMonitorObserver-Protocol.h>

@class NSCalendar, NSDate, NSString, NSTimer;
@protocol BSRelativeDateTimerDelegate;

@interface BSRelativeDateTimer : NSObject <BSPowerMonitorObserver>
{
    NSCalendar *_gregorian;
    NSTimer *_timer;
    NSDate *_date;
    id <BSRelativeDateTimerDelegate> _delegate;
    unsigned long long _currResolution;
    long long _currValue;
}

+ (void)invalidateTimer:(id)arg1;
+ (void)addTimerToMainRunLoop:(id)arg1;
+ (void)initialize;
@property(nonatomic) __weak id <BSRelativeDateTimerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)powerMonitorSystemDidWakeFromSleep:(id)arg1;
- (void)_invalidateTimer;
- (double)_nextFireInterval:(id)arg1 resolution:(unsigned long long)arg2 comparedToNow:(long long)arg3;
- (void)_fireAndUpdateTimerIfNecessary;
- (id)_timeDifferenceFromDate:(id)arg1;
- (void)invalidate;
- (void)fireAndSchedule;
- (double)nextFireInterval;
- (id)date;
- (void)setDate:(id)arg1;
- (void)_fireForLocaleEvent:(id)arg1;
- (void)_fireForEvent;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

