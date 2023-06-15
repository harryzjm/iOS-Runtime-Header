//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDEventTriggerExecutionSession, HMDEventTriggerUserConfirmationSession, HMDPredicateUtilities, HMFTimer, NSArray, NSMutableArray, NSPredicate, NSString;
@protocol HMDEventTriggerDependencyFactory;

__attribute__((visibility("hidden")))
@interface HMDEventTrigger
{
    struct os_unfair_lock_s _lock;
    id <HMDEventTriggerDependencyFactory> _dependencyFactory;
    _Bool _migratedEventsToRecords;
    _Bool _executeOnce;
    NSMutableArray *_currentEvents;
    HMFTimer *_debounceTriggerActivationTimer;
    NSPredicate *_evaluationCondition;
    NSArray *_recurrences;
    HMDPredicateUtilities *_predicateUtilities;
    HMDEventTriggerExecutionSession *_executionSession;
    HMDEventTriggerUserConfirmationSession *_userConfirmationSession;
    unsigned long long _activationType;
    unsigned long long _activationState;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)hasMessageReceiverChildren;
+ (_Bool)__validateRecurrences:(id)arg1;
+ (id)logCategory;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long activationState; // @synthesize activationState=_activationState;
@property(nonatomic) unsigned long long activationType; // @synthesize activationType=_activationType;
@property(retain, nonatomic) HMDEventTriggerUserConfirmationSession *userConfirmationSession; // @synthesize userConfirmationSession=_userConfirmationSession;
@property(retain, nonatomic) HMDEventTriggerExecutionSession *executionSession; // @synthesize executionSession=_executionSession;
@property(retain, nonatomic) HMDPredicateUtilities *predicateUtilities; // @synthesize predicateUtilities=_predicateUtilities;
@property(nonatomic) _Bool executeOnce; // @synthesize executeOnce=_executeOnce;
@property(readonly, nonatomic) NSArray *recurrences; // @synthesize recurrences=_recurrences;
@property(retain, nonatomic) NSPredicate *evaluationCondition; // @synthesize evaluationCondition=_evaluationCondition;
@property(retain, nonatomic) HMFTimer *debounceTriggerActivationTimer; // @synthesize debounceTriggerActivationTimer=_debounceTriggerActivationTimer;
@property(retain, nonatomic) NSMutableArray *currentEvents; // @synthesize currentEvents=_currentEvents;
@property(nonatomic) _Bool migratedEventsToRecords; // @synthesize migratedEventsToRecords=_migratedEventsToRecords;
- (_Bool)isOwnerOfHome;
- (_Bool)isAuthorizedForLocation;
- (_Bool)isThisDeviceDesignatedFMFDevice;
@property(readonly, nonatomic) _Bool containsRecurrences;
- (id)emptyModelObject;
- (id)backingStoreObjects:(long long)arg1;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (void)_handleEventTriggerUpdate:(id)arg1 message:(id)arg2;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)processEventRecords:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)messageReceiverChildren;
@property(readonly, nonatomic) _Bool hasUserConfirmationSession;
- (void)_handleUserPermissionRequest:(id)arg1;
- (void)_userDidConfirmExecute:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)userDidConfirmExecute:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_isTriggerFiredNotificationEntitled;
- (void)takeOverOwnershipOfTrigger;
- (void)_resetExecutionState;
- (void)resetExecutionState;
- (void)executionComplete:(id)arg1 error:(id)arg2;
- (id)didOccurEvent:(id)arg1 causingDevice:(id)arg2;
- (_Bool)isEventTriggerOnLocalDeviceForAccessory:(id)arg1;
- (_Bool)isEventTriggerOnRemoteGatewayForAccessory:(id)arg1;
- (void)_executeOnceUpdated:(id)arg1 message:(id)arg2;
- (void)_updateEventTriggerExecuteOnce:(id)arg1;
- (void)_handleUpdateEventTriggerExecuteOnce:(id)arg1;
- (void)_updateOwningDevice:(id)arg1;
- (void)_handleUpdateOwningDevice:(id)arg1;
- (void)_evaluationConditionUpdated:(id)arg1 message:(id)arg2;
- (void)_handleUpdateEventTriggerCondition:(id)arg1;
- (void)_eventTriggerRecurrencesUpdated:(id)arg1 message:(id)arg2;
- (void)_updateEventTriggerRecurrences:(id)arg1;
- (void)_handleUpdateEventTriggerRecurrences:(id)arg1;
- (_Bool)_populateTriggerModel:(id)arg1 fromBuilderMessage:(id)arg2 transaction:(id)arg3 responsePayload:(id)arg4;
- (_Bool)_validateUpdatingTriggerWithName:(id)arg1 uuid:(id)arg2 message:(id)arg3;
- (void)_handleUpdateEventTrigger:(id)arg1;
- (id)_updateEventsOnEventTrigger:(id)arg1;
- (void)_handleUpdateEventsOnEventTrigger:(id)arg1;
- (_Bool)checkSharedEventTriggerActivationResidentRequirement:(id)arg1;
- (_Bool)_checkAddEventModel:(id)arg1 message:(id)arg2;
- (_Bool)addEventsFromMessage:(id)arg1 preserveUUIDs:(_Bool)arg2 transaction:(id)arg3 error:(id *)arg4;
- (void)_handleRemoveEventModel:(id)arg1 message:(id)arg2;
- (void)_removeEventsFromEventTrigger:(id)arg1;
- (void)_handleRemoveEventsFromEventTrigger:(id)arg1;
- (void)_handleRemoveEventsFromEventTrigger:(id)arg1 relay:(_Bool)arg2;
- (void)_handleAddEventModel:(id)arg1 message:(id)arg2;
- (id)createEventModel:(id)arg1 endEvent:(_Bool)arg2 message:(id)arg3 checkForSupport:(_Bool)arg4 error:(id *)arg5;
- (void)_addEventToEventTrigger:(id)arg1;
- (void)_handleAddEventToEventTrigger:(id)arg1;
- (void)_handleLocationAuthorizationChangedNotification:(id)arg1;
- (void)fixupForReplacementAccessory:(id)arg1 transaction:(id)arg2;
- (id)_modelWithRewrittenCondition:(id)arg1;
- (void)handleRemovalOfUser:(id)arg1 transaction:(id)arg2;
- (void)_handleRemovalOfEvents:(id)arg1 transaction:(id)arg2;
- (void)_removeEvents:(id)arg1;
- (void)_handleRemovalOfCharacteristic:(id)arg1 withEvents:(id)arg2 transaction:(id)arg3;
- (void)handleRemovalOfCharacteristic:(id)arg1 transaction:(id)arg2;
- (void)handleRemovalOfService:(id)arg1 transaction:(id)arg2;
- (void)handleRemovalOfAccessory:(id)arg1 transaction:(id)arg2;
- (void)sendTriggerFiredNotification:(id)arg1;
- (_Bool)shouldEncodeLastFireDate:(id)arg1;
- (void)dealloc;
- (void)_registerForMessages;
- (void)_migrateEventsToRecords;
- (void)timerDidFire:(id)arg1;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;
- (void)_configureDebounceTriggerActivationTimer;
- (void)_reevaluateIfRelaunchRequired;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_activateEvents:(CDUnknownBlockType)arg1;
- (void)_computeActivation;
- (_Bool)doesTheLocationEventTargetCurrentUser;
@property(readonly, nonatomic) _Bool computedActive;
- (_Bool)shouldActivateOnLocalDevice;
- (_Bool)compatible:(id)arg1 user:(id)arg2;
- (_Bool)requiresDataVersion4;
- (void)invalidate;
@property(readonly, nonatomic) NSArray *presenceEvents;
@property(readonly, nonatomic) NSArray *charThresholdEvents;
@property(readonly, nonatomic) NSArray *durationEvents;
@property(readonly) NSArray *timeEvents;
@property(readonly, nonatomic) NSArray *significantTimeEvents;
@property(readonly, nonatomic) NSArray *calendarEvents;
@property(readonly, nonatomic) NSArray *locationEvents;
@property(readonly, nonatomic) NSArray *characteristicBaseEvents;
@property(readonly, nonatomic) NSArray *characteristicEvents;
@property(readonly, nonatomic) NSArray *endEvents;
@property(readonly, nonatomic) NSArray *triggerEvents;
- (void)removeEvent:(id)arg1;
- (void)addEvent:(id)arg1;
@property(readonly, nonatomic) NSArray *events;
- (unsigned long long)triggerType;
- (id)dumpState;
- (id)initWithModel:(id)arg1 home:(id)arg2;
- (id)initWithModel:(id)arg1 home:(id)arg2 message:(id)arg3;
- (id)initWithModel:(id)arg1 home:(id)arg2 message:(id)arg3 factory:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

