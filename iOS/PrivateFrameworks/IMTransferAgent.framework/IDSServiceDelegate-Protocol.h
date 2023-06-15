//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMTransferAgent/NSObject-Protocol.h>

@class IDSAccount, IDSDevice, IDSGroupSessionParticipantUpdate, IDSMessageContext, IDSProtobuf, IDSService, IDSSession, NSArray, NSData, NSDictionary, NSError, NSSet, NSString, NSURL;

@protocol IDSServiceDelegate <NSObject>

@optional
- (void)service:(IDSService *)arg1 didCancelMessageWithSuccess:(_Bool)arg2 error:(NSError *)arg3 identifier:(NSString *)arg4;
- (void)service:(IDSService *)arg1 didSwitchActivePairedDevice:(IDSDevice *)arg2 acknowledgementBlock:(void (^)(void))arg3;
- (void)serviceAllowedTrafficClassifiersDidReset:(IDSService *)arg1;
- (void)serviceSpaceDidBecomeAvailable:(IDSService *)arg1;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 receivedGroupSessionParticipantDataUpdate:(IDSGroupSessionParticipantUpdate *)arg3;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 receivedGroupSessionParticipantUpdate:(IDSGroupSessionParticipantUpdate *)arg3 context:(IDSMessageContext *)arg4;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 receivedGroupSessionParticipantUpdate:(IDSGroupSessionParticipantUpdate *)arg3;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 inviteReceivedForSession:(IDSSession *)arg3 fromID:(NSString *)arg4 withContext:(NSData *)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 inviteReceivedForSession:(IDSSession *)arg3 fromID:(NSString *)arg4 withOptions:(NSDictionary *)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 inviteReceivedForSession:(IDSSession *)arg3 fromID:(NSString *)arg4;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 identifier:(NSString *)arg3 fromID:(NSString *)arg4 hasBeenDeliveredWithContext:(id)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 identifier:(NSString *)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 identifier:(NSString *)arg3 sentBytes:(long long)arg4 totalBytes:(long long)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 identifier:(NSString *)arg3 didSendWithSuccess:(_Bool)arg4 error:(NSError *)arg5 context:(IDSMessageContext *)arg6;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 identifier:(NSString *)arg3 didSendWithSuccess:(_Bool)arg4 error:(NSError *)arg5;
- (void)service:(IDSService *)arg1 linkedDevicesChanged:(NSArray *)arg2;
- (void)service:(IDSService *)arg1 connectedDevicesChanged:(NSArray *)arg2;
- (void)service:(IDSService *)arg1 nearbyDevicesChanged:(NSArray *)arg2;
- (void)service:(IDSService *)arg1 devicesChanged:(NSArray *)arg2;
- (void)service:(IDSService *)arg1 activeAccountsChanged:(NSSet *)arg2;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingPendingMessageOfType:(long long)arg3 fromID:(NSString *)arg4 context:(IDSMessageContext *)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 pendingResourceWithMetadata:(NSDictionary *)arg3 fromID:(NSString *)arg4 acknowledgementBlock:(void (^)(_Bool))arg5 context:(IDSMessageContext *)arg6;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingResourceAtURL:(NSURL *)arg3 metadata:(NSDictionary *)arg4 fromID:(NSString *)arg5 context:(IDSMessageContext *)arg6;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingResourceAtURL:(NSURL *)arg3 fromID:(NSString *)arg4 context:(IDSMessageContext *)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingUnhandledProtobuf:(IDSProtobuf *)arg3 fromID:(NSString *)arg4 context:(IDSMessageContext *)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingData:(NSData *)arg3 fromID:(NSString *)arg4 context:(IDSMessageContext *)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingMessage:(NSDictionary *)arg3 fromID:(NSString *)arg4 context:(IDSMessageContext *)arg5;
- (void)service:(IDSService *)arg1 didSendOpportunisticDataWithIdentifier:(NSString *)arg2 toIDs:(NSArray *)arg3;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingOpportunisticData:(NSData *)arg3 withIdentifier:(NSString *)arg4 fromID:(NSString *)arg5 context:(IDSMessageContext *)arg6;
@end

