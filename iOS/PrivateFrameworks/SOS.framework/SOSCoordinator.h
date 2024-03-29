//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSHashTable, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, SOSCoreAnalyticsReporting;

__attribute__((visibility("hidden")))
@interface SOSCoordinator : NSObject
{
    IDSService *_idsService;
    NSMutableArray *_processingEventUUIDs;
    NSObject<OS_dispatch_semaphore> *_eventProcessingSemaphore;
    NSObject<OS_dispatch_queue> *_eventUUIDArrayQueue;
    NSObject<OS_dispatch_queue> *_pendingMessagesQueue;
    NSMutableDictionary *_pendingMessagesById;
    NSMutableDictionary *_pendingMessageRetriesById;
    _Bool _ackSuccess;
    NSHashTable *_observers;
    id <SOSCoreAnalyticsReporting> _coreAnalyticsReporter;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SOSCoreAnalyticsReporting> coreAnalyticsReporter; // @synthesize coreAnalyticsReporter=_coreAnalyticsReporter;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
- (void)reportHandoff:(long long)arg1 result:(long long)arg2;
- (long long)sourceDevice;
- (void)_updateStateForPairedDevice:(id)arg1;
- (void)_handleServiceUpdate:(id)arg1;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (_Bool)isPairedDeviceNearby;
- (long long)SOSCoordinationMessageTypeForString:(id)arg1;
- (id)effectivePairedDevice;
- (void)sendAckToHandoffMessage:(id)arg1 success:(_Bool)arg2;
- (_Bool)shouldRetryMessage:(id)arg1;
- (_Bool)_sendUrgentMessageToPairedDevice:(id)arg1 retries:(id)arg2;
- (_Bool)sendUrgentMessageToPairedDevice:(id)arg1;
- (void)sendUpdateToObserversWithStatus:(id)arg1 progression:(long long)arg2 shouldHandleThirdParty:(_Bool)arg3;
- (void)handleSOSMessageTypeProgressionSync:(id)arg1;
- (void)handleSOSMessageTypeHandoffSOS:(id)arg1;
- (void)handleSOSMessageTypeHandoffSOSAck:(id)arg1;
- (_Bool)isIncomingMessageValidHandoffAck:(id)arg1;
- (_Bool)isIncomingMessageValidSOSHandoff:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;
- (void)syncProgressionWithPairedDevice:(long long)arg1 sosStatus:(id)arg2;
- (_Bool)processEventWithUUID:(id)arg1 triggerMechanism:(long long)arg2;
- (_Bool)tryPushToPairedDeviceWithUUID:(id)arg1 triggerMechanism:(long long)arg2;
- (_Bool)shouldHandoffToPairedDevice:(long long)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

