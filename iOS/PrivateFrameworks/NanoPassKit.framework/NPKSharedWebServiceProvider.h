//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NPKPaymentWebServiceCompanionTargetDeviceDelegate-Protocol.h>

@class NPKCompanionAgentConnection, NPKPaymentWebServiceCompanionTargetDevice, NPKPeerPaymentWebServiceCompanionTargetDevice, NSString, PKPaymentWebService, PKPeerPaymentAccount, PKPeerPaymentWebService;

@interface NPKSharedWebServiceProvider : NSObject <NPKPaymentWebServiceCompanionTargetDeviceDelegate>
{
    PKPaymentWebService *_webService;
    NPKPaymentWebServiceCompanionTargetDevice *_targetDevice;
    PKPeerPaymentWebService *_peerPaymentWebService;
    PKPeerPaymentAccount *_peerPaymentAccount;
    NPKCompanionAgentConnection *_companionAgentConnection;
    NPKPeerPaymentWebServiceCompanionTargetDevice *_peerPaymentTargetDevice;
}

+ (id)sharedWebServiceProvider;
@property(retain, nonatomic) NPKPeerPaymentWebServiceCompanionTargetDevice *peerPaymentTargetDevice; // @synthesize peerPaymentTargetDevice=_peerPaymentTargetDevice;
@property(retain, nonatomic) NPKCompanionAgentConnection *companionAgentConnection; // @synthesize companionAgentConnection=_companionAgentConnection;
@property(retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount; // @synthesize peerPaymentAccount=_peerPaymentAccount;
@property(retain, nonatomic) PKPeerPaymentWebService *peerPaymentWebService; // @synthesize peerPaymentWebService=_peerPaymentWebService;
@property(retain, nonatomic) NPKPaymentWebServiceCompanionTargetDevice *targetDevice; // @synthesize targetDevice=_targetDevice;
@property(retain, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;
- (void).cxx_destruct;
- (void)handleUpdatedPeerPaymentWebServiceContext:(id)arg1 account:(id)arg2;
- (void)setNewAuthRandom:(CDUnknownBlockType)arg1;
- (void)sendPaymentOptionsDefaultsToWatch;
- (void)showPaymentSetupForAppDisplayName:(id)arg1;
- (void)sendWebServiceContextToWatch;
- (void)handlePaymentWebServiceContextFromWatch:(id)arg1;
- (void)archiveWebServiceBackgroundContext:(id)arg1;
- (void)archiveWebServiceContext:(id)arg1;
- (void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)handleUpdatePaymentPassWithTypeIdentifier:(id)arg1;
- (void)handleRemoveTransactionsWithIdentifiers:(id)arg1;
- (void)handleAppletState:(id)arg1 forUniqueID:(id)arg2;
- (void)handlePaymentTransactions:(id)arg1 appletStates:(id)arg2 forUniqueIDs:(id)arg3;
- (void)handlePreconditionNotMetWithUniqueIDs:(id)arg1 shouldUnregister:(_Bool)arg2;
- (void)handlePushToken:(id)arg1;
- (void)_deviceFailedToPair:(id)arg1;
- (id)_peerPaymentAccount;
- (id)_peerPaymentWebServiceContext;
- (id)_webServiceContext;
- (void)loadWebService;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

