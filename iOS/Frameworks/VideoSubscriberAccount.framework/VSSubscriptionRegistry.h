//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/VSSubscriptionServiceProtocol-Protocol.h>

@class NSString, VSRemoteNotifier, VSSubscriptionPersistentContainer, VSSubscriptionPredicateFactory;

__attribute__((visibility("hidden")))
@interface VSSubscriptionRegistry : NSObject <VSSubscriptionServiceProtocol>
{
    VSRemoteNotifier *_remoteNotifier;
    VSSubscriptionPersistentContainer *_persistentContainer;
    VSSubscriptionPredicateFactory *_predicateFactory;
}

@property(retain, nonatomic) VSSubscriptionPredicateFactory *predicateFactory; // @synthesize predicateFactory=_predicateFactory;
@property(retain, nonatomic) VSSubscriptionPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property(retain, nonatomic) VSRemoteNotifier *remoteNotifier; // @synthesize remoteNotifier=_remoteNotifier;
- (void).cxx_destruct;
- (void)removeSubscriptions:(id)arg1;
- (id)_predicateForPersistentAttributesOfSubscriptions:(id)arg1 withEntity:(id)arg2 forFiltering:(_Bool)arg3;
- (void)registerSubscription:(id)arg1;
- (void)fetchActiveSubscriptionsWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_predicateForCurrentConnectionWithRequestKind:(long long)arg1;
- (id)_securityTaskForCurrentConnection;
- (id)_fetchRequest;
- (id)_subscriptionEntity;
- (long long)_saveChangesToContext:(id)arg1 withDate:(id)arg2 error:(id *)arg3;
- (_Bool)_saveChangesToContext:(id)arg1 error:(id *)arg2;
- (void)_performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)_installedAppsDidChange:(id)arg1;
- (void)_sendRemoteNotification;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

