//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDRemoteServiceServerProtocol-Protocol.h>
#import <DoNotDisturbServer/NSXPCListenerDelegate-Protocol.h>

@class DNDSClientDetailsProvider, NSMapTable, NSString, NSXPCListener;
@protocol DNDSRemoteServiceProviderDelegate;

@interface DNDSRemoteServiceProvider : NSObject <NSXPCListenerDelegate, DNDRemoteServiceServerProtocol>
{
    NSXPCListener *_listener;
    NSMapTable *_clientConnectionDetailsByConnection;
    DNDSClientDetailsProvider *_clientDetailsProvider;
    id <DNDSRemoteServiceProviderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <DNDSRemoteServiceProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_clientDetailsForClientIdentifier:(id)arg1 clientConnection:(id)arg2;
- (void)_iterateClientConnectionsToSendWithHandler:(CDUnknownBlockType)arg1;
- (void)_unregisterConnectionDetailsForClientConnection:(id)arg1;
- (void)_registerOrMutateConnectionDetailsForClientConnection:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_handleClientConnectionInvalidated:(id)arg1;
- (void)_handleClientConnectionInterrupted:(id)arg1;
- (void)registerForSettingsUpdatesWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setScheduleSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getScheduleSettingsWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setPhoneCallBypassSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getPhoneCallBypassSettingsWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setBehaviorSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getBehaviorSettingsWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerForStateUpdatesWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queryStateWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerForAssertionUpdatesWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)invalidateAllActiveModeAssertionsWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getLatestModeAssertionInvalidationWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getActiveModeAssertionWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)invalidateActiveModeAssertionWithDetails:(id)arg1 reasonOverride:(unsigned long long)arg2 requestDetails:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)takeModeAssertionWithDetails:(id)arg1 requestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)resolveBehaviorForEventDetails:(id)arg1 requestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)handleUpdatedScheduleSettings:(id)arg1;
- (void)handleUpdatedPhoneCallBypassSettings:(id)arg1;
- (void)handleUpdatedBehaviorSettings:(id)arg1;
- (void)handleModeAssertionUpdateResult:(id)arg1;
- (void)handleStateUpdate:(id)arg1;
- (void)invalidate;
- (void)resume;
- (void)dealloc;
- (id)initWithClientDetailsProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
