//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;
@protocol OS_dispatch_queue;

@interface SiriCoreNetworkingAnalytics : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_netId;
    NSUUID *_orchestratorRequestId;
    _Bool _isConnectionActive;
    unsigned int _sequenceNumber;
}

+ (id)sharedSiriCoreNetworkingAnalytics;
+ (id)sessionConnectionQualityFromSiriCoreConnectionMetrics:(id)arg1;
+ (int)qualityFromString:(id)arg1;
+ (id)pingInfoFromSiriCoreConnectionMetrics:(id)arg1;
+ (id)debugNetworkInterfacesFromSiriCoreConnectionMetrics:(id)arg1;
+ (id)debugSessionConnectionNetworkFromSiriCoreConnectionMetrics:(id)arg1;
+ (int)phyModeFromString:(id)arg1;
+ (id)sessionConnectionNetworkFromSiriCoreConnectionMetrics:(id)arg1;
+ (id)networkInterfacesFromDictionary:(id)arg1;
+ (int)connectionTypeFromString:(id)arg1;
+ (int)connectionMethodFromString:(id)arg1;
+ (int)tlsFromString:(id)arg1;
+ (int)snapshotStateFromStringEvent:(id)arg1;
+ (id)handShakeProtocolFromArray:(id)arg1;
+ (int)handshakeProtocolFromString:(id)arg1;
+ (id)proxyConfigurationFromDictionary:(id)arg1;
+ (id)establishmentResolutionFromArray:(id)arg1;
+ (int)pathStatusFromNumber:(id)arg1;
+ (id)pathInterfacesFromArray:(id)arg1;
+ (int)pathTypeFromNumber:(id)arg1;
+ (id)endpointsFromArray:(id)arg1;
+ (id)endpointFromDictionary:(id)arg1;
+ (int)endpointTypeFromNumber:(id)arg1;
+ (int)sessionStateFromString:(id)arg1;
+ (int)sessionTypeFromString:(id)arg1;
+ (int)connectionModeFromString:(id)arg1;
- (void).cxx_destruct;
- (void)logPeerConnectionFailed:(id)arg1;
- (void)logSessionConnectionFailed:(id)arg1;
- (void)logDebugSessionConnectionSnapshotCaptured:(id)arg1;
- (void)logSessionConnectionSnapshotCaptured:(id)arg1;
- (void)logDebugNetworkConnectionStateReadySnapshotCaptured:(id)arg1;
- (void)logNetworkConnectionStateReadySnapshotCaptured:(id)arg1;
- (void)logDebugNetworkConnectionStatePreparationSnapshotCaptured:(id)arg1;
- (void)logNetworkConnectionStatePreparationSnapshotCaptured:(id)arg1;
- (void)logSessionConnectionHttpHeaderCreated:(id)arg1;
- (void)logRequestLinkBetweenOrchestratorAndNetworkComponent;
- (id)_createSchemaClientEventFromUUID:(id)arg1;
- (id)_createRequestLinkInfoFromUUID:(id)arg1 component:(int)arg2;
- (_Bool)emitLogDebug;
- (void)updateOrchestratorRequestId:(id)arg1;
- (void)resetSequenceNumber;
- (void)increaseSequenceNumber;
- (void)updateIsConnectionActive:(_Bool)arg1;
- (unsigned int)getSequenceNumber;
- (void)resetNetId;
- (void)reset;
- (id)_init;
- (id)init;

@end
