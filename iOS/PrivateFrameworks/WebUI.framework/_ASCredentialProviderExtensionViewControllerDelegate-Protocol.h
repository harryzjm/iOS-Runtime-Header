//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebUI/NSObject-Protocol.h>

@class ASPasswordCredential, _ASCredentialProviderExtensionViewController;

@protocol _ASCredentialProviderExtensionViewControllerDelegate <NSObject>

@optional
- (void)credentialProviderExtensionViewController:(_ASCredentialProviderExtensionViewController *)arg1 didFinishWithCredential:(ASPasswordCredential *)arg2 completion:(void (^)(void))arg3;
@end
