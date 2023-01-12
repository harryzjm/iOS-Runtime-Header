//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPAuthSessionDelegate-Protocol.h>

@class HAPAccessoryProtocolInfo, HAPAuthSession, HAPPairSetupSession, NSError, NSString;
@protocol HAP2AccessoryServerEncoding, HAP2AccessoryServerSecureTransport;

@interface HAP2AccessoryServerPairingDriverSoftwareAuthWorkItem <HAPAuthSessionDelegate>
{
    _Bool _sendPDUHeader;
    id <HAP2AccessoryServerSecureTransport> _transport;
    id <HAP2AccessoryServerEncoding> _encoding;
    HAPPairSetupSession *_pairingSession;
    HAPAccessoryProtocolInfo *_authenticatedProtocolInfo;
    NSError *_cancelError;
    HAPAuthSession *_authSession;
}

+ (id)doSoftwareAuth;
- (void).cxx_destruct;
@property(retain, nonatomic) HAPAuthSession *authSession; // @synthesize authSession=_authSession;
@property(retain, nonatomic) NSError *cancelError; // @synthesize cancelError=_cancelError;
@property(retain, nonatomic) HAPAccessoryProtocolInfo *authenticatedProtocolInfo; // @synthesize authenticatedProtocolInfo=_authenticatedProtocolInfo;
@property(retain, nonatomic) HAPPairSetupSession *pairingSession; // @synthesize pairingSession=_pairingSession;
@property(readonly, nonatomic) id <HAP2AccessoryServerEncoding> encoding; // @synthesize encoding=_encoding;
@property(readonly, nonatomic) id <HAP2AccessoryServerSecureTransport> transport; // @synthesize transport=_transport;
- (void)authSession:(id)arg1 validateUUID:(id)arg2 token:(id)arg3;
- (void)authSession:(id)arg1 sendAuthExchangeData:(id)arg2;
- (void)authSession:(id)arg1 confirmUUID:(id)arg2 token:(id)arg3;
- (void)authSession:(id)arg1 authenticateUUID:(id)arg2 token:(id)arg3;
- (void)authSession:(id)arg1 authComplete:(id)arg2;
- (void)_handleAuthCompleteWithError:(id)arg1;
- (_Bool)_isProtocolInfoValid:(id)arg1;
- (void)_validateAccessoryInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)_sendSoftwareAuthMessageWithData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_softwareAuthFinished;
- (void)cancelWithError:(id)arg1;
- (void)_startSoftwareAuth;
- (void)runForPairingDriver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
