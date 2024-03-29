//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol CODiscoveryManagerDelegate, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CODiscoveryManager : NSObject
{
    struct os_unfair_lock_s _lock;
    _Bool _timerEnabled;
    id <CODiscoveryManagerDelegate> _delegate;
    double _discoveryDelay;
    NSDictionary *_envelopes;
    NSObject<OS_dispatch_source> *_timer;
}

+ (id)managerWithDiscoveryDelay:(double)arg1 delegate:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic, getter=isTimerEnabled) _Bool timerEnabled; // @synthesize timerEnabled=_timerEnabled;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSDictionary *envelopes; // @synthesize envelopes=_envelopes;
@property(readonly, nonatomic) double discoveryDelay; // @synthesize discoveryDelay=_discoveryDelay;
@property(readonly, nonatomic) __weak id <CODiscoveryManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (void)_invokeDelegate:(id)arg1;
- (void)_disableTimer_unsafe;
- (void)_enableTimer_unsafe;
- (void)_configureTimer;
- (id)_triggerDiscovery_unsafe;
- (void)_timerFired;
- (void)clearRecords;
- (_Bool)addDiscoveryRecord:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (void)dealloc;
- (id)_initWithDiscoveryDelay:(double)arg1 delegate:(id)arg2;

@end

