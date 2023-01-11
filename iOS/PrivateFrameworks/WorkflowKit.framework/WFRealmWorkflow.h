//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFRecordStorage-Protocol.h>

@class NSArray, NSData, NSDate, NSNumber, NSSet, NSString, RLMArray, RLMLinkingObjects, WFRealmWorkflowIcon, WFRealmWorkflowQuarantine, WFWorkflowIcon, WFWorkflowQuarantine, WFWorkflowTrustedResources;
@protocol WFWorkflowInputClass, WFWorkflowType;

@interface WFRealmWorkflow <WFRecordStorage>
{
    _Bool _hiddenFromLibraryAndSync;
    _Bool _hiddenInComplication;
    _Bool _deleted;
    NSString *_workflowID;
    NSDate *_createdAt;
    NSDate *_modifiedAt;
    NSString *_name;
    NSString *_legacyName;
    WFRealmWorkflowIcon *_icon;
    WFRealmWorkflowQuarantine *_quarantine;
    WFWorkflowTrustedResources *_trustedResources;
    RLMArray<WFWorkflowType> *_workflowTypeContainers;
    RLMArray<WFWorkflowInputClass> *_inputClassContainers;
    long long _sortOrdering;
    NSString *_minimumClientVersion;
    NSData *_actionsData;
    NSData *_importQuestionsData;
    NSString *_workflowSubtitle;
    NSString *_actionsDescription;
    NSString *_associatedAppBundleIdentifier;
    NSString *_galleryIdentifier;
    NSString *_source;
    WFRealmWorkflow *_conflictOf;
    RLMLinkingObjects *_conflictingWorkflows;
    NSString *_lastSavedOnDeviceName;
    long long _lastSyncedHash;
    NSString *_lastMigratedClientVersion;
    long long _remoteQuarantineStatus;
    NSData *_cloudKitRecordMetadata;
    NSNumber *_location;
}

+ (id)linkingObjectsProperties;
+ (id)ignoredProperties;
+ (id)requiredProperties;
+ (id)defaultPropertyValues;
+ (id)primaryKey;
+ (id)className;
+ (id)recordPropertyMap;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *location; // @synthesize location=_location;
@property(copy) NSData *cloudKitRecordMetadata; // @synthesize cloudKitRecordMetadata=_cloudKitRecordMetadata;
@property long long remoteQuarantineStatus; // @synthesize remoteQuarantineStatus=_remoteQuarantineStatus;
@property(copy) NSString *lastMigratedClientVersion; // @synthesize lastMigratedClientVersion=_lastMigratedClientVersion;
@property _Bool deleted; // @synthesize deleted=_deleted;
@property long long lastSyncedHash; // @synthesize lastSyncedHash=_lastSyncedHash;
@property(copy) NSString *lastSavedOnDeviceName; // @synthesize lastSavedOnDeviceName=_lastSavedOnDeviceName;
@property(readonly) RLMLinkingObjects *conflictingWorkflows; // @synthesize conflictingWorkflows=_conflictingWorkflows;
@property(retain) WFRealmWorkflow *conflictOf; // @synthesize conflictOf=_conflictOf;
@property(copy) NSString *source; // @synthesize source=_source;
@property(copy) NSString *galleryIdentifier; // @synthesize galleryIdentifier=_galleryIdentifier;
@property(copy) NSString *associatedAppBundleIdentifier; // @synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier;
@property(copy) NSString *actionsDescription; // @synthesize actionsDescription=_actionsDescription;
@property(copy) NSString *workflowSubtitle; // @synthesize workflowSubtitle=_workflowSubtitle;
@property(copy) NSData *importQuestionsData; // @synthesize importQuestionsData=_importQuestionsData;
@property(copy) NSData *actionsData; // @synthesize actionsData=_actionsData;
@property(copy) NSString *minimumClientVersion; // @synthesize minimumClientVersion=_minimumClientVersion;
@property long long sortOrdering; // @synthesize sortOrdering=_sortOrdering;
@property(getter=isHiddenInComplication) _Bool hiddenInComplication; // @synthesize hiddenInComplication=_hiddenInComplication;
@property(retain) RLMArray<WFWorkflowInputClass> *inputClassContainers; // @synthesize inputClassContainers=_inputClassContainers;
@property(retain) RLMArray<WFWorkflowType> *workflowTypeContainers; // @synthesize workflowTypeContainers=_workflowTypeContainers;
@property(retain) WFWorkflowTrustedResources *trustedResources; // @synthesize trustedResources=_trustedResources;
@property _Bool hiddenFromLibraryAndSync; // @synthesize hiddenFromLibraryAndSync=_hiddenFromLibraryAndSync;
@property(retain) WFRealmWorkflowQuarantine *quarantine; // @synthesize quarantine=_quarantine;
@property(retain) WFRealmWorkflowIcon *icon; // @synthesize icon=_icon;
@property(copy) NSString *legacyName; // @synthesize legacyName=_legacyName;
@property(copy) NSString *name; // @synthesize name=_name;
@property(retain) NSDate *modifiedAt; // @synthesize modifiedAt=_modifiedAt;
@property(retain) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(copy) NSString *workflowID; // @synthesize workflowID=_workflowID;
@property(readonly, nonatomic, getter=isConflictOfOtherWorkflow) _Bool conflictOfOtherWorkflow;
@property(copy, nonatomic) NSSet *accessResourcePerWorkflowStates;
@property(copy, nonatomic) NSArray *importQuestions;
@property(copy, nonatomic) NSArray *actions;
@property(copy, nonatomic) NSArray *inputClasses;
@property(copy, nonatomic) NSArray *workflowTypes;
@property(retain, nonatomic) WFWorkflowQuarantine *workflowQuarantine;
@property(retain, nonatomic) WFWorkflowIcon *workflowIcon;
@property(readonly, nonatomic) unsigned long long estimatedSize;
- (id)descriptor;
- (id)identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
