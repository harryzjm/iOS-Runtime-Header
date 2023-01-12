//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PFCloudKitThrottledNotificationObserver;
@protocol PFApplicationStateMonitorDelegate;

__attribute__((visibility("hidden")))
@interface PFApplicationStateMonitor : NSObject
{
    PFCloudKitThrottledNotificationObserver *_appActivateLifecycleObserver;
    PFCloudKitThrottledNotificationObserver *_appDeactivateLifecycleObserver;
    _Atomic int _transitionCounter;
    long long _backgroundTimeout;
    unsigned long long _applicationState;
    NSObject<PFApplicationStateMonitorDelegate> *_delegate;
}

- (void).cxx_destruct;
- (void)applicationWillDeactivate:(id)arg1;
- (void)applicationDidActivate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

