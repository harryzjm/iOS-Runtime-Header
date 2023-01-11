//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <PassKitCore/PKIssuerProvisioningExtensionProviderContextExportedInterface-Protocol.h>

@class NSString, PKIssuerProvisioningExtensionHandler;

@interface PKIssuerProvisioningExtensionProviderContext : NSExtensionContext <PKIssuerProvisioningExtensionProviderContextExportedInterface>
{
    PKIssuerProvisioningExtensionHandler *_handler;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
@property(retain, nonatomic) PKIssuerProvisioningExtensionHandler *handler; // @synthesize handler=_handler;
- (void)connect;
- (void)generateRequestWithEntryIdentifier:(id)arg1 configuration:(id)arg2 certificateChain:(id)arg3 nonce:(id)arg4 nonceSignature:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)remotePassEntriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)passEntriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)statusWithCompletion:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
