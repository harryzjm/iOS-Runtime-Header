//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

#import <CloudKitDaemon/CKDFlowControllable-Protocol.h>
#import <CloudKitDaemon/CKDURLRequestAuthRetryDelegate-Protocol.h>
#import <CloudKitDaemon/CKDURLRequestMetricsDelegate-Protocol.h>
#import <CloudKitDaemon/CKThrottlingCriteria-Protocol.h>

@class CKDClientContext, CKDClientProxy, CKDOperationMetrics, CKDURLRequest, CKOperationInfo, CKOperationMMCSRequestOptions, CKOperationMetrics, NSDate, NSError, NSMutableArray, NSMutableDictionary, NSNumber, NSObject, NSString;
@protocol CKOperationCallbacks, NSObject, OS_dispatch_group, OS_dispatch_queue, OS_os_activity;

@interface CKDOperation : NSOperation <CKDURLRequestMetricsDelegate, CKDURLRequestAuthRetryDelegate, CKThrottlingCriteria, CKDFlowControllable>
{
    unsigned long long _state;
    NSObject<OS_os_activity> *_osActivity;
    _Bool _isFinished;
    _Bool _isExecuting;
    _Bool _useEncryption;
    _Bool _useClearAssetEncryption;
    _Bool _isLongLivedCallbackRelayOperation;
    _Bool _shouldPipelineFetchAllChangesRequests;
    _Bool _didAttemptDugongKeyRoll;
    _Atomic int _pcsWaitCount;
    CKDURLRequest *_request;
    id <CKOperationCallbacks> _clientOperationCallbackProxy;
    NSDate *_startDate;
    CKDOperation *_parentOperation;
    CKDClientContext *_context;
    CKDClientProxy *_proxy;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSError *_error;
    CKDOperationMetrics *_cloudKitMetrics;
    CKDOperationMetrics *_MMCSMetrics;
    NSDate *_metricExecuteStartDate;
    CDUnknownBlockType _requestCompletedBlock;
    CKOperationInfo *_operationInfo;
    NSObject<OS_dispatch_group> *_stateTransitionGroup;
    NSMutableArray *_requestUUIDs;
    NSMutableArray *_childOperations;
    NSMutableArray *_finishedChildOperationIDs;
    id <NSObject> _powerAssertion;
    NSObject<OS_dispatch_group> *_childOperationsGroup;
    NSString *_clientSuppliedDeviceIdentifier;
}

