//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthenticationServices/_ASCredentialProviderExtensionHostContextDelegate-Protocol.h>

@class NSString;
@protocol _ASCredentialProviderExtensionConfigurationViewControllerDelegate;

@interface _ASCredentialProviderExtensionConfigurationViewController <_ASCredentialProviderExtensionHostContextDelegate>
{
    id <_ASCredentialProviderExtensionConfigurationViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <_ASCredentialProviderExtensionConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)prepareToCompleteExtensionConfigurationRequestWithHost:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_finishWithSuccess:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_requestDidFailWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginConfiguringExtension;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
