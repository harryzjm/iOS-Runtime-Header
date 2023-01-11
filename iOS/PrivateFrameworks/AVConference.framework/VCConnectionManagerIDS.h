//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, VCSessionBitrateArbiter;

__attribute__((visibility("hidden")))
@interface VCConnectionManagerIDS
{
    NSMutableArray *_connectionArray;
    double _lastTimestampForRemoteSendingFromNonPrimary;
    double _lastTimestampPreferredRemoteInterfaceUpdated;
    unsigned int _sentPacketCount[256];
    unsigned int _sentByteCount[256];
    unsigned int _receivedPacketCount[256];
    unsigned int _receivedByteCount[256];
    VCSessionBitrateArbiter *_bitrateArbiter;
    _Bool _isMultiwaySession;
}

- (void)reportConnection:(id)arg1 isInitialConnection:(_Bool)arg2;
- (void)sourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isSourceOnCellular:(_Bool *)arg2 isSourceIPv6:(_Bool *)arg3;
- (_Bool)addConnectionToConnectionArray:(id)arg1;
- (_Bool)shouldReplaceConnection:(id)arg1 withConnection:(id)arg2;
- (void)resetPacketCountAndByteCountWithConnection:(id)arg1;
- (void)updateConnectionForDuplication;
- (void)updateSessionStats:(unsigned short)arg1;
- (id)copyConnectionWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isPrimary:(_Bool *)arg2;
- (_Bool)shouldAcceptDataFromSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (void)setPreferredRemoteInterfaceForDuplication:(int)arg1;
- (void)setPreferredLocalInterfaceForDuplication:(int)arg1;
- (void)updateCellularTech:(int)arg1 forLocalInterface:(_Bool)arg2;
- (void)updateCellularMTU:(int)arg1;
- (id)getSecondaryConnectionToBeCompared;
- (id)getPrimaryConnectionToBeCompared;
- (void)handoverWithWRMSuggestion:(_Bool)arg1;
- (_Bool)shouldHandoverWhenUpdateWRMDuplication:(int)arg1;
- (unsigned int)getByteCountWithIndex:(unsigned char)arg1 isOutgoing:(_Bool)arg2;
- (unsigned int)getPacketCountWithIndex:(unsigned char)arg1 isOutgoing:(_Bool)arg2;
- (void)optOutAllStreamsForNonPrimaryConnections;
- (void)synchronizeParticipantGenerationCounter:(unsigned char)arg1;
- (void)updatePacketCountAndByteCountWithIndex:(unsigned char)arg1 packetSize:(int)arg2 numOfStreamId:(int)arg3 isPriorityIncluded:(_Bool)arg4 isOutgoing:(_Bool)arg5;
- (int)removeConnection:(id)arg1;
- (void)handleSecondaryConnectionRemoved;
- (void)handlePrimaryConnectionRemoved;
- (int)addConnection:(id)arg1;
- (_Bool)isPrimaryConnectionSameAsConnection:(id)arg1;
- (_Bool)selectPrimaryAndSecondaryWithConnection:(id)arg1;
- (unsigned int)downlinkBitrateCapForConnectionType:(int)arg1;
- (unsigned int)uplinkBitrateCapForConnectionType:(int)arg1;
- (void)updateSecondaryWithConnection:(id)arg1;
- (void)updatePrimaryWithConnection:(id)arg1;
- (void)dealloc;
- (id)initWithMultiwayEnabled:(_Bool)arg1;

@end

