//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol TRSetupHandlerDelegate;

@interface TRSetupHandler : NSObject
{
    id <TRSetupHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TRSetupHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleCompletionRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_handleProxyAuthenticationRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_handleProxyDeviceRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_handleCompanionAuthenticationRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_handleActivationRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_handleNetworkRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_handleConfigurationRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_handleHandshakeRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)registerMessageHandlersForSession:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end
