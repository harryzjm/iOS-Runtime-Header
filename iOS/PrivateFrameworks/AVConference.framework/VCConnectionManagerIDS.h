//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCBitrateArbiter, VCSessionBitrateArbiter;

__attribute__((visibility("hidden")))
@interface VCConnectionManagerIDS
{
    double _lastTimestampForRemoteSendingFromNonPrimary;
    double _lastTimestampPreferredRemoteInterfaceUpdated;
    unsigned int _sentPacketCount[256];
    unsigned int _sentByteCount[256];
    unsigned int _receivedPacketCount[256];
    unsigned int _receivedByteCount[256];
    VCSessionBitrateArbiter *_multiwayBitrateArbiter;
    VCBitrateArbiter *_oneToOneBitrateArbiter;
    _Bool _isMultiwaySession;
    _Bool _optIntoExistingSubscribedStreams;
}

- (_Bool)optIntoExistingSubscribedStreams;
- (void)setOptIntoExistingSubscribedStreams:(_Bool)arg1;
- (void)setLastPrimaryConnectionInUse:(id)arg1;
- (void)setConnectionForDuplication:(id)arg1;
- (void)setSecondaryConnection:(id)arg1;
- (void)setPrimaryConnection:(id)arg1;
- (id)lastPrimaryConnectionInUse;
- (id)connectionForDuplication;
- (id)secondaryConnection;
- (id)primaryConnection;
- (void)updateConnectionSelectionPolicyWithPreferE2E:(_Bool)arg1;
- (CDStruct_155bd25f *)getConnectionSelectionPolicy;
- (void)didLinkProbingLockdownEnd;
- (void)didUpdateLinkPreferenceOrder:(id)arg1;
- (void)flushLinkProbingStatusWithOptions:(id)arg1;
- (void)queryProbingResultsWithOptions:(id)arg1;
- (void)stopActiveProbingWithOptions:(id)arg1;
- (void)startActiveProbingWithOptions:(id)arg1;
- (_Bool)canOptOutAllStreamsForConnection:(id)arg1;
- (_Bool)shouldUpdateServerBasedConnection:(id)arg1;
- (_Bool)shouldDropCurrentPrimaryConnectionWithConnectionStats:(CDStruct_50492349 *)arg1;
- (void)useConnectionAsPrimary:(id)arg1;
- (void)reportConnection:(id)arg1 isInitialConnection:(_Bool)arg2;
- (void)sourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isSourceOnCellular:(_Bool *)arg2 isSourceIPv6:(_Bool *)arg3;
- (void)updateNegotiatedSettingsOnetoOne:(id)arg1;
- (void)updateDuplicationStateWithConnectionOperation:(int)arg1 isLocalOnWiFi:(_Bool)arg2 isRemoteOnWiFi:(_Bool)arg3;
- (void)removeFromConnectionArray:(id)arg1;
- (_Bool)addConnectionToConnectionArray:(id)arg1;
- (_Bool)shouldReplaceConnection:(id)arg1 withConnection:(id)arg2;
- (_Bool)shouldKeepAllConnections;
- (void)resetPacketCountAndByteCountWithConnection:(id)arg1;
- (void)addLinkProbingTelemetry:(id)arg1;
- (void)addDuplicationConnectionUpdateTelemetryWithSuggestedLinkTypeCombo:(id)arg1 payload:(id)arg2;
- (void)updateConnectionForDuplication;
- (void)updateSessionStats:(unsigned short)arg1;
- (id)copyConnectionWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isPrimary:(_Bool *)arg2;
- (_Bool)shouldAcceptDataFromSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (void)setPreferredRemoteInterfaceForDuplication:(unsigned char)arg1;
- (void)setPreferredLocalInterfaceForDuplication:(unsigned char)arg1;
- (void)internalUpdateOneToOneBitrateCapsForConnection:(id)arg1;
- (void)updateOneToOneBitrateCapsForConnection:(id)arg1;
- (void)updateCellularTech:(int)arg1 forLocalInterface:(_Bool)arg2;
- (void)updateAllBitrateCapsForConnection:(id)arg1;
- (void)updateCellularMTU:(int)arg1;
- (id)getSecondaryConnectionToBeCompared;
- (id)getPrimaryConnectionToBeCompared;
- (unsigned int)getByteCountWithIndex:(unsigned char)arg1 isOutgoing:(_Bool)arg2;
- (unsigned int)getPacketCountWithIndex:(unsigned char)arg1 isOutgoing:(_Bool)arg2;
- (void)optOutAllStreamsForNonPrimaryConnections;
- (void)resetParticipantGenerationCounter;
- (void)synchronizeParticipantGenerationCounter:(unsigned char)arg1;
- (void)updatePacketCountAndByteCountWithIndex:(unsigned char)arg1 packetSize:(int)arg2 numOfStreamId:(int)arg3 isPriorityIncluded:(_Bool)arg4 isOutgoing:(_Bool)arg5;
- (int)removeConnection:(id)arg1;
- (void)handleSecondaryConnectionRemoved;
- (void)reselectPrimaryConnection;
- (void)handlePrimaryConnectionRemoved;
- (int)addConnection:(id)arg1;
- (unsigned int)downlinkBitrateCapForConnection:(id)arg1;
- (unsigned int)uplinkBitrateCapForConnection:(id)arg1;
- (unsigned int)oneToOneBitrateCapForConnectionWithType:(unsigned int)arg1;
- (unsigned int)uplinkBitrateCapOneToOne:(id)arg1;
- (unsigned int)uplinkAudioOnlyBitrateCapOneToOne:(id)arg1;
- (void)reportFirstActiveConnectionOneToOne:(id)arg1 remoteOSVersion:(id)arg2 redState:(_Bool)arg3 isAudioOnly:(_Bool)arg4;
- (void)reportActiveConnectionOneToOne:(id)arg1 isAudioOnly:(_Bool)arg2;
- (void)dealloc;
- (id)initWithMultiwayEnabled:(_Bool)arg1;

@end