+ (long long)isPredominatelyDownload;
+ (id)_globalOperationCallbackQueueForQOS:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool didAttemptDugongKeyRoll; // @synthesize didAttemptDugongKeyRoll=_didAttemptDugongKeyRoll;
@property(nonatomic) _Atomic int pcsWaitCount; // @synthesize pcsWaitCount=_pcsWaitCount;
@property(retain, nonatomic) NSString *clientSuppliedDeviceIdentifier; // @synthesize clientSuppliedDeviceIdentifier=_clientSuppliedDeviceIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *childOperationsGroup; // @synthesize childOperationsGroup=_childOperationsGroup;
@property(retain, nonatomic) id <NSObject> powerAssertion; // @synthesize powerAssertion=_powerAssertion;
@property(retain, nonatomic) NSMutableArray *finishedChildOperationIDs; // @synthesize finishedChildOperationIDs=_finishedChildOperationIDs;
@property(retain, nonatomic) NSMutableArray *childOperations; // @synthesize childOperations=_childOperations;
@property(retain, nonatomic) NSMutableArray *requestUUIDs; // @synthesize requestUUIDs=_requestUUIDs;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *stateTransitionGroup; // @synthesize stateTransitionGroup=_stateTransitionGroup;
@property(retain, nonatomic) CKOperationInfo *operationInfo; // @synthesize operationInfo=_operationInfo;
@property(copy, nonatomic) CDUnknownBlockType requestCompletedBlock; // @synthesize requestCompletedBlock=_requestCompletedBlock;
@property(retain, nonatomic) NSDate *metricExecuteStartDate; // @synthesize metricExecuteStartDate=_metricExecuteStartDate;
@property(retain, nonatomic) CKDOperationMetrics *MMCSMetrics; // @synthesize MMCSMetrics=_MMCSMetrics;
@property(retain, nonatomic) CKDOperationMetrics *cloudKitMetrics; // @synthesize cloudKitMetrics=_cloudKitMetrics;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) _Bool shouldPipelineFetchAllChangesRequests; // @synthesize shouldPipelineFetchAllChangesRequests=_shouldPipelineFetchAllChangesRequests;
@property(readonly, nonatomic) _Bool isLongLivedCallbackRelayOperation; // @synthesize isLongLivedCallbackRelayOperation=_isLongLivedCallbackRelayOperation;
@property(nonatomic) _Bool useClearAssetEncryption; // @synthesize useClearAssetEncryption=_useClearAssetEncryption;
@property(nonatomic) _Bool useEncryption; // @synthesize useEncryption=_useEncryption;
@property(nonatomic) __weak CKDClientProxy *proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) CKDClientContext *context; // @synthesize context=_context;
@property(nonatomic) __weak CKDOperation *parentOperation; // @synthesize parentOperation=_parentOperation;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
- (int)operationType;
- (id)analyticsPayload;
- (id)dugongKeyRollAnalyticsPayloadWithError:(id)arg1;
- (id)baseOperationAndErrorInfoCoreAnalyticsPayloadWithError:(id)arg1;
- (void)sendCoreAnalyticsEventOperationFinished;
- (_Bool)isNetworkingBehaviorEquivalentForOperation:(id)arg1;
- (id)statusReportWithIndent:(unsigned long long)arg1;
- (id)CKStatusReportLogGroups;
- (id)CKStatusReportProperties;
- (id)_startDateString;
- (id)_runDurationString;
@property(readonly, nonatomic) CKOperationMetrics *operationMetrics;
- (void)requestDidEndWaitingForUserAuth:(id)arg1;
- (void)requestDidBeginWaitingForUserAuth:(id)arg1;
- (void)request:(id)arg1 didFinishWithMetrics:(id)arg2 w3cNavigationTiming:(id)arg3;
- (void)configureRequest:(id)arg1;
@property(retain, nonatomic) CKDURLRequest *request; // @synthesize request=_request;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) id <CKOperationCallbacks> clientOperationCallbackProxy; // @synthesize clientOperationCallbackProxy=_clientOperationCallbackProxy;
@property(readonly, nonatomic) _Bool expectDelayBeforeRequestBegins;
@property(readonly, nonatomic) _Bool usesBackgroundSession;
- (_Bool)isConcurrent;
- (void)setQualityOfService:(long long)arg1;
- (void)configureQualityOfServiceFromOperationInfo:(id)arg1;
@property(readonly, nonatomic) unsigned int QOSClass;
@property(readonly, nonatomic) NSString *flowControlKey;
@property(readonly, nonatomic) _Bool shouldCheckAppVersion;
- (void)_setIsExecuting:(_Bool)arg1;
- (void)_setIsFinished:(_Bool)arg1;
- (_Bool)isWaitingOnPCS;
- (void)noteOperationDidFinishWaitingOnPCS;
- (void)noteOperationWillWaitOnPCS;
- (void)_acquirePowerAssertionsForSelfAndParent;
- (void)_acquirePowerAssertion;
- (void)_dropPowerAssertionsForSelfAndParent;
- (void)_dropPowerAssertion;
- (_Bool)_errorShouldImpactFlowControl:(id)arg1;
- (id)nameForState:(unsigned long long)arg1;
- (void)makeStateTransition:(_Bool)arg1;
- (_Bool)makeStateTransition;
@property(nonatomic) unsigned long long state;
- (void)cancel;
- (_Bool)isTopLevelDaemonOperation;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)_finishInternalOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_reallyStart;
- (void)start;
- (_Bool)operationShouldBeFlowControlled;
- (void)_determineNetworkServiceType;
@property(readonly, nonatomic) unsigned long long networkServiceType;
- (_Bool)_checkAppVersion;
- (void)_registerAttemptForOperation;
- (void)_continueOperationStart;
@property(readonly, nonatomic) __weak CKDOperation *topmostParentOperation;
- (void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 operationConfigurationBlock:(CDUnknownBlockType)arg3;
- (void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 operationConfigurationBlock:(CDUnknownBlockType)arg4;
- (void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 clientContext:(id)arg4 operationConfigurationBlock:(CDUnknownBlockType)arg5;
- (void)combineMetricsWithOperation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)ckShortDescription;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)_stateFlags;
@property(readonly, nonatomic) NSNumber *operationGroupQuantityNumber;
@property(readonly, nonatomic) NSString *operationGroupName;
@property(readonly, nonatomic) NSString *operationGroupID;
@property(readonly, nonatomic) NSNumber *cacheDeleteAvailableSpaceClass;
@property(readonly, nonatomic) _Bool isCloudKitSupportOperation;
- (id)additionalRequestHTTPHeaders;
@property(readonly, nonatomic) double timeoutIntervalForResource;
@property(readonly, nonatomic) double timeoutIntervalForRequest;
@property(readonly, nonatomic) _Bool allowsBackgroundNetworking;
@property(readonly, nonatomic) _Bool preferAnonymousRequests;
@property(readonly, nonatomic) unsigned long long systemScheduler;
@property(readonly, nonatomic) unsigned long long discretionaryWhenBackgroundedState;
@property(readonly, nonatomic) unsigned long long duetPreClearedMode;
- (unsigned long long)discretionaryNetworkBehavior;
@property(readonly, nonatomic) _Bool automaticallyRetryNetworkFailures;
@property(readonly, nonatomic) NSString *authPromptReason;
@property(readonly, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
- (_Bool)checkAndClearUnitTestOverrides:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *unitTestOverrides;
@property(readonly, nonatomic) CKOperationMMCSRequestOptions *MMCSRequestOptions;
@property(readonly, nonatomic) _Bool isLongLived;
@property(readonly, nonatomic) NSString *operationID;
- (id)containerID;
@property(readonly, nonatomic) unsigned long long resolvedDiscretionaryNetworkBehavior;
@property(readonly, nonatomic) _Bool resolvedAutomaticallyRetryNetworkFailures;
@property(readonly, nonatomic) _Bool allowsPowerNapScheduling;
@property(readonly, nonatomic) NSString *applicationBundleIdentifierForNetworkAttribution;
@property(readonly, nonatomic) NSString *applicationBundleIdentifierForContainerAccess;
@property(readonly, nonatomic) _Bool allowsCellularAccess;
@property(readonly, nonatomic) NSString *deviceIdentifier;
- (id)createInactiveConcurrentQueue;
- (id)createConcurrentQueue;
- (id)createInactiveSerialQueue;
- (id)createSerialQueue;
- (void)dealloc;
- (void)_ensureOperationGroup;
- (id)activityCreate;
@property(readonly, nonatomic) NSObject<OS_os_activity> *osActivity;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
