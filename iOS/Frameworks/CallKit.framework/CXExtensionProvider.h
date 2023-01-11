//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/CXProviderExtensionVendorContextDelegate-Protocol.h>
#import <CallKit/NSExtensionRequestHandling-Protocol.h>

@class CXProviderExtensionVendorContext, NSString;

@interface CXExtensionProvider <CXProviderExtensionVendorContextDelegate, NSExtensionRequestHandling>
{
    CXProviderExtensionVendorContext *_extensionContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CXProviderExtensionVendorContext *extensionContext; // @synthesize extensionContext=_extensionContext;
- (void)providerExtensionVendorContext:(id)arg1 handledAudioSessionActivationStateChangedTo:(_Bool)arg2;
- (void)providerExtensionVendorContext:(id)arg1 handledActionTimeout:(id)arg2;
- (void)providerExtensionVendorContext:(id)arg1 receivedCommittedTransaction:(id)arg2;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)invalidate;
- (_Bool)requiresProxyingAVAudioSessionState;
- (id)hostProtocolDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
