//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsKit/NCNotificationAlertDestination-Protocol.h>
#import <UserNotificationsKit/NCNotificationAlertDestinationDelegate-Protocol.h>

@class BSServiceConnectionEndpoint, NCNotificationCollapsingQueue, NCNotificationDestinationsRegistry, NCNotificationRequest, NSString;
@protocol NCNotificationAlertDestinationDelegate;

@interface NCNotificationAlertQueue : NSObject <NCNotificationAlertDestinationDelegate, NCNotificationAlertDestination>
{
    id <NCNotificationAlertDestinationDelegate> _delegate;
    NCNotificationDestinationsRegistry *_destinationsRegistry;
    NCNotificationCollapsingQueue *_queue;
    NCNotificationRequest *_coalescingRequest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NCNotificationRequest *coalescingRequest; // @synthesize coalescingRequest=_coalescingRequest;
@property(retain, nonatomic) NCNotificationCollapsingQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NCNotificationDestinationsRegistry *destinationsRegistry; // @synthesize destinationsRegistry=_destinationsRegistry;
@property(nonatomic) __weak id <NCNotificationAlertDestinationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_prepareDestinationsToReceiveCriticalNotificationRequest:(id)arg1;
- (_Bool)_readyToReceiveForNotificationRequest:(id)arg1;
- (_Bool)_destinations:(id)arg1 canReceiveNotificationRequest:(id)arg2;
- (_Bool)_performDestinationOperationForRequest:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)_postNotificationRequest:(id)arg1;
- (void)_postEnqueuedNotificationRequestsCoalescingWith:(id)arg1;
- (void)_postNextNotificationRequestPassingTest:(CDUnknownBlockType)arg1;
- (void)_postNextNotificationRequest;
- (void)destination:(id)arg1 didDismissNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 willDismissNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 didPresentNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2 suppressAlerts:(_Bool)arg3;
- (void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsCoalescedWith:(id)arg2;
- (void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsPassingTest:(CDUnknownBlockType)arg2;
- (void)destinationDidBecomeReadyToReceiveNotifications:(id)arg1;
- (void)destination:(id)arg1 setAllowsCriticalAlerts:(_Bool)arg2 forSectionIdentifier:(id)arg3;
- (void)destination:(id)arg1 setDeliverQuietly:(_Bool)arg2 forSectionIdentifier:(id)arg3;
- (void)destination:(id)arg1 setAllowsNotifications:(_Bool)arg2 forSectionIdentifier:(id)arg3;
- (void)destination:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2;
- (void)destination:(id)arg1 requestsClearingNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4;
- (void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2 fromDestinations:(id)arg3;
- (void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2;
- (id)notificationSectionSettingsForDestination:(id)arg1 forSectionIdentifier:(id)arg2;
- (id)notificationSectionSettingsForDestination:(id)arg1;
- (void)destination:(id)arg1 executeAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(_Bool)arg4 withParameters:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)destination:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
- (void)withdrawNotificationRequest:(id)arg1;
- (void)modifyNotificationRequest:(id)arg1;
- (void)postNotificationRequest:(id)arg1;
- (_Bool)canReceiveNotificationRequest:(id)arg1;
@property(readonly, nonatomic) BSServiceConnectionEndpoint *endpoint;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic, getter=isAlertDestination) _Bool alertDestination;
- (void)setDestination:(id)arg1 ready:(_Bool)arg2;
- (id)destinationsForRequestDestinations:(id)arg1;
- (_Bool)isRegisteredDestination:(id)arg1;
- (void)setDestination:(id)arg1 enabled:(_Bool)arg2;
- (void)unregisterDestination:(id)arg1;
- (void)registerDestination:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
