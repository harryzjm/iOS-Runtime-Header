//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthenticationServicesCore/NSObject-Protocol.h>

@class ASCAuthorizationPresenter, LAContext, NSString;
@protocol ASCLoginChoiceProtocol;

@protocol ASCAuthorizationPresenterDelegate <NSObject>
- (void)authorizationPresenter:(ASCAuthorizationPresenter *)arg1 startCABLEAuthenticationWithCompletionHandler:(void (^)(ASCAuthorizationPresentationContext *, NSError *))arg2;
- (void)authorizationPresenter:(ASCAuthorizationPresenter *)arg1 validateUserEnteredPIN:(NSString *)arg2 completionHandler:(void (^)(id <ASCCredentialProtocol>, NSError *))arg3;
- (void)authorizationPresenter:(ASCAuthorizationPresenter *)arg1 credentialRequestedForLoginChoice:(id <ASCLoginChoiceProtocol>)arg2 authenticatedContext:(LAContext *)arg3 completionHandler:(void (^)(id <ASCCredentialProtocol>, NSError *))arg4;
@end

