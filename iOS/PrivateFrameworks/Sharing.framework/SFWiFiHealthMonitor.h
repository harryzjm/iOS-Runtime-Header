//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CURetrier;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFWiFiHealthMonitor : NSObject
{
    _Bool _invalidateCalled;
    CURetrier *_wifiRetrier;
    unsigned long long _wifiStatusBadTicks;
    unsigned long long _wifiStatusGoodTicks;
    double _wifiStatusDebounceSecs;
    NSObject<OS_dispatch_source> *_wifiStatusDebounceTimer;
    long long _wifiStatusExternal;
    long long _wifiStatusInternal;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _statusHandler;
}

@property(copy, nonatomic) CDUnknownBlockType statusHandler; // @synthesize statusHandler=_statusHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)_wifiStatusChangedInternal:(long long)arg1;
- (void)_wifiStatusChangedExternal:(long long)arg1;
- (void)_wifiEnsureStopped;
- (void)_wifiEnsureStarted;
- (void)_update;
- (void)reset;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (id)description;
- (id)init;

@end
