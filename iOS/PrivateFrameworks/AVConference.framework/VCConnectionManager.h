//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector, NSMutableArray, NSMutableDictionary, NSString, VCConnectionHealthMonitor, VCConnectionSelector, VCCoreMotionManager, VCDuplicationHandler, VCLinkProbingHandler, VCStatsRecorder, VCWRMHandler, VCWifiAssistManager;
@protocol OS_dispatch_queue, VCConnectionManagerDelegate, VCConnectionProtocol;

__attribute__((visibility("hidden")))
@interface VCConnectionManager : NSObject
{
    struct tagVCConnectionManagerRealtimeInstanceVTable _vTable;
    _Bool _isStarted;
    unsigned int _callID;
    int _connectionSelectionVersion;
    int _relayServerProvider;
    struct _opaque_pthread_rwlock_t _stateRWlock;
    id <VCConnectionProtocol> _primaryConnection;
    id <VCConnectionProtocol> _secondaryConnection;
    id <VCConnectionProtocol> _connectionForDuplication;
    id <VCConnectionProtocol> _lastPrimaryConnectionInUse;
    NSMutableArray *_connectionArray;
    struct opaqueRTCReporting *_reportingAgent;
    _Bool _isInitialConnectionEstablished;
    unsigned long long _mediaExcessiveCellularTxBytes;
    unsigned long long _mediaExcessiveCellularRxBytes;
    unsigned long long _signalingExcessiveCellularTxBytes;
    unsigned long long _signalingExcessiveCellularRxBytes;
    unsigned long long _budgetConsumingCellularTxBytes;
    unsigned long long _budgetConsumingCellularRxBytes;
    unsigned long long _mediaCellularTxBytes;
    unsigned long long _mediaCellularRxBytes;
    unsigned long long _mediaWifiTxBytes;
    unsigned long long _mediaWifiRxBytes;
    id _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    CDUnknownFunctionPointerType _duplicationCallback;
    _Bool _enableDuplication;
    double _lastConnectionUnstableTime;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    void *_duplicationContext;
    _Bool _duplicationPending;
    _Bool _supportDuplication;
    unsigned char _preferredLocalInterfaceForDuplication;
    unsigned char _preferredRemoteInterfaceForDuplication;
    _Bool _isPrimaryLocalUsingCell;
    _Bool _isPreWarmStateEnabled;
    _Bool _remotePreWarmStateEnabled;
    VCWifiAssistManager *_vcWifiAssist;
    _Bool _hasAssertedCell;
    VCConnectionHealthMonitor *_connectionHealthMonitor;
    CDStruct_50492349 _localConnectionStats;
    CDStruct_50492349 _remoteConnectionStats;
    VCWRMHandler *_wrmHandler;
    VCDuplicationHandler *_duplicationHandler;
    VCConnectionSelector *_connectionSelector;
    double _noRemotePacketInterval;
    double _remoteNoRemotePacketInterval;
    double _lastDefaultCheckTime;
    double _lastTransitionToFECTime;
    _Bool _isAudioOnly;
    double _lastiRATCheckTime;
    double _iRATNotificationRequestTime;
    int _localWRMLinkTypeFromDefaults;
    _Bool _allowRequestForWRMNotification;
    _Bool _forceHandoverToCell;
    _Bool _disableRemoteInterfaceInference;
    CDUnknownFunctionPointerType _wrmStatusUpdateCallback;
    CDUnknownFunctionPointerType _wrmRequestNotificationCallback;
    void *_wrmCallbacksContext;
    VCStatsRecorder *_statsRecorder;
    _Bool _preferRelayOverP2PEnabled;
    _Bool _fastMediaDuplicationEnabled;
    _Bool _cellPrimaryInterfaceChangeEnabled;
    _Bool _duplicateImportantPktsEnabled;
    _Bool _lowNetworkModeEnabled;
    _Bool _duplicationEnhancementEnabled;
    CDStruct_155bd25f _connectionSelectionPolicy;
    int _localRATTypeOverride;
    int _localWRMAlertFromDefaults;
    unsigned int _realRATType;
    unsigned char _linkProbingCapabilityVersion;
    unsigned char _remoteLinkProbingCapabilityVersion;
    VCLinkProbingHandler *_linkProbingHandler;
    struct tagVCNWConnectionMonitor *_nwMonitor;
    int _mediaHealthStatisticsHandlerIndex;
    NSObject<OS_dispatch_queue> *_nwConnectionMonitorQueue;
    unsigned char _preferRelayOverP2PReason;
    struct tagVCNetworkConditionMonitor *_networkConditionMonitor;
    _Bool _enableNetworkConditionMonitoring;
    AVCStatisticsCollector *_statisticsCollector;
    VCCoreMotionManager *_coreMotionManager;
    _Bool _isNWConnectionMonitorEnabled;
    _Bool _ignoreNWConnectionMonitorNotification;
    NSString *_nwMonitorInterfaceName;
    CDStruct_c648a973 _lastNWStatistics;
    id <VCConnectionProtocol> _lastActivePrimaryConnection;
    NSMutableDictionary *_mediaDegradedHistories;
    NSMutableDictionary *_mediaDegradedHistoryIndices;
    NSMutableDictionary *_aggregateStallTimeDuration;
    _Bool _isDuplicationAllowed;
    _Bool _isDuplicationAllowedForMediaDegraded;
    int _endToEndConnectionStatisticsHandlerIndex;
    int _serverBasedConnectionStatisticsHandlerIndex;
    _Bool _isVideoExpected;
    _Bool _isOneToOneModeEnabled;
    _Bool _isPrimaryLinkUsable;
    _Bool _useMediaDrivenDuplication;
    _Bool _resetMediaHealthStats;
    int _wrmPendingBitrateCapDelta;
    _Bool _isWRMNotificationPending;
    CDStruct_cd8cfafa _savedWRMNotification;
    unsigned int _downlinkTargetBitrate;
    unsigned int _downlinkTargetCellBitrateCap;
    _Bool _useMediaDrivenDuplicationFeatureFlag;
    double _mediaDegradedThreshold;
    _Bool _enableCoreMotionDetection;
    _Bool _previousNoRemoteInProgress;
    long long _initialSentBytes;
    long long _initialReceivedBytes;
    _Bool _startConnectionHealthMonitoring;
    _Bool _isRemoteMediaQualityDegraded;
    _Bool _dropLinkRecommendation;
    unsigned char _linkPreferSuggestion;
    unsigned char _linkConfidenceScore;
    unsigned char _linkPreferDecision;
    _Bool _reportLinkPreferSuggestion;
    unsigned char _linkIPPreference;
    _Bool _useIDSLinkSuggestionFeatureFlag;
    NSObject<OS_dispatch_queue> *_reportingQueue;
    _Atomic unsigned int _sendSuccessCountSinceLastCheck;
    _Atomic unsigned int _sendFailureCountSinceLastCheck;
    _Atomic unsigned long long _onTheWireTotalBytesSentSinceLastCheck;
    _Atomic unsigned long long _onTheWireTotalBytesReceivedSinceLastCheck;
    _Bool _isOneToOneScreenEnabled;
    int _shouldForceRelayLinksWhenScreenEnabled;
    _Bool _canUseP2PLinks;
    _Bool _isRemoteNetworkQualityDegraded;
    double _brokenBackhaulDetectionTriggerThreshold;
    double _lastReceivedFeedbackTime;
    _Bool _brokenBackhaulDetectionStarted;
    _Bool _isUserMoving;
    _Bool _enableMotionBasedDuplication;
    _Bool _iRATDuplicationEnabled;
    _Bool _optIntoExistingSubscribedStreams;
    double _noRemoteDuplicationThresholdFast;
}

