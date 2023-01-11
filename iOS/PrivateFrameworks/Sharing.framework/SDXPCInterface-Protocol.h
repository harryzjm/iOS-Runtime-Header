//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDictionary, NSError, NSString, NSURL, NSUUID, NSXPCListenerEndpoint, SFBLEDevice, SFCoordinatedAlertRequest, SFDevice, SFDeviceDiscovery, SFEventMessage, SFRemoteAutoFillSessionHelper, SFRemoteInteractionSession, SFRequestMessage, SFResponseMessage, SFService, SFSession, SFUserAlert;

@protocol SDXPCInterface
- (void)userNotificationPresent:(SFUserAlert *)arg1;
- (void)pairTLSClient:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)sessionSendTLSEncryptedObject:(NSDictionary *)arg1;
- (void)sessionSendResponse:(SFResponseMessage *)arg1;
- (void)sessionSendRequest:(SFRequestMessage *)arg1;
- (void)sessionSendFrameType:(unsigned char)arg1 data:(NSData *)arg2;
- (void)sessionSendEvent:(SFEventMessage *)arg1;
- (void)sessionReceivedTLSData:(NSData *)arg1 type:(unsigned char)arg2;
- (void)sessionActivate:(SFSession *)arg1 completion:(void (^)(NSError *))arg2;
- (void)serviceSendTLSEncryptedObject:(NSDictionary *)arg1 toPeer:(NSUUID *)arg2;
- (void)serviceSendResponse:(SFResponseMessage *)arg1;
- (void)serviceSendRequest:(SFRequestMessage *)arg1;
- (void)serviceSendFrameType:(unsigned char)arg1 data:(NSData *)arg2 peer:(NSUUID *)arg3;
- (void)serviceSendEvent:(SFEventMessage *)arg1;
- (void)servicePairTLSWithPeer:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)serviceUpdate:(SFService *)arg1;
- (void)serviceActivateTLSWithCompletion:(void (^)(NSError *))arg1;
- (void)serviceActivate:(SFService *)arg1 completion:(void (^)(NSError *))arg2;
- (void)serviceReceivedTLSData:(NSData *)arg1 type:(unsigned char)arg2 peer:(NSUUID *)arg3;
- (void)remoteInteractionSessionSendPayload:(NSDictionary *)arg1;
- (void)remoteInteractionSessionSetText:(NSString *)arg1;
- (void)remoteInteractionSessionInsertText:(NSString *)arg1;
- (void)remoteInteractionSessionDeleteTextBackward;
- (void)remoteInteractionSessionCommitText;
- (void)remoteInteractionSessionClearText;
- (void)remoteInteractionSessionActivate:(SFRemoteInteractionSession *)arg1 completion:(void (^)(NSError *))arg2;
- (void)nfcTagReaderUIActivateWithEndpoint:(NSXPCListenerEndpoint *)arg1 params:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (void)diagnosticUnlockTestServer;
- (void)diagnosticUnlockTestClientWithDevice:(SFBLEDevice *)arg1;
- (void)diagnosticShow:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
- (void)diagnosticMockStop:(void (^)(NSError *))arg1;
- (void)diagnosticMockStart:(void (^)(NSError *))arg1;
- (void)diagnosticMock:(NSString *)arg1 device:(SFBLEDevice *)arg2 completion:(void (^)(NSError *))arg3;
- (void)diagnosticLogControl:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
- (void)diagnosticControl:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)diagnosticBLEModeWithCompletion:(void (^)(NSError *))arg1;
- (void)bluetoothUserInteraction;
- (void)deviceDiscoveryFastScanCancel:(NSString *)arg1;
- (void)deviceDiscoveryFastScanTrigger:(NSString *)arg1;
- (void)deviceDiscoveryUpdate:(SFDeviceDiscovery *)arg1;
- (void)deviceDiscoveryActivate:(SFDeviceDiscovery *)arg1 completion:(void (^)(NSError *))arg2;
- (void)coordinatedAlertsRequestFinish;
- (void)coordinatedAlertsRequestStart:(SFCoordinatedAlertRequest *)arg1 completion:(void (^)(NSError *, _Bool, NSDictionary *))arg2;
- (void)wifiPasswordSharingAvailabilityWithCompletion:(void (^)(unsigned int, NSError *))arg1;
- (void)triggerProximityAutoFillDetectedWithURL:(NSURL *)arg1 completion:(void (^)(NSError *))arg2;
- (void)triggerHomeKitDeviceDetectedWithURL:(NSURL *)arg1 completion:(void (^)(NSError *))arg2;
- (void)showDevicePickerWithInfo:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setupDevice:(SFDevice *)arg1 homeIdentifier:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (void)retriggerProximitySetup:(void (^)(NSError *))arg1;
- (void)retriggerProximityPairing:(void (^)(NSError *))arg1;
- (void)repairDevice:(SFDevice *)arg1 flags:(unsigned int)arg2 completion:(void (^)(NSError *))arg3;
- (void)reenableProxCardType:(unsigned char)arg1 completion:(void (^)(NSError *))arg2;
- (void)preventExitForLocaleReason:(NSString *)arg1;
- (void)openSetupURL:(NSURL *)arg1 completion:(void (^)(NSError *))arg2;
- (void)appleIDInfoWithCompletion:(void (^)(NSString *, NSData *, NSError *))arg1;
- (void)activityStateWithCompletion:(void (^)(unsigned long long, NSError *))arg1;
- (void)activateAssertionWithIdentifier:(NSString *)arg1;
- (void)displayStringForContactIdentifier:(NSString *)arg1 deviceIdentifier:(NSUUID *)arg2 completion:(void (^)(NSString *, _Bool, NSError *))arg3;
- (void)displayNameForEmailHash:(NSString *)arg1 phoneHash:(NSString *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)contactIDForEmailHash:(NSString *)arg1 phoneHash:(NSString *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)autoFillHelperUserNotificationDidDismiss:(NSUUID *)arg1;
- (void)autoFillHelperUserNotificationDidActivate:(NSUUID *)arg1;
- (void)autoFillHelperTryPIN:(NSString *)arg1;
- (void)autoFillHelperDidPickUsername:(NSString *)arg1 password:(NSString *)arg2 error:(NSError *)arg3;
- (void)autoFillHelperActivate:(SFRemoteAutoFillSessionHelper *)arg1 completion:(void (^)(NSError *))arg2;
- (void)statusInfoWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)requestWithInfo:(NSDictionary *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)personInfoWithEmailOrPhone:(NSString *)arg1 completion:(void (^)(SFAppleIDPersonInfo *, NSError *))arg2;
- (void)myAccountWithCompletion:(void (^)(SFAppleIDAccount *, NSError *))arg1;
- (void)accountForAppleID:(NSString *)arg1 withCompletion:(void (^)(SFAppleIDAccount *, NSError *))arg2;
@end

