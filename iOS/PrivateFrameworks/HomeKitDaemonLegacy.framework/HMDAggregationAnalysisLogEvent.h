//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class HMDEventCountersManager, NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAggregationAnalysisLogEvent : HMMLogEvent
{
    _Bool _cloudSyncLastDecryptionFailed;
    _Bool _cloudSyncMaximumDelayReached;
    _Bool _v2ElectionCurrentDeviceInSecondaryCoordinationMesh;
    _Bool _activeDay;
    NSString *_dataSyncState;
    unsigned long long _processLaunchCount;
    unsigned long long _processJetsamCount;
    unsigned long long _processCrashCount;
    unsigned long long _jetsamReasonHighwaterCount;
    unsigned long long _jetsamReasonProcessLimitCount;
    unsigned long long _jetsamReasonOtherCount;
    unsigned long long _processMemoryPressureStateWarningCount;
    unsigned long long _processMemoryPressureStateCriticalCount;
    unsigned long long _sampledAverageProcessMemoryUsageMB;
    unsigned long long _sampledPeakProcessMemoryUsageMB;
    unsigned long long _remoteMessagesSentCount;
    unsigned long long _remoteMessagesReceivedCount;
    unsigned long long _txIDSMessagesCount;
    unsigned long long _rxIDSMessagesCount;
    unsigned long long _txIDSProxyMessagesCount;
    unsigned long long _rxIDSProxyMessagesCount;
    unsigned long long _txLoxyMessagesCount;
    unsigned long long _rxLoxyMessagesCount;
    unsigned long long _txRapportMessagesCount;
    unsigned long long _rxRapportMessagesCount;
    unsigned long long _txSecureMessagesCount;
    unsigned long long _rxSecureMessagesCount;
    unsigned long long _cloudSyncPushCount;
    unsigned long long _legacyCloudSyncPushCount;
    unsigned long long _cloudSyncFetchCount;
    unsigned long long _cloudSyncUploadCount;
    unsigned long long _cloudSyncUploadErrorCount;
    unsigned long long _homeDataBytesFetched;
    unsigned long long _homeDataBytesPushed;
    unsigned long long _legacyHomeDataBytesFetched;
    unsigned long long _legacyHomeDataBytesPushed;
    unsigned long long _cloudSyncDecryptionFailedCount;
    unsigned long long _cloudStoreCoreDataTransactionCount;
    unsigned long long _workingStoreCoreDataTransactionCount;
    unsigned long long _coreDataCloudKitImportCount;
    unsigned long long _coreDataCloudKitExportCount;
    unsigned long long _residentSyncFetchHomeDataRequestCount;
    unsigned long long _residentSyncHomeDataChangedNotificationCount;
    unsigned long long _generationCounterIncrementCount;
    unsigned long long _notifyXPCClientsHomeDataChangedCount;
    unsigned long long _numReadSiri;
    unsigned long long _numWriteSiri;
    unsigned long long _numReadFirstPartyApp;
    unsigned long long _numWriteFirstPartyApp;
    unsigned long long _numReadThirdPartyApp;
    unsigned long long _numWriteThirdPartyApp;
    unsigned long long _numReadInternalRequested;
    unsigned long long _numWriteInternalRequested;
    unsigned long long _numReadUnknownSource;
    unsigned long long _numWriteUnknownSource;
    unsigned long long _numReadWriteSuccessIP;
    unsigned long long _numReadWriteFailureIP;
    unsigned long long _numReadWriteSuccessBT;
    unsigned long long _numReadWriteFailureBT;
    unsigned long long _numReadWriteSuccessIDS;
    unsigned long long _numReadWriteFailureIDS;
    unsigned long long _averageLatencyIP;
    unsigned long long _averageLatencyBT;
    unsigned long long _averageLatencyIDS;
    unsigned long long _numAccessoriesAdded;
    unsigned long long _numScenesAdded;
    unsigned long long _numTriggersAdded;
    unsigned long long _numShortcutsAdded;
    unsigned long long _numScenesUserRun;
    unsigned long long _numShortcutsRun;
    unsigned long long _numTriggersFired;
    unsigned long long _hapIPInvalidationCount;
    unsigned long long _hapIPSentHTTPRequestsCount;
    unsigned long long _hapIPReceivedHTTPResponsesCount;
    unsigned long long _hapIPReceivedHTTPEventCount;
    unsigned long long _hapBTLEConnectionsCount;
    unsigned long long _hapBTLEConnectionPerReasonsCount;
    unsigned long long _hapBTLEDiscoveriesCount;
    unsigned long long _cameraStreamStartSuccessCount;
    unsigned long long _cameraStreamStartFailureCount;
    unsigned long long _fetchCameraClipVideoSegmentAssetCount;
    unsigned long long _acceptedXPCRequestsCount;
    unsigned long long _erroredXPCRequestsCount;
    unsigned long long _sentXPCNotificationsCount;
    unsigned long long _filteredXPCNotificationsCount;
    unsigned long long _cameraRecordingReachabilityChangedCount;
    unsigned long long _cameraRecordingReachabilityOfflineDuration;
    unsigned long long _homeHubReachabilityChangedCount;
    unsigned long long _ipAccessoryReachabilityChangedCount;
    unsigned long long _currentDeviceStartedLegacyElectionCount;
    unsigned long long _v2ElectionCoordinationMeshUpdateCount;
    unsigned long long _v2ElectionCoordinationMeshLeaderElectedCount;
    unsigned long long _v2ElectionCoordinationMeshLeaderChangedCount;
    unsigned long long _v2ElectionPrimaryResidentElectionRunCount;
    unsigned long long _v2ElectionPrimaryResidentChangedCount;
    long long _primaryResidentDurationMinutes;
    unsigned long long _bulletinNotificationsPostedCount;
    unsigned long long _activeDaysPerMonthCount;
    long long _countOfDaysSinceLastActive;
    HMDEventCountersManager *_eventCountersManager;
}

