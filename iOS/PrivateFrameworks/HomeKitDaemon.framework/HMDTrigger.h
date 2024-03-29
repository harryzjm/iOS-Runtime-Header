//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, HMDTriggerPolicy, HMDUser, HMFMessageDispatcher, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDTrigger : HMFObject
{
    struct os_unfair_lock_s _lock;
    _Bool _active;
    NSString *_name;
    NSString *_configuredName;
    NSUUID *_uuid;
    HMDHome *_home;
    HMDUser *_owner;
    HMDTriggerPolicy *_policy;
    NSMutableDictionary *_actionSetMappings;
    NSMutableArray *_actionSetUUIDs;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    unsigned long long _triggerType;
    NSDate *_mostRecentFireDate;
}

+ (_Bool)hasMessageReceiverChildren;
+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *mostRecentFireDate; // @synthesize mostRecentFireDate=_mostRecentFireDate;
@property(nonatomic) unsigned long long triggerType; // @synthesize triggerType=_triggerType;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableArray *actionSetUUIDs; // @synthesize actionSetUUIDs=_actionSetUUIDs;
@property(retain, nonatomic) NSMutableDictionary *actionSetMappings; // @synthesize actionSetMappings=_actionSetMappings;
@property(retain, nonatomic) HMDTriggerPolicy *policy; // @synthesize policy=_policy;
@property(retain, nonatomic) HMDUser *owner; // @synthesize owner=_owner;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)_addActionSet:(id)arg1;
- (_Bool)supportsDeviceWithCapabilities:(id)arg1;
- (void)confirmResident;
- (id)updateEventTriggerMessage:(int)arg1 message:(id)arg2 relay:(_Bool)arg3;
- (id)emptyModelObject;
- (id)backingStoreObjects:(long long)arg1;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(id)arg2;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeCompleteWithError:(id)arg1;
- (_Bool)shouldEncodeLastFireDate:(id)arg1;
- (void)_handleTriggerUpdate:(id)arg1 message:(id)arg2;
- (void)_fillBaseObjectChangeModel:(id)arg1;
- (void)_registerForMessages;
- (void)userDidConfirmExecute:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_executeActionSets:(id)arg1 captureCurrentState:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_executeActionSetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleRemoveTriggerPolicyRequest:(id)arg1;
- (void)_handleUpdateTriggerPolicyRequest:(id)arg1;
- (void)_activateTriggerRequest:(id)arg1;
- (void)_handleActivateTriggerRequest:(id)arg1;
- (void)_actionSetsUpdated:(id)arg1 message:(id)arg2;
- (void)_updateActionSetRequest:(id)arg1 postUpdate:(_Bool)arg2;
- (void)_handleUpdateActionSetRequest:(id)arg1;
- (void)_handleRemoveTriggerOwnedActionSetRequest:(id)arg1 postUpdate:(_Bool)arg2;
- (void)_handleRemoveActionSetRequest:(id)arg1 postUpdate:(_Bool)arg2;
- (void)_handleAddTriggerOwnedActionSetRequest:(id)arg1;
- (void)_handleAddActionSetRequest:(id)arg1;
- (id)canRenameTriggerWithNewName:(id)arg1 configuredName:(id)arg2 error:(id *)arg3;
- (void)_renameRequest:(id)arg1;
- (void)_handleRenameRequest:(id)arg1;
- (void)_activate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)markChangedForMessage:(id)arg1 triggerModel:(id)arg2;
- (void)markChangedForMessage:(id)arg1;
- (_Bool)modelContainsTriggerFired:(id)arg1;
- (void)activateAfterResidentChangeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isConfigured) _Bool configured;
- (_Bool)shouldActivateOnLocalDevice;
@property(readonly, nonatomic, getter=isOwnedByThisDevice) _Bool ownedByThisDevice;
- (void)invalidate;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;
- (_Bool)isAssociatedWithAccessory:(id)arg1;
- (_Bool)_isTriggerFiredNotificationEntitled;
- (void)sendTriggerFiredNotification:(id)arg1;
- (void)_recentFireDateUpdated:(id)arg1;
- (void)triggerFired;
- (void)reEvaluate:(unsigned long long)arg1;
- (void)fixupForReplacementAccessory:(id)arg1 transaction:(id)arg2;
- (void)handleRemovalOfCharacteristic:(id)arg1 transaction:(id)arg2;
- (void)handleRemovalOfService:(id)arg1 transaction:(id)arg2;
- (void)handleRemovalOfAccessory:(id)arg1 transaction:(id)arg2;
- (void)removeActionSet:(id)arg1 postUpdate:(_Bool)arg2;
- (void)_forceEvaluate;
- (void)_checkForNoActions;
- (_Bool)hasNoActions;
- (void)setEnabled:(_Bool)arg1 message:(id)arg2;
- (_Bool)compatible:(id)arg1 user:(id)arg2;
@property(readonly, nonatomic) _Bool requiresDataVersion4;
@property(readonly, copy) NSArray *actionSets;
- (id)actionSetMapKeys;
- (void)removeAllActionSets;
- (void)removeActionSetForKey:(id)arg1;
- (id)actionSetForKey:(id)arg1;
- (void)setActionSetForKey:(id)arg1 value:(id)arg2;
@property(retain, nonatomic) NSString *configuredName; // @synthesize configuredName=_configuredName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)dumpState;
- (id)attributeDescriptions;
- (void)dealloc;
- (id)logIdentifier;
- (id)initWithModel:(id)arg1 home:(id)arg2;
- (id)initWithName:(id)arg1 uuid:(id)arg2;
@property(readonly, nonatomic) NSDictionary *bulletinContext;
@property(readonly, nonatomic) NSDictionary *actionContext;
@property(readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *contextID;
@property(readonly, copy) NSString *urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

