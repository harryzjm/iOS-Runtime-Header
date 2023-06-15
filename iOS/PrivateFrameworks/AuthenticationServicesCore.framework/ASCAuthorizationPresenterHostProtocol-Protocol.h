//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthenticationServicesCore/NSObject-Protocol.h>

@class ASCAuthorizationPresentationContext, BSProcessHandle, LAContext, NSArray, NSError, NSString;
@protocol ASCCredentialProtocol, ASCLoginChoiceProtocol;

@protocol ASCAuthorizationPresenterHostProtocol <NSObject>
- (void)cableClientWillAuthenticate;
- (void)cableClientWillConnect;
- (void)startCABLEAuthenticationWithCompletionHandler:(void (^)(ASCAuthorizationPresentationContext *, NSError *))arg1;
- (void)initializeClientToViewServiceConnection;
- (void)validateUserEnteredPIN:(NSString *)arg1 completionHandler:(void (^)(id <ASCCredentialProtocol>, NSError *))arg2;
- (void)authorizationRequestFinishedWithCredential:(id <ASCCredentialProtocol>)arg1 error:(NSError *)arg2 completionHandler:(void (^)(void))arg3;
- (void)authorizationRequestInitiatedWithLoginChoice:(id <ASCLoginChoiceProtocol>)arg1 authenticatedContext:(LAContext *)arg2 completionHandler:(void (^)(id <ASCCredentialProtocol>, NSError *))arg3;
- (void)presentAuthorizationWithContext:(ASCAuthorizationPresentationContext *)arg1 forProcess:(BSProcessHandle *)arg2 completionHandler:(void (^)(id <ASCCredentialProtocol>, NSError *))arg3;
- (void)updateInterfaceForUserVisibleError:(NSError *)arg1;
- (void)presentPINEntryInterface;
- (void)updateInterfaceWithLoginChoices:(NSArray *)arg1;
- (void)presentError:(NSError *)arg1 forService:(NSString *)arg2 completionHandler:(void (^)(void))arg3;
@end

