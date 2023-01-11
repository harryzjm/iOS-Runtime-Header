//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SBWakeLogger : NSObject
{
    struct os_unfair_lock_s _lock;
    _Bool _trackingWake;
    unsigned int _timesyncService;
    unsigned int _backlightService;
    long long _homeButtonType;
    NSMutableDictionary *_wakeSouceToEventDict;
    long long _activeWakeLoggerSource;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) long long activeWakeLoggerSource; // @synthesize activeWakeLoggerSource=_activeWakeLoggerSource;
@property(retain, nonatomic) NSMutableDictionary *wakeSouceToEventDict; // @synthesize wakeSouceToEventDict=_wakeSouceToEventDict;
@property(nonatomic) unsigned int backlightService; // @synthesize backlightService=_backlightService;
@property(nonatomic) unsigned int timesyncService; // @synthesize timesyncService=_timesyncService;
@property(nonatomic) long long homeButtonType; // @synthesize homeButtonType=_homeButtonType;
@property(nonatomic) _Bool trackingWake; // @synthesize trackingWake=_trackingWake;
- (void)_lock_wakeDidBegin:(long long)arg1;
- (void)lockDidBegin;
- (void)wakeDidEnd;
- (void)wakeDidBegin:(long long)arg1;
- (void)wakeMayBegin:(long long)arg1 withTimestamp:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *activeWakeSourceDescription;
- (void)dealloc;
- (id)init;

@end
