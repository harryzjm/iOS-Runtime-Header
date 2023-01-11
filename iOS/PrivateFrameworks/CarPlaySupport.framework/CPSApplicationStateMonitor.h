//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface CPSApplicationStateMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_stateObserverQueue;
    NSString *_bundleIdentifier;
    BKSApplicationStateMonitor *_stateMonitor;
    NSHashTable *_stateObservers;
}

@property(retain, nonatomic) NSHashTable *stateObservers; // @synthesize stateObservers=_stateObservers;
@property(retain, nonatomic) BKSApplicationStateMonitor *stateMonitor; // @synthesize stateMonitor=_stateMonitor;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isApplicationActive) _Bool applicationActive;
- (void)removeApplicationStateObserver:(id)arg1;
- (void)addApplicationStateObserver:(id)arg1;
- (void)removeAllObservers;
- (void)dealloc;
- (void)_handleStateChange:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;

@end