@property(nonatomic) _Bool isOneToOneScreenEnabled; // @synthesize isOneToOneScreenEnabled=_isOneToOneScreenEnabled;
@property _Bool optIntoExistingSubscribedStreams; // @synthesize optIntoExistingSubscribedStreams=_optIntoExistingSubscribedStreams;
@property(readonly) unsigned long long budgetConsumingCellularRxBytes; // @synthesize budgetConsumingCellularRxBytes=_budgetConsumingCellularRxBytes;
@property(readonly) unsigned long long budgetConsumingCellularTxBytes; // @synthesize budgetConsumingCellularTxBytes=_budgetConsumingCellularTxBytes;
@property(readonly) _Bool enableMotionBasedDuplication; // @synthesize enableMotionBasedDuplication=_enableMotionBasedDuplication;
@property(readonly) _Bool enableNetworkConditionMonitoring; // @synthesize enableNetworkConditionMonitoring=_enableNetworkConditionMonitoring;
@property(nonatomic) _Bool isRemoteNetworkQualityDegraded; // @synthesize isRemoteNetworkQualityDegraded=_isRemoteNetworkQualityDegraded;
@property(nonatomic) _Bool isRemoteMediaQualityDegraded; // @synthesize isRemoteMediaQualityDegraded=_isRemoteMediaQualityDegraded;
@property(nonatomic) _Bool startConnectionHealthMonitoring; // @synthesize startConnectionHealthMonitoring=_startConnectionHealthMonitoring;
@property(nonatomic) _Bool isOneToOneModeEnabled; // @synthesize isOneToOneModeEnabled=_isOneToOneModeEnabled;
@property(readonly, nonatomic) VCConnectionHealthMonitor *connectionHealthMonitor; // @synthesize connectionHealthMonitor=_connectionHealthMonitor;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property(nonatomic) unsigned char remoteLinkProbingCapabilityVersion; // @synthesize remoteLinkProbingCapabilityVersion=_remoteLinkProbingCapabilityVersion;
@property(readonly) unsigned char linkProbingCapabilityVersion; // @synthesize linkProbingCapabilityVersion=_linkProbingCapabilityVersion;
@property unsigned int realRATType; // @synthesize realRATType=_realRATType;
@property(nonatomic, setter=setiRATDuplicationEnabled:) _Bool iRATDuplicationEnabled; // @synthesize iRATDuplicationEnabled=_iRATDuplicationEnabled;
@property _Bool duplicationEnhancementEnabled; // @synthesize duplicationEnhancementEnabled=_duplicationEnhancementEnabled;
@property _Bool lowNetworkModeEnabled; // @synthesize lowNetworkModeEnabled=_lowNetworkModeEnabled;
@property double noRemoteDuplicationThresholdFast; // @synthesize noRemoteDuplicationThresholdFast=_noRemoteDuplicationThresholdFast;
@property _Bool duplicateImportantPktsEnabled; // @synthesize duplicateImportantPktsEnabled=_duplicateImportantPktsEnabled;
@property _Bool cellPrimaryInterfaceChangeEnabled; // @synthesize cellPrimaryInterfaceChangeEnabled=_cellPrimaryInterfaceChangeEnabled;
@property _Bool fastMediaDuplicationEnabled; // @synthesize fastMediaDuplicationEnabled=_fastMediaDuplicationEnabled;
@property(nonatomic, setter=setPreferRelayOverP2PEnabled:) _Bool preferRelayOverP2PEnabled; // @synthesize preferRelayOverP2PEnabled=_preferRelayOverP2PEnabled;
@property(nonatomic) _Bool remotePreWarmStateEnabled; // @synthesize remotePreWarmStateEnabled=_remotePreWarmStateEnabled;
@property(readonly) _Bool isPreWarmStateEnabled; // @synthesize isPreWarmStateEnabled=_isPreWarmStateEnabled;
@property(readonly, nonatomic) VCStatsRecorder *statsRecorder; // @synthesize statsRecorder=_statsRecorder;
@property(readonly) double remoteNoRemotePacketInterval; // @synthesize remoteNoRemotePacketInterval=_remoteNoRemotePacketInterval;
@property(readonly) double noRemotePacketInterval; // @synthesize noRemotePacketInterval=_noRemotePacketInterval;
@property _Bool isAudioOnly; // @synthesize isAudioOnly=_isAudioOnly;
@property(readonly) unsigned long long mediaWifiRxBytes; // @synthesize mediaWifiRxBytes=_mediaWifiRxBytes;
@property(readonly) unsigned long long mediaWifiTxBytes; // @synthesize mediaWifiTxBytes=_mediaWifiTxBytes;
@property(readonly) unsigned long long mediaCellularRxBytes; // @synthesize mediaCellularRxBytes=_mediaCellularRxBytes;
@property(readonly) unsigned long long mediaCellularTxBytes; // @synthesize mediaCellularTxBytes=_mediaCellularTxBytes;
@property(readonly) unsigned long long signalingExcessiveCellularRxBytes; // @synthesize signalingExcessiveCellularRxBytes=_signalingExcessiveCellularRxBytes;
@property(readonly) unsigned long long signalingExcessiveCellularTxBytes; // @synthesize signalingExcessiveCellularTxBytes=_signalingExcessiveCellularTxBytes;
@property(readonly) unsigned long long mediaExcessiveCellularRxBytes; // @synthesize mediaExcessiveCellularRxBytes=_mediaExcessiveCellularRxBytes;
@property(readonly) unsigned long long mediaExcessiveCellularTxBytes; // @synthesize mediaExcessiveCellularTxBytes=_mediaExcessiveCellularTxBytes;
@property(nonatomic) _Bool isDuplicationAllowed; // @synthesize isDuplicationAllowed=_isDuplicationAllowed;
@property _Bool supportDuplication; // @synthesize supportDuplication=_supportDuplication;
@property(retain, nonatomic) id <VCConnectionProtocol> connectionForDuplication; // @synthesize connectionForDuplication=_connectionForDuplication;
@property(retain, nonatomic) id <VCConnectionProtocol> lastPrimaryConnectionInUse; // @synthesize lastPrimaryConnectionInUse=_lastPrimaryConnectionInUse;
@property(retain, nonatomic) id <VCConnectionProtocol> secondaryConnection; // @synthesize secondaryConnection=_secondaryConnection;
@property unsigned char preferredRemoteInterfaceForDuplication; // @synthesize preferredRemoteInterfaceForDuplication=_preferredRemoteInterfaceForDuplication;
@property unsigned char preferredLocalInterfaceForDuplication; // @synthesize preferredLocalInterfaceForDuplication=_preferredLocalInterfaceForDuplication;
@property int relayServerProvider; // @synthesize relayServerProvider=_relayServerProvider;
@property unsigned int callID; // @synthesize callID=_callID;
- (void)didChangeWifiAssistAvailable:(_Bool)arg1 reason:(unsigned char)arg2;
- (void)updateConnectionSelectionPolicyWithPreferE2E:(_Bool)arg1;
- (CDStruct_155bd25f *)getConnectionSelectionPolicy;
- (void)flushLinkProbingStatusWithOptions:(id)arg1;
- (void)queryProbingResultsWithOptions:(id)arg1;
- (void)stopActiveProbingWithOptions:(id)arg1;
- (void)startActiveProbingWithOptions:(id)arg1;
- (void)reselectPrimaryConnection;
- (void)applyRemoteLinkFlags:(unsigned short)arg1 isCellular:(_Bool)arg2;
- (void)applyLinkFlags:(unsigned short)arg1 isCellular:(_Bool)arg2;
- (void)reportLinkSuggestion;
- (void)applyLinkRecommendation;
- (void)updateLinkPreferSuggestion:(id)arg1;
- (void)updateProbingResults:(id)arg1;
- (_Bool)shouldDropCurrentPrimaryConnectionWithConnectionStats:(CDStruct_50492349 *)arg1;
- (void)updateConnectionHealthWithVCStatisticsMessage:(struct tagVCStatisticsMessage)arg1;
- (void)updateConnectionStatsWithIndicatorPrimaryImproved:(CDStruct_50492349 *)arg1;
- (void)updateConnectionStatsWithIndicatorNone:(CDStruct_50492349 *)arg1;
- (void)updateConnectionStatsWithIndicatorOnlyPrimaryNoPacket:(CDStruct_50492349 *)arg1;
- (void)updateConnectionStatsWithIndicatorNoPacket:(CDStruct_50492349 *)arg1;
- (void)connectionHealthDidUpdate:(int)arg1 isLocalConnection:(_Bool)arg2;
- (void)reportNoPacketUpdateUsingCurrentTime:(double)arg1 lastReceivedPacketTime:(double)arg2;
- (void)updateDuplicationStateWithEventType:(unsigned char)arg1;
- (void)updateNegotiatedSettingsOnetoOne:(id)arg1;
- (void)reportLinkProbingStatsWithDuplicationJustStarted:(_Bool)arg1;
- (_Bool)shouldAcceptDataFromSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (void)updateAllBitrateCapsForConnection:(id)arg1;
- (void)updateOneToOneBitrateCapsForConnection:(id)arg1;
- (void)updateCellularTech:(int)arg1 forLocalInterface:(_Bool)arg2;
- (void)updateCellularMTU:(int)arg1;
- (int)removeConnection:(id)arg1;
- (int)addConnection:(id)arg1;
- (void)useConnectionAsPrimary:(id)arg1;
- (int)processConnectionHealthFromControlInfo:(void *)arg1;
- (int)setConnectionHealthOnControlInfo:(void *)arg1;
@property(readonly) double primaryConnHealthAllowedDelay;
- (void)setDefaultLinkProbingCapabilityVersionForDeviceRole:(int)arg1;
- (void)reportConnectionUpdateWithResponseCode:(unsigned short)arg1 delay:(double)arg2;
- (void)reportConnectionUpdateWithRespCode:(unsigned short)arg1;
- (void)reportConnection:(id)arg1 isInitialConnection:(_Bool)arg2;
@property(readonly) _Bool isLocalCellularInterfaceUsed;
- (void)updateWRMDuplicationForHandover;
- (_Bool)isOptimalConnection:(id)arg1 asPrimary:(_Bool)arg2 interfaceMask:(int)arg3;
- (_Bool)isBetterConnection:(id)arg1 asPrimary:(_Bool)arg2;
- (void)promoteSecondaryConnectionToPrimary:(id)arg1;
- (int)getConnectionSelectionVersionFromFrameworkVersion:(id)arg1;
- (void)disableRemotePreferredInterfaceInference:(_Bool)arg1;
- (void)destroyNWMonitorInternal;
- (void)destroyNWMonitor;
- (void)setVCNWConnectionMonitorStatisticsHandler;
- (void)renewNWMonitor;
- (void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2;
- (void)checkpointPrimaryConnection:(id)arg1;
- (void)stopBrokenNetworkDetection;
- (void)startBrokenNetworkDetection;
- (void)setupNetworkConditionMonitor;
- (void)configureNWConnectionMonitor:(id)arg1;
- (id)activeConnectionRegistry;
- (void)resetMediaHealthStats;
- (void)updateWithRemoteMediaHealthDuplication:(_Bool)arg1;
- (void)updateMediaDegradedHistoryWithCurrentAudioErasure:(double)arg1 idsParticipantID:(id)arg2;
- (void)updateMediaDegradedHistoryWithCurrentVideoStallDuration:(double)arg1 idsParticipantID:(id)arg2;
- (_Bool)isDuplicationAllowedForParticipantID:(id)arg1 bucketsToSum:(int)arg2 threshold:(double)arg3;
- (void)updateMediaDegradedHistoryWithValue:(double)arg1 idsParticipantID:(id)arg2;
- (void)updateMediaHealthStats:(CDStruct_6724876c *)arg1 idsParticipantID:(id)arg2;
- (void)checkMediaQualityDegradedForParticipantID:(id)arg1;
- (void)aggregateStallTimeDuration:(CDStruct_6724876c *)arg1 idsParticipantID:(id)arg2;
- (void)duplicationStateUpdateWithEvent:(CDStruct_9629e118)arg1;
- (void)removeMediaHealthStatsHistoryEntryForParticipantID:(id)arg1;
- (void)addMediaHealthStatsHistoryEntryForParticipantID:(id)arg1;
- (void)updateStatResponseResult:(id)arg1;
- (void)reportCurrentPrimaryConnection;
- (void)reportFirstActiveConnectionOneToOne:(id)arg1 remoteOSVersion:(id)arg2 redState:(_Bool)arg3 isAudioOnly:(_Bool)arg4;
- (void)reportActiveConnectionOneToOne:(id)arg1 isAudioOnly:(_Bool)arg2;
- (void)updateSessionStats:(unsigned short)arg1;
- (unsigned int)getByteCountWithIndex:(unsigned char)arg1 isOutgoing:(_Bool)arg2;
- (unsigned int)getPacketCountWithIndex:(unsigned char)arg1 isOutgoing:(_Bool)arg2;
- (_Bool)isConnectedOnRelayForActiveConnectionWithQuality:(int)arg1;
- (_Bool)isConnectedOnIPv6ForActiveConnectionWithQuality:(int)arg1;
- (int)getCellularMTUForActiveConnectionWithQuality:(int)arg1;
- (int)getCellularTechForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(_Bool)arg2;
- (int)getConnectionTypeForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(_Bool)arg2;
- (void)getSentBytes:(long long *)arg1 receivedBytes:(long long *)arg2;
@property(readonly) int connectionCount;
- (int)processRemoteWRMSuggestion:(int)arg1 isRemoteDuplicating:(_Bool)arg2;
- (void)processWRMCoexMetrics:(id)arg1;
- (void)checkForCachedWRMNotification;
- (void)setDuplicationDownlinkCellBitrateCap:(unsigned int)arg1 currentBitrate:(unsigned int)arg2;
- (int)setWRMUpdateCallback:(CDUnknownFunctionPointerType)arg1 requestNotificationCallback:(CDUnknownFunctionPointerType)arg2 withContext:(void *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)isDuplicationEnabled;
- (void)setConnectionPause:(_Bool)arg1 isLocalConnection:(_Bool)arg2;
- (void)setDuplicationCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;
- (_Bool)isBetterPrimaryConnectionAvailable;
- (void)checkAndUpdatePrimaryConnection;
- (void)setConnectionSelectionVersionWithLocalFrameworkVersion:(id)arg1 remoteFrameworkVersion:(id)arg2;
- (void)setReportingAgent:(struct opaqueRTCReporting *)arg1;
- (void)periodicTask:(void *)arg1;
- (void)deregisterPeriodicTask;
- (void)registerPeriodicTask;
@property id <VCConnectionManagerDelegate> delegate;
- (void)stop;
- (void)start;
@property(nonatomic) _Bool useMediaDrivenDuplication; // @synthesize useMediaDrivenDuplication=_useMediaDrivenDuplication;
- (void)resetConnectionStatTimers;
@property(readonly) _Atomic unsigned long long onTheWireTotalBytesSentSinceLastCheck; // @synthesize onTheWireTotalBytesSentSinceLastCheck=_onTheWireTotalBytesSentSinceLastCheck;
@property(readonly) _Atomic unsigned long long onTheWireTotalBytesReceivedSinceLastCheck; // @synthesize onTheWireTotalBytesReceivedSinceLastCheck=_onTheWireTotalBytesReceivedSinceLastCheck;
@property(readonly) unsigned int sendFailureCountSinceLastCheck;
@property(readonly) unsigned int sendSuccessCountSinceLastCheck;
- (void)setPreferRelayOverP2P:(_Bool)arg1 reason:(unsigned char)arg2;
- (void)setupConnectionHealthMonitor;
- (void)setupConnectionHealthMonitorMultiway;
- (void)unregisterStatisticsHandlers;
- (void)registerStatisticsHandlers;
- (void)dealloc;
- (id)init;
- (void)setUpVTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

