//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC10ChronoCore14ProcessMonitor : NSObject
{
    MISSING_TYPE *_queue;
    MISSING_TYPE *_calloutQueue;
    MISSING_TYPE *_configurationService;
    MISSING_TYPE *_extensionManager;
    MISSING_TYPE *_subscriptions;
    MISSING_TYPE *_lock;
    MISSING_TYPE *_lock_processMonitor;
    MISSING_TYPE *_lock_knownExtensionBundleIdentifiers;
    MISSING_TYPE *_lock_knownApplicationBundleIdentifiers;
    MISSING_TYPE *_lock_runningBundleIdentifiersToPIDs;
    MISSING_TYPE *_lock_runningBundleIdentifiersWithVisibleScenes;
    MISSING_TYPE *_lock_runningBundleIdentifiersWithExemptions;
    MISSING_TYPE *_lock_formerlyVisibleBundleIdentifiers;
    MISSING_TYPE *_lock_bundleIdentifiersToSuspensionObservers;
    MISSING_TYPE *_lock_graceExpirationTimer;
    MISSING_TYPE *_lock_observers;
}

- (void).cxx_destruct;
- (id)init;

@end

