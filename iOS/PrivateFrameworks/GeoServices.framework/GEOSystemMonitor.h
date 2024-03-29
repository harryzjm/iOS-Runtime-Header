//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, geo_isolater;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOSystemMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    geo_isolater *_isolater;
    GEOObserverHashTable *_systemSleepObservers;
    struct IONotificationPort *_notifyPortRef;
    unsigned int _notifier;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)removeSystemSleepObserver:(id)arg1;
- (void)addSystemSleepObserver:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (_Bool)isBackgroundAppRefreshEnabledForBundleIdentifier:(id)arg1 isDisabledGlobally:(_Bool *)arg2;
- (id)init;

@end

