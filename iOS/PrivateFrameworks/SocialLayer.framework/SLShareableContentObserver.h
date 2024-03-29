//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SLDServiceProxy;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SLShareableContentObserver : NSObject
{
    SLDServiceProxy *_serviceProxy;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    unsigned long long _state;
    _Bool _needsRefresh;
}

+ (id)sharedObserver;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool needsRefresh; // @synthesize needsRefresh=_needsRefresh;
- (void)serviceProxyDidDisconnect:(id)arg1;
- (void)serviceProxyDidConnect:(id)arg1;
- (void)userActivityWasCreated:(id)arg1;
- (void)documentStateChangedNotification:(id)arg1;
- (void)willResignActiveNotification:(id)arg1;
- (void)didEnterBackgroundNotification:(id)arg1;
- (void)didBecomeActiveNotification:(id)arg1;
- (void)reset;
- (void)pause;
- (void)connectAndRefreshNow;
- (void)refreshIfNeeded;
- (_Bool)needsToRefresh;
- (void)resumeIfNeeded;
- (_Bool)needsToResume;
- (_Bool)applicationIsActive;
- (void)setNeedsRefresh;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
@property(readonly, nonatomic) SLDServiceProxy *serviceProxy;
- (void)addObservers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

