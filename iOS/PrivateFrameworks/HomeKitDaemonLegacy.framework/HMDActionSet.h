//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDActionSetEvent, HMDApplicationData, HMDHome, HMFMessage, HMFMessageDispatcher, HMFTimer, NSArray, NSDate, NSDictionary, NSMutableArray, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDActionSet : HMFObject
{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_currentActions;
    NSString *_name;
    NSString *_type;
    NSUUID *_uuid;
    NSUUID *_spiClientIdentifier;
    HMDHome *_home;
    NSDate *_lastExecutionDate;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    HMFTimer *_executionTimeout;
    NSDate *_executionStart;
    HMFMessage *_executionMessage;
    NSDictionary *_executionInitialStates;
    HMDActionSetEvent *_executionActionSetEvent;
    HMDApplicationData *_appData;
}

+ (id)logCategory;
+ (_Bool)hasMessageReceiverChildren;
+ (id)allowedActionClasses;
+ (_Bool)supportsSecureCoding;
+ (_Bool)isBuiltinActionSetType:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
@property(retain, nonatomic) HMDActionSetEvent *executionActionSetEvent; // @synthesize executionActionSetEvent=_executionActionSetEvent;
@property(retain, nonatomic) NSDictionary *executionInitialStates; // @synthesize executionInitialStates=_executionInitialStates;
@property(retain, nonatomic) HMFMessage *executionMessage; // @synthesize executionMessage=_executionMessage;
@property(retain, nonatomic) NSDate *executionStart; // @synthesize executionStart=_executionStart;
@property(retain, nonatomic) HMFTimer *executionTimeout; // @synthesize executionTimeout=_executionTimeout;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSDate *lastExecutionDate; // @synthesize lastExecutionDate=_lastExecutionDate;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, copy) NSUUID *spiClientIdentifier; // @synthesize spiClientIdentifier=_spiClientIdentifier;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (id)logIdentifier;
- (id)backingStoreObjects:(long long)arg1;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (void)_processActionSetModelUpdated:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_executeGenericActions:(id)arg1 source:(unsigned long long)arg2 clientName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_executeMediaPlaybackActions:(id)arg1 source:(unsigned long long)arg2 clientName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_issueReadRequests;
- (id)_executeGenericActions:(id)arg1 message:(id)arg2;
- (id)_executeNaturalLightingWriteRequests:(id)arg1 message:(id)arg2 naturalLightingActions:(id)arg3 naturalLightingActionResultByActionUUID:(id)arg4;
- (id)_executeNaturalLightingActions:(id)arg1 writeRequests:(id)arg2 message:(id)arg3;
- (id)_executeMediaPlaybackActions:(id)arg1 message:(id)arg2;
- (id)_executeCharacteristicWriteRequests:(id)arg1 message:(id)arg2;
- (void)_issueWriteRequests:(id)arg1;
- (id)_createActionExecutionLogEvent:(id)arg1;
- (void)_execute:(id)arg1 captureCurrentState:(_Bool)arg2 writeRequestTuples:(id)arg3;
- (void)timerDidFire:(id)arg1;
- (void)handleExecutionCompletedWithOverallError:(id)arg1 response:(id)arg2;
- (id)_generateOverallError:(id)arg1 forSource:(unsigned long long)arg2;
- (_Bool)isAssociatedWithAccessory:(id)arg1;
@property(readonly, copy) NSArray *associatedAccessories;
- (void)_handleRemoveAppDataModel:(id)arg1 message:(id)arg2;
- (void)_handleUpdateAppDataModel:(id)arg1 message:(id)arg2;
- (void)_handleUpdateActionRequest:(id)arg1;
- (void)_updateNaturalLightingAction:(id)arg1 forMessage:(id)arg2;
- (void)_updatePlaybackAction:(id)arg1 forMessage:(id)arg2;
- (void)_updateWriteAction:(id)arg1 forMessage:(id)arg2;
- (_Bool)_handleRenameActionSetTransaction:(id)arg1 message:(id)arg2;
- (void)_handleRenameRequest:(id)arg1;
- (void)_removeDonatedIntent;
- (void)_handleRemoveActionTransaction:(id)arg1 message:(id)arg2;
- (void)_handleRemovalOfActions:(id)arg1 transaction:(id)arg2;
- (void)_handleRemovalOfAction:(id)arg1 transaction:(id)arg2;
- (void)_handleRemoveActionRequest:(id)arg1;
- (void)_removeAction:(id)arg1 message:(id)arg2;
- (void)_handleAddLightProfileNaturalLightingActionTransaction:(id)arg1 message:(id)arg2;
- (void)_handleAddShortcutActionTransaction:(id)arg1 message:(id)arg2;
- (void)_handleAddMediaPlaybackActionTransaction:(id)arg1 message:(id)arg2;
- (void)_handleAddCharacteristicWriteActionTransaction:(id)arg1 message:(id)arg2;
- (void)sendNotificationWithAction:(id)arg1 message:(id)arg2;
- (void)_handleAddNewAction:(id)arg1 message:(id)arg2;
- (void)_handleUpdateActionSetFromBuilder:(id)arg1;
- (void)_handleUpdateActionSet:(id)arg1;
- (id)_addLightProfileNaturalLightingModelWithUUID:(id)arg1 message:(id)arg2;
- (id)_addMediaPlaybackActionModelWithUUID:(id)arg1 message:(id)arg2;
- (id)_addCharacteristicWriteActionModelWithUUID:(id)arg1 message:(id)arg2;
- (void)_handleAddActionRequest:(id)arg1;
- (void)_registerForMessages;
- (id)actionWithUUID:(id)arg1;
- (void)invalidate;
- (void)handleRemovalOfAccessory:(id)arg1 transaction:(id)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_isValidCharacteristicWriteAction:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool containsShortcutActions;
@property(readonly, nonatomic) _Bool containsMediaPlaybackActions;
- (_Bool)containsUnsecuringAction;
- (_Bool)containsSecureCharacteristic;
- (_Bool)_fixupActions;
@property(readonly, nonatomic) NSString *serializedIdentifier;
@property(copy, nonatomic) NSArray *actions;
- (void)removeAllActions;
- (void)removeAction:(id)arg1;
- (void)addAction:(id)arg1;
- (void)__handleActionsUpdated;
- (_Bool)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;
- (void)handleRemovalOfActionForCharacteristic:(id)arg1 transaction:(id)arg2;
- (void)handleRemovalOfService:(id)arg1 transaction:(id)arg2;
- (void)executeWithTriggerSource:(id)arg1 captureCurrentState:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_execute:(id)arg1 activity:(id)arg2;
- (void)execute:(id)arg1;
- (void)isAccessValidForExecutionWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)createPayload;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)dumpState;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithName:(id)arg1 uuid:(id)arg2 type:(id)arg3 home:(id)arg4 queue:(id)arg5;
- (id)_getActionsForActionSetObject;
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

