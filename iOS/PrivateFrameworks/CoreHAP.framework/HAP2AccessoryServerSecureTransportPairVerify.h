//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAP2AccessoryServerTransportDelegate-Protocol.h>
#import <CoreHAP/HAPSecuritySessionDelegate-Protocol.h>

@class HAPSecuritySession, NSString;

@interface HAP2AccessoryServerSecureTransportPairVerify <HAP2AccessoryServerTransportDelegate, HAPSecuritySessionDelegate>
{
    HAPSecuritySession *_securitySession;
    CDUnknownBlockType _stateChangeCompletion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType stateChangeCompletion; // @synthesize stateChangeCompletion=_stateChangeCompletion;
- (void)_closeWithError:(id)arg1;
- (void)_sendSetupExchangeData:(id)arg1;
- (void)_secureTransport;
- (void)_openTransport;
- (void)securitySession:(id)arg1 didCloseWithError:(id)arg2;
- (void)securitySessionDidOpen:(id)arg1;
- (void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;
- (id)securitySession:(id)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg2 error:(id *)arg3;
- (id)securitySession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id *)arg2;
- (void)doCloseWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)doOpenWithCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) HAPSecuritySession *securitySession; // @synthesize securitySession=_securitySession;
- (id)initWithTransport:(id)arg1 operationQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
