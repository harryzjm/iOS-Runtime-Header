//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class ASAccountAuthenticationModificationExtensionContext;

@interface ASAccountAuthenticationModificationViewController : UIViewController
{
}

- (void)cancelRequest;
- (void)prepareInterfaceToChangePasswordForServiceIdentifier:(id)arg1 existingCredential:(id)arg2 newPassword:(id)arg3 userInfo:(id)arg4;
- (void)changePasswordWithoutUserInteractionForServiceIdentifier:(id)arg1 existingCredential:(id)arg2 newPassword:(id)arg3 userInfo:(id)arg4;
- (void)prepareInterfaceToConvertAccountToSignInWithAppleForServiceIdentifier:(id)arg1 existingCredential:(id)arg2 userInfo:(id)arg3;
- (void)convertAccountToSignInWithAppleWithoutUserInteractionForServiceIdentifier:(id)arg1 existingCredential:(id)arg2 userInfo:(id)arg3;
@property(readonly, nonatomic) ASAccountAuthenticationModificationExtensionContext *extensionContext;

@end