+ (_Bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMDEventCountersManager *eventCountersManager; // @synthesize eventCountersManager=_eventCountersManager;
@property long long countOfDaysSinceLastActive; // @synthesize countOfDaysSinceLastActive=_countOfDaysSinceLastActive;
@property unsigned long long activeDaysPerMonthCount; // @synthesize activeDaysPerMonthCount=_activeDaysPerMonthCount;
@property(getter=isActiveDay) _Bool activeDay; // @synthesize activeDay=_activeDay;
@property unsigned long long bulletinNotificationsPostedCount; // @synthesize bulletinNotificationsPostedCount=_bulletinNotificationsPostedCount;
@property long long primaryResidentDurationMinutes; // @synthesize primaryResidentDurationMinutes=_primaryResidentDurationMinutes;
@property _Bool v2ElectionCurrentDeviceInSecondaryCoordinationMesh; // @synthesize v2ElectionCurrentDeviceInSecondaryCoordinationMesh=_v2ElectionCurrentDeviceInSecondaryCoordinationMesh;
@property unsigned long long v2ElectionPrimaryResidentChangedCount; // @synthesize v2ElectionPrimaryResidentChangedCount=_v2ElectionPrimaryResidentChangedCount;
@property unsigned long long v2ElectionPrimaryResidentElectionRunCount; // @synthesize v2ElectionPrimaryResidentElectionRunCount=_v2ElectionPrimaryResidentElectionRunCount;
@property unsigned long long v2ElectionCoordinationMeshLeaderChangedCount; // @synthesize v2ElectionCoordinationMeshLeaderChangedCount=_v2ElectionCoordinationMeshLeaderChangedCount;
@property unsigned long long v2ElectionCoordinationMeshLeaderElectedCount; // @synthesize v2ElectionCoordinationMeshLeaderElectedCount=_v2ElectionCoordinationMeshLeaderElectedCount;
@property unsigned long long v2ElectionCoordinationMeshUpdateCount; // @synthesize v2ElectionCoordinationMeshUpdateCount=_v2ElectionCoordinationMeshUpdateCount;
@property unsigned long long currentDeviceStartedLegacyElectionCount; // @synthesize currentDeviceStartedLegacyElectionCount=_currentDeviceStartedLegacyElectionCount;
@property unsigned long long ipAccessoryReachabilityChangedCount; // @synthesize ipAccessoryReachabilityChangedCount=_ipAccessoryReachabilityChangedCount;
@property unsigned long long homeHubReachabilityChangedCount; // @synthesize homeHubReachabilityChangedCount=_homeHubReachabilityChangedCount;
@property unsigned long long cameraRecordingReachabilityOfflineDuration; // @synthesize cameraRecordingReachabilityOfflineDuration=_cameraRecordingReachabilityOfflineDuration;
@property unsigned long long cameraRecordingReachabilityChangedCount; // @synthesize cameraRecordingReachabilityChangedCount=_cameraRecordingReachabilityChangedCount;
@property unsigned long long filteredXPCNotificationsCount; // @synthesize filteredXPCNotificationsCount=_filteredXPCNotificationsCount;
@property unsigned long long sentXPCNotificationsCount; // @synthesize sentXPCNotificationsCount=_sentXPCNotificationsCount;
@property unsigned long long erroredXPCRequestsCount; // @synthesize erroredXPCRequestsCount=_erroredXPCRequestsCount;
@property unsigned long long acceptedXPCRequestsCount; // @synthesize acceptedXPCRequestsCount=_acceptedXPCRequestsCount;
@property unsigned long long fetchCameraClipVideoSegmentAssetCount; // @synthesize fetchCameraClipVideoSegmentAssetCount=_fetchCameraClipVideoSegmentAssetCount;
@property unsigned long long cameraStreamStartFailureCount; // @synthesize cameraStreamStartFailureCount=_cameraStreamStartFailureCount;
@property unsigned long long cameraStreamStartSuccessCount; // @synthesize cameraStreamStartSuccessCount=_cameraStreamStartSuccessCount;
@property unsigned long long hapBTLEDiscoveriesCount; // @synthesize hapBTLEDiscoveriesCount=_hapBTLEDiscoveriesCount;
@property unsigned long long hapBTLEConnectionPerReasonsCount; // @synthesize hapBTLEConnectionPerReasonsCount=_hapBTLEConnectionPerReasonsCount;
@property unsigned long long hapBTLEConnectionsCount; // @synthesize hapBTLEConnectionsCount=_hapBTLEConnectionsCount;
@property unsigned long long hapIPReceivedHTTPEventCount; // @synthesize hapIPReceivedHTTPEventCount=_hapIPReceivedHTTPEventCount;
@property unsigned long long hapIPReceivedHTTPResponsesCount; // @synthesize hapIPReceivedHTTPResponsesCount=_hapIPReceivedHTTPResponsesCount;
@property unsigned long long hapIPSentHTTPRequestsCount; // @synthesize hapIPSentHTTPRequestsCount=_hapIPSentHTTPRequestsCount;
@property unsigned long long hapIPInvalidationCount; // @synthesize hapIPInvalidationCount=_hapIPInvalidationCount;
@property unsigned long long numTriggersFired; // @synthesize numTriggersFired=_numTriggersFired;
@property unsigned long long numShortcutsRun; // @synthesize numShortcutsRun=_numShortcutsRun;
@property unsigned long long numScenesUserRun; // @synthesize numScenesUserRun=_numScenesUserRun;
@property unsigned long long numShortcutsAdded; // @synthesize numShortcutsAdded=_numShortcutsAdded;
@property unsigned long long numTriggersAdded; // @synthesize numTriggersAdded=_numTriggersAdded;
@property unsigned long long numScenesAdded; // @synthesize numScenesAdded=_numScenesAdded;
@property unsigned long long numAccessoriesAdded; // @synthesize numAccessoriesAdded=_numAccessoriesAdded;
@property unsigned long long averageLatencyIDS; // @synthesize averageLatencyIDS=_averageLatencyIDS;
@property unsigned long long averageLatencyBT; // @synthesize averageLatencyBT=_averageLatencyBT;
@property unsigned long long averageLatencyIP; // @synthesize averageLatencyIP=_averageLatencyIP;
@property unsigned long long numReadWriteFailureIDS; // @synthesize numReadWriteFailureIDS=_numReadWriteFailureIDS;
@property unsigned long long numReadWriteSuccessIDS; // @synthesize numReadWriteSuccessIDS=_numReadWriteSuccessIDS;
@property unsigned long long numReadWriteFailureBT; // @synthesize numReadWriteFailureBT=_numReadWriteFailureBT;
@property unsigned long long numReadWriteSuccessBT; // @synthesize numReadWriteSuccessBT=_numReadWriteSuccessBT;
@property unsigned long long numReadWriteFailureIP; // @synthesize numReadWriteFailureIP=_numReadWriteFailureIP;
@property unsigned long long numReadWriteSuccessIP; // @synthesize numReadWriteSuccessIP=_numReadWriteSuccessIP;
@property unsigned long long numWriteUnknownSource; // @synthesize numWriteUnknownSource=_numWriteUnknownSource;
@property unsigned long long numReadUnknownSource; // @synthesize numReadUnknownSource=_numReadUnknownSource;
@property unsigned long long numWriteInternalRequested; // @synthesize numWriteInternalRequested=_numWriteInternalRequested;
@property unsigned long long numReadInternalRequested; // @synthesize numReadInternalRequested=_numReadInternalRequested;
@property unsigned long long numWriteThirdPartyApp; // @synthesize numWriteThirdPartyApp=_numWriteThirdPartyApp;
@property unsigned long long numReadThirdPartyApp; // @synthesize numReadThirdPartyApp=_numReadThirdPartyApp;
@property unsigned long long numWriteFirstPartyApp; // @synthesize numWriteFirstPartyApp=_numWriteFirstPartyApp;
@property unsigned long long numReadFirstPartyApp; // @synthesize numReadFirstPartyApp=_numReadFirstPartyApp;
@property unsigned long long numWriteSiri; // @synthesize numWriteSiri=_numWriteSiri;
@property unsigned long long numReadSiri; // @synthesize numReadSiri=_numReadSiri;
@property unsigned long long notifyXPCClientsHomeDataChangedCount; // @synthesize notifyXPCClientsHomeDataChangedCount=_notifyXPCClientsHomeDataChangedCount;
@property unsigned long long generationCounterIncrementCount; // @synthesize generationCounterIncrementCount=_generationCounterIncrementCount;
@property unsigned long long residentSyncHomeDataChangedNotificationCount; // @synthesize residentSyncHomeDataChangedNotificationCount=_residentSyncHomeDataChangedNotificationCount;
@property unsigned long long residentSyncFetchHomeDataRequestCount; // @synthesize residentSyncFetchHomeDataRequestCount=_residentSyncFetchHomeDataRequestCount;
@property unsigned long long coreDataCloudKitExportCount; // @synthesize coreDataCloudKitExportCount=_coreDataCloudKitExportCount;
@property unsigned long long coreDataCloudKitImportCount; // @synthesize coreDataCloudKitImportCount=_coreDataCloudKitImportCount;
@property unsigned long long workingStoreCoreDataTransactionCount; // @synthesize workingStoreCoreDataTransactionCount=_workingStoreCoreDataTransactionCount;
@property unsigned long long cloudStoreCoreDataTransactionCount; // @synthesize cloudStoreCoreDataTransactionCount=_cloudStoreCoreDataTransactionCount;
@property _Bool cloudSyncMaximumDelayReached; // @synthesize cloudSyncMaximumDelayReached=_cloudSyncMaximumDelayReached;
@property _Bool cloudSyncLastDecryptionFailed; // @synthesize cloudSyncLastDecryptionFailed=_cloudSyncLastDecryptionFailed;
@property unsigned long long cloudSyncDecryptionFailedCount; // @synthesize cloudSyncDecryptionFailedCount=_cloudSyncDecryptionFailedCount;
@property unsigned long long legacyHomeDataBytesPushed; // @synthesize legacyHomeDataBytesPushed=_legacyHomeDataBytesPushed;
@property unsigned long long legacyHomeDataBytesFetched; // @synthesize legacyHomeDataBytesFetched=_legacyHomeDataBytesFetched;
@property unsigned long long homeDataBytesPushed; // @synthesize homeDataBytesPushed=_homeDataBytesPushed;
@property unsigned long long homeDataBytesFetched; // @synthesize homeDataBytesFetched=_homeDataBytesFetched;
@property unsigned long long cloudSyncUploadErrorCount; // @synthesize cloudSyncUploadErrorCount=_cloudSyncUploadErrorCount;
@property unsigned long long cloudSyncUploadCount; // @synthesize cloudSyncUploadCount=_cloudSyncUploadCount;
@property unsigned long long cloudSyncFetchCount; // @synthesize cloudSyncFetchCount=_cloudSyncFetchCount;
@property unsigned long long legacyCloudSyncPushCount; // @synthesize legacyCloudSyncPushCount=_legacyCloudSyncPushCount;
@property unsigned long long cloudSyncPushCount; // @synthesize cloudSyncPushCount=_cloudSyncPushCount;
@property unsigned long long rxSecureMessagesCount; // @synthesize rxSecureMessagesCount=_rxSecureMessagesCount;
@property unsigned long long txSecureMessagesCount; // @synthesize txSecureMessagesCount=_txSecureMessagesCount;
@property unsigned long long rxRapportMessagesCount; // @synthesize rxRapportMessagesCount=_rxRapportMessagesCount;
@property unsigned long long txRapportMessagesCount; // @synthesize txRapportMessagesCount=_txRapportMessagesCount;
@property unsigned long long rxLoxyMessagesCount; // @synthesize rxLoxyMessagesCount=_rxLoxyMessagesCount;
@property unsigned long long txLoxyMessagesCount; // @synthesize txLoxyMessagesCount=_txLoxyMessagesCount;
@property unsigned long long rxIDSProxyMessagesCount; // @synthesize rxIDSProxyMessagesCount=_rxIDSProxyMessagesCount;
@property unsigned long long txIDSProxyMessagesCount; // @synthesize txIDSProxyMessagesCount=_txIDSProxyMessagesCount;
@property unsigned long long rxIDSMessagesCount; // @synthesize rxIDSMessagesCount=_rxIDSMessagesCount;
@property unsigned long long txIDSMessagesCount; // @synthesize txIDSMessagesCount=_txIDSMessagesCount;
@property unsigned long long remoteMessagesReceivedCount; // @synthesize remoteMessagesReceivedCount=_remoteMessagesReceivedCount;
@property unsigned long long remoteMessagesSentCount; // @synthesize remoteMessagesSentCount=_remoteMessagesSentCount;
@property unsigned long long sampledPeakProcessMemoryUsageMB; // @synthesize sampledPeakProcessMemoryUsageMB=_sampledPeakProcessMemoryUsageMB;
@property unsigned long long sampledAverageProcessMemoryUsageMB; // @synthesize sampledAverageProcessMemoryUsageMB=_sampledAverageProcessMemoryUsageMB;
@property unsigned long long processMemoryPressureStateCriticalCount; // @synthesize processMemoryPressureStateCriticalCount=_processMemoryPressureStateCriticalCount;
@property unsigned long long processMemoryPressureStateWarningCount; // @synthesize processMemoryPressureStateWarningCount=_processMemoryPressureStateWarningCount;
@property unsigned long long jetsamReasonOtherCount; // @synthesize jetsamReasonOtherCount=_jetsamReasonOtherCount;
@property unsigned long long jetsamReasonProcessLimitCount; // @synthesize jetsamReasonProcessLimitCount=_jetsamReasonProcessLimitCount;
@property unsigned long long jetsamReasonHighwaterCount; // @synthesize jetsamReasonHighwaterCount=_jetsamReasonHighwaterCount;
@property unsigned long long processCrashCount; // @synthesize processCrashCount=_processCrashCount;
@property unsigned long long processJetsamCount; // @synthesize processJetsamCount=_processJetsamCount;
@property unsigned long long processLaunchCount; // @synthesize processLaunchCount=_processLaunchCount;
@property(copy, nonatomic) NSString *dataSyncState; // @synthesize dataSyncState=_dataSyncState;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, nonatomic) NSString *coreAnalyticsEventName;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

