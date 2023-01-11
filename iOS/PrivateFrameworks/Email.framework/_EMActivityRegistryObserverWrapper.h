//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Email/EFCancelable-Protocol.h>
#import <Email/EMActivityObserver_xpc-Protocol.h>

@class EMActivityRegistry, EMRemoteConnection, NSArray, NSMutableDictionary, NSString;
@protocol EFCancelable, EMActivityObserver;

__attribute__((visibility("hidden")))
@interface _EMActivityRegistryObserverWrapper : NSObject <EFCancelable, EMActivityObserver_xpc>
{
    id <EFCancelable> _observerCancelable;
    NSMutableDictionary *_trackedActivities;
    struct os_unfair_lock_s _lock;
    EMRemoteConnection *_connection;
    EMActivityRegistry *_registry;
    id <EMActivityObserver> _observer;
}

- (void).cxx_destruct;
@property __weak id <EMActivityObserver> observer; // @synthesize observer=_observer;
@property __weak EMActivityRegistry *registry; // @synthesize registry=_registry;
@property(retain) EMRemoteConnection *connection; // @synthesize connection=_connection;
- (void)removedActivityWithID:(id)arg1;
- (void)activityWithID:(id)arg1 finishedWithError:(id)arg2;
- (void)activityWithID:(id)arg1 setCompletedCount:(id)arg2 totalCount:(id)arg3;
- (void)activityWithID:(id)arg1 setUserInfoObject:(id)arg2 forKey:(id)arg3;
- (void)startedActivity:(id)arg1;
- (id)activityWithObjectID:(id)arg1;
@property(retain) NSArray *activities;
- (void)_recover;
- (void)_resetWithCancelable:(id)arg1;
- (void)_startObservingIfNecessary;
- (void)cancel;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 registry:(id)arg2 observer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
