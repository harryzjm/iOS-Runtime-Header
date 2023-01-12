//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class NSString;
@protocol _ASAccountAuthenticationModificationExtensionHostContextDelegate;

__attribute__((visibility("hidden")))
@interface _ASAccountAuthenticationModificationExtensionHostContext : NSExtensionContext
{
    id <_ASAccountAuthenticationModificationExtensionHostContextDelegate> _delegate;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
- (void).cxx_destruct;
@property(nonatomic) __weak id <_ASAccountAuthenticationModificationExtensionHostContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissRequestUI;
- (void)prepareToCancelRequestWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareToCompleteRequestWithUpdatedCredential:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareToCompleteUpgradeToSignInWithAppleWithUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSignInWithAppleAuthorizationWithState:(id)arg1 nonce:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

