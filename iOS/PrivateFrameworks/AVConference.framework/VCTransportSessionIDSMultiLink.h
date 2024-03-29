//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VCIDSSessionInfoSynchronizer;

__attribute__((visibility("hidden")))
@interface VCTransportSessionIDSMultiLink
{
    VCIDSSessionInfoSynchronizer *_sessionInfoSynchronizer;
    _Bool _isWiFiAssistActive;
    _Bool _oneToOneModeEnabled;
}

@property(readonly, nonatomic) VCIDSSessionInfoSynchronizer *sessionInfoSynchronizer; // @synthesize sessionInfoSynchronizer=_sessionInfoSynchronizer;
- (void)VCIDSSessionInfoSynchronizer:(void *)arg1 sendVCIDSSessionInfoRequest:(id)arg2;
- (void)logSignalStrength;
- (void)requestStatsWithOptions:(id)arg1;
- (void)setRemoteDeviceVersionIDS;
- (void)flushLinkProbingStatusWithOptions:(id)arg1;
- (void)queryProbingResultsWithOptions:(id)arg1;
- (void)stopActiveProbingWithOptions:(id)arg1;
- (void)startActiveProbingWithOptions:(id)arg1;
- (void)setOneToOneModeEnabled:(_Bool)arg1 isInitiator:(_Bool)arg2;
- (void)optIntoExistingSubscribedStreamsForConnection:(id)arg1;
- (void)optOutAllStreamsForConnection:(id)arg1;
- (void)resetParticipantGenerationCounter;
- (void)updateParticipantGenerationCounter:(unsigned char)arg1;
- (void)didLocalNetworkQualityChange:(_Bool)arg1 isLocalNetworkQualityBad:(_Bool)arg2 isRemoteNetworkQualityBad:(_Bool)arg3;
- (void)didMediaQualityDegrade:(_Bool)arg1;
- (void)didUpdatePreferredInterfaceForDuplication:(unsigned char)arg1 notifyPeer:(_Bool)arg2 enableDuplication:(_Bool)arg3 isMediaUnrecoverableSignal:(_Bool)arg4;
- (void)didEnableDuplication:(_Bool)arg1 activeConnection:(id)arg2;
- (void)discardConnection:(id)arg1;
- (void)connectionCallback:(id)arg1 isInitialConnection:(_Bool)arg2;
- (void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2 activeConnection:(id)arg3;
- (void)setDefaultLink:(id)arg1;
- (void)setWiFiAssist:(_Bool)arg1;
- (void)resetActiveConnection;
- (void)setQuickRelayServerProvider:(int)arg1;
- (void)handleProbingResponse:(id)arg1;
- (void)handleSessionInfoResponse:(id)arg1;
- (void)handleLinkDisconnectedWithInfo:(id)arg1;
- (void)handleLinkConnectedWithInfo:(id)arg1;
- (void)onStop;
- (int)onStart;
- (void)dealloc;
- (id)initWithCallID:(unsigned int)arg1 requireEncryptionInfo:(_Bool)arg2 reportingAgent:(id)arg3 notificationQueue:(id)arg4 isMultiwaySession:(_Bool)arg5 dataPath:(int)arg6;
- (id)initWithCallID:(unsigned int)arg1 requireEncryptionInfo:(_Bool)arg2 reportingAgent:(id)arg3 notificationQueue:(id)arg4 isMultiwaySession:(_Bool)arg5;
- (id)initWithCallID:(unsigned int)arg1 reportingAgent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

