//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFTimer, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraSignificantEventNotificationDebouncer : HMFObject
{
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_lastDateNotifiedByPersonIdentifier;
    HMFTimer *_cleanupTimer;
    NSString *_logIdentifier;
    double _distinctPersonDebounceTimeInterval;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) double distinctPersonDebounceTimeInterval; // @synthesize distinctPersonDebounceTimeInterval=_distinctPersonDebounceTimeInterval;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly) HMFTimer *cleanupTimer; // @synthesize cleanupTimer=_cleanupTimer;
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly) NSMutableDictionary *lastDateNotifiedByPersonIdentifier; // @synthesize lastDateNotifiedByPersonIdentifier=_lastDateNotifiedByPersonIdentifier;
- (void)timerDidFire:(id)arg1;
- (void)trackCameraSignificantEvent:(id)arg1 shouldNotify:(_Bool *)arg2;
- (id)initWithLogIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

