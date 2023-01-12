//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/NSObject-Protocol.h>

@class IDSQRProtoMaterial, IDSQRProtoMaterialInfo, NSArray, NSData, NSDictionary, NSNumber, NSString, NSUUID;

@protocol IDSLinkDelegate <NSObject>
- (_Bool)link:(id)arg1 didReceivePacket:(CDStruct_c2cb0b33 *)arg2 fromDeviceUniqueID:(NSString *)arg3 cbuuid:(NSString *)arg4;
- (void)link:(id)arg1 didDisconnectForDeviceUniqueID:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (void)link:(id)arg1 didConnectForDeviceUniqueID:(NSString *)arg2 cbuuid:(NSString *)arg3;

@optional
- (void)link:(id)arg1 didReiceiveChildConnectionID:(NSUUID *)arg2 forLinkID:(BOOL)arg3;
- (void)link:(id)arg1 didMitigateCollision:(_Bool)arg2;
- (void)link:(id)arg1 didAddQREvent:(NSDictionary *)arg2;
- (void)link:(id)arg1 didReceiveReportEvent:(NSDictionary *)arg2;
- (void)link:(id)arg1 didReceiveErrorIndicationWithCode:(unsigned int)arg2;
- (void)link:(id)arg1 didReceiveEncryptedDataBlobs:(NSDictionary *)arg2;
- (void)didReceiveBlockedIndicationForLink:(id)arg1 reason:(unsigned int)arg2;
- (void)link:(id)arg1 didReceiveMappedParticipantsDict:(NSDictionary *)arg2 forLinkID:(BOOL)arg3;
- (void)link:(id)arg1 didReceiveSessionStateCounter:(unsigned int)arg2;
- (void)link:(id)arg1 didReceivePluginDisconnect:(NSArray *)arg2;
- (void)link:(id)arg1 didReceiveRequestToPurgeRegistration:(NSDictionary *)arg2;
- (void)link:(id)arg1 didReceivePluginUnregistration:(unsigned long long)arg2 pluginName:(NSString *)arg3;
- (void)link:(id)arg1 didReceivePluginRegistration:(unsigned long long)arg2 pluginName:(NSString *)arg3;
- (void)link:(id)arg1 didReceiveParticipantUpdate:(NSDictionary *)arg2 status:(unsigned short)arg3;
- (void)link:(id)arg1 didReceiveSessionInfo:(NSDictionary *)arg2 relayGroupID:(NSString *)arg3 relaySessionID:(NSString *)arg4 status:(unsigned int)arg5;
- (void)terminateCallDueToIdleClientForLink:(id)arg1;
- (void)link:(id)arg1 didSoMaskChange:(unsigned int)arg2;
- (void)link:(id)arg1 didGetLinkProbingStatus:(NSDictionary *)arg2;
- (void)link:(id)arg1 didCellularMTUChange:(unsigned short)arg2;
- (void)link:(id)arg1 didRATChange:(unsigned char)arg2;
- (void)link:(id)arg1 didCellularNWPathFlagsChanged:(unsigned short)arg2;
- (void)link:(id)arg1 didWiFiNWPathFlagsChanged:(unsigned short)arg2;
- (void)link:(id)arg1 didDefaultUnderlyingLinkChangeSucceeded:(_Bool)arg2 currentDefaultLinkID:(BOOL)arg3;
- (void)link:(id)arg1 didDisconnectUnderlyingLinkID:(BOOL)arg2 linkUUID:(NSUUID *)arg3 reason:(unsigned char)arg4;
- (void)link:(id)arg1 didConnectUnderlyingLink:(BOOL)arg2 linkUUID:(NSUUID *)arg3 localAttributes:(NSDictionary *)arg4 remoteAttributes:(NSDictionary *)arg5;
- (void)link:(id)arg1 didReceiveMaterialInfo:(IDSQRProtoMaterialInfo *)arg2 material:(IDSQRProtoMaterial *)arg3;
- (void)link:(id)arg1 didReceiveKeyMaterialMessageData:(NSData *)arg2 fromParticipantIDs:(NSArray *)arg3 toParticipantID:(NSNumber *)arg4;
- (void)link:(id)arg1 didReceiveSKEData:(NSData *)arg2;
- (void)link:(id)arg1 didDisconnectOverCloud:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (void)link:(id)arg1 didFailToConnectOverCloud:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (void)link:(id)arg1 didConnectOverCloud:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (void)link:(id)arg1 hasSpaceAvailable:(_Bool)arg2 deviceUniqueID:(NSString *)arg3 cbuuid:(NSString *)arg4;
- (void)link:(id)arg1 hostAwakeDidChange:(_Bool)arg2 deviceUniqueID:(NSString *)arg3 cbuuid:(NSString *)arg4;
@end

