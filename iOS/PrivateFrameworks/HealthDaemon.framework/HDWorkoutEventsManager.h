//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDAssertionObserver-Protocol.h>

@class HDAssertionManager, HDProfile, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface HDWorkoutEventsManager : NSObject <HDAssertionObserver>
{
    HDProfile *_profile;
    HDAssertionManager *_assertionManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_eventCollectors;
}

- (void).cxx_destruct;
- (id)_queue_eventCollectorsForType:(unsigned long long)arg1 delegate:(id)arg2;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)requestPendingEventsThroughDate:(id)arg1 sessionIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)takeSessionAssertionWithOwnerIdentifier:(id)arg1 activityType:(unsigned long long)arg2 sessionIdentifier:(id)arg3 eventsDelegate:(id)arg4;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

