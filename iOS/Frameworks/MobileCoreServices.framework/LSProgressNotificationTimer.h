//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSDate, NSMutableSet, NSTimer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface LSProgressNotificationTimer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSTimer *_timer;
    NSDate *_lastFiredDate;
    NSMutableSet *_applications;
    double _minInterval;
    double _latency;
    SEL _appObserverSelector;
}

@property SEL appObserverSelector; // @synthesize appObserverSelector=_appObserverSelector;
@property(readonly, nonatomic) double latency; // @synthesize latency=_latency;
@property(readonly, nonatomic) double minInterval; // @synthesize minInterval=_minInterval;
@property(retain, nonatomic) NSMutableSet *applications; // @synthesize applications=_applications;
@property(retain, nonatomic) NSDate *lastFiredDate; // @synthesize lastFiredDate=_lastFiredDate;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (id)description;
- (void)sendMessage:(id)arg1;
- (void)notifyObservers:(id)arg1 withApplications:(id)arg2;
- (void)clear;
- (void)removeApplication:(id)arg1;
- (void)addApplication:(id)arg1;
- (void)stopTimer;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end
