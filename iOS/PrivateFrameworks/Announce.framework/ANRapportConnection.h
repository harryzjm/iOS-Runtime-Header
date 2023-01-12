//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Announce/ANRapportConnectionProvider-Protocol.h>

@class NSArray, NSDate, NSMapTable, NSMutableDictionary, NSString, RPCompanionLinkClient, RPCompanionLinkDevice;
@protocol ANRapportConnectionDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ANRapportConnection : NSObject <ANRapportConnectionProvider>
{
    _Bool _isTimerSuspended;
    id <ANRapportConnectionDelegate> _delegate;
    RPCompanionLinkClient *_companionLinkClient;
    NSObject<OS_dispatch_queue> *_rapportQueue;
    NSMutableDictionary *_clients;
    NSArray *_activeDevices;
    NSDate *_lastScanStartTimestamp;
    NSMapTable *_deviceDelegatesToQueues;
    NSObject<OS_dispatch_source> *_timer;
}

+ (id)sharedConnection;
- (void).cxx_destruct;
@property(nonatomic) _Bool isTimerSuspended; // @synthesize isTimerSuspended=_isTimerSuspended;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSMapTable *deviceDelegatesToQueues; // @synthesize deviceDelegatesToQueues=_deviceDelegatesToQueues;
@property(retain) NSDate *lastScanStartTimestamp; // @synthesize lastScanStartTimestamp=_lastScanStartTimestamp;
@property(retain) NSArray *activeDevices; // @synthesize activeDevices=_activeDevices;
@property(retain) NSMutableDictionary *clients; // @synthesize clients=_clients;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *rapportQueue; // @synthesize rapportQueue=_rapportQueue;
@property(retain, nonatomic) RPCompanionLinkClient *companionLinkClient; // @synthesize companionLinkClient=_companionLinkClient;
@property(nonatomic) __weak id <ANRapportConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_cancelTimer;
- (void)_handleTimerExpired;
- (void)_startTimer;
- (_Bool)_needsScan;
- (double)_remainingScanTimeInterval;
- (void)_notifyDeviceDelegatesConnectionDidLoseDevice:(id)arg1;
- (void)_notifyDeviceDelegatesConnectionDidFindDevice:(id)arg1;
- (void)_executeBlockForDelegates:(CDUnknownBlockType)arg1;
- (void)_sendHomeLocationStatusRequestToDevice:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_sendDailyRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_sendMessage:(id)arg1 linkClient:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_decrementMessageCountForCompanionLinkClient:(id)arg1;
- (void)_incrementMessageCountForCompanionLinkClient:(id)arg1;
- (void)_updateDevices;
- (void)_registerHomeLocationStatusRequestHandler;
- (void)_registerMessageRequestHandler;
- (void)_registerHandlers;
- (void)_tearDownLink;
- (void)_handleLinkInvalidation;
- (void)_linkForDevice:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_setupLink:(CDUnknownBlockType)arg1;
- (void)_simulateDeliveryFailureForMessage:(id)arg1;
- (void)sendHomeLocationStatusRequestToDevice:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)registerDailyRequest:(CDUnknownBlockType)arg1;
- (void)sendDailyRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)sendMessage:(id)arg1 device:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)addDeviceDelegate:(id)arg1 queue:(id)arg2;
- (void)deactivateLinkWithOptions:(unsigned long long)arg1;
- (void)activateLinkWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)activateLinkWithOptions:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *devices;
@property(readonly, nonatomic) RPCompanionLinkDevice *localDevice;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
