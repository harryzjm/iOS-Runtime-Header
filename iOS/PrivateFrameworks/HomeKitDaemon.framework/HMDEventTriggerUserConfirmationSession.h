//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDEventTriggerDevice, HMDEventTriggerExecutionSession, HMDTriggerConfirmationTimer, HomeKitEventTriggerUserConfirmationReceiverSessionEvent, NSMutableArray, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDEventTriggerUserConfirmationSession <HMFDumpState, HMFLogging, HMFTimerDelegate, HMFMessageReceiver>
{
    HMDEventTriggerExecutionSession *_executionSession;
    HMDEventTriggerDevice *_requestingDevice;
    HMDTriggerConfirmationTimer *_userResponseTimer;
    HomeKitEventTriggerUserConfirmationReceiverSessionEvent *_metricEvent;
    NSMutableArray *_metricSendEvents;
}

+ (id)logCategory;
@property(retain, nonatomic) NSMutableArray *metricSendEvents; // @synthesize metricSendEvents=_metricSendEvents;
@property(retain, nonatomic) HomeKitEventTriggerUserConfirmationReceiverSessionEvent *metricEvent; // @synthesize metricEvent=_metricEvent;
@property(retain, nonatomic) HMDTriggerConfirmationTimer *userResponseTimer; // @synthesize userResponseTimer=_userResponseTimer;
@property(readonly, nonatomic) HMDEventTriggerDevice *requestingDevice; // @synthesize requestingDevice=_requestingDevice;
@property(nonatomic) __weak HMDEventTriggerExecutionSession *executionSession; // @synthesize executionSession=_executionSession;
- (void).cxx_destruct;
- (void)_sessionComplete;
- (void)_handleUserPermissionRemoveDialogRequest:(id)arg1;
- (void)_removeUserDialog:(id)arg1;
- (void)_handleUserPermissionRemoteResponse:(id)arg1;
- (void)_userResponse:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)userDidConfirmExecute:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)timerDidFire:(id)arg1;
- (void)_createBulletinNotification;
- (void)createBulletinNotification;
- (void)_askForUserPermissionFromDevice:(id)arg1 executionSessionID:(id)arg2;
- (void)askForUserPermission:(id)arg1;
- (void)_registerForMessages;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 eventTrigger:(id)arg2 workQueue:(id)arg3 msgDispatcher:(id)arg4 requestingDevice:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end

