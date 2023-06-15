//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDEventTriggerExecutionSession, HMPresenceEventActivation, NSArray, NSDictionary, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDPresenceEvent
{
    struct os_unfair_lock_s _lock;
    _Bool _currentStatus;
    NSString *_presenceType;
    HMPresenceEventActivation *_activation;
    NSDictionary *_users;
    NSArray *_userUUIDs;
    HMDEventTriggerExecutionSession *_executionSession;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
- (void).cxx_destruct;
@property __weak HMDEventTriggerExecutionSession *executionSession; // @synthesize executionSession=_executionSession;
@property _Bool currentStatus; // @synthesize currentStatus=_currentStatus;
@property(copy) NSArray *userUUIDs; // @synthesize userUUIDs=_userUUIDs;
@property(copy) NSDictionary *users; // @synthesize users=_users;
@property(readonly, nonatomic) HMPresenceEventActivation *activation; // @synthesize activation=_activation;
@property(retain) NSString *presenceType; // @synthesize presenceType=_presenceType;
- (id)analyticsPresenceEventData;
- (id)analyticsTriggerEventData;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)_presenceTypeForClient;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_addUser:(id)arg1;
- (void)_removeAllUsers;
- (void)_updateUsers:(id)arg1 home:(id)arg2;
- (void)_handleUpdateRequest:(id)arg1;
- (_Bool)compatibleWithUser:(id)arg1;
- (_Bool)evaluateWithHomePresence:(id)arg1;
- (_Bool)_evaluateWithHomePresence:(id)arg1 presenceType:(id)arg2 users:(id)arg3;
- (_Bool)evaluateWithUserPresence:(id)arg1 presenceType:(id)arg2;
- (_Bool)evaluateWithHomePresenceUpdate:(id)arg1 presenceType:(id)arg2;
- (void)didEndExecutionSession:(id)arg1;
- (_Bool)isCompatibleWithEvent:(id)arg1;
- (void)_evaluatePresenceEventForHomePresenceUpdate:(id)arg1;
- (void)_handleHomePresenceUpdate:(id)arg1;
- (_Bool)_activate:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isActive;
- (void)_handlePrivilegeUpdate:(id)arg1;
- (void)_registerForMessages;
@property(readonly, nonatomic) unsigned long long activationGranularity;
- (id)thisUser;
- (id)emptyModelObject;
- (id)createClientPayload;
- (id)createDaemonPayload;
- (id)createPresenceEventPayload:(_Bool)arg1;
- (id)createPayload;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 delegate:(id)arg4;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithModel:(id)arg1 home:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end

