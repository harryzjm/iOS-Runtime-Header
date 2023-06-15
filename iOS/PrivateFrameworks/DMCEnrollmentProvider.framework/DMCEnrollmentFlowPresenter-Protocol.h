//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DMCEnrollmentProvider/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSError, NSMutableDictionary, NSNumber, NSString, NSURL;
@protocol MDMAuthenticatorProtocol;

@protocol DMCEnrollmentFlowPresenter <NSObject>
- (void)showEnrollmentFailure:(NSError *)arg1;
- (void)showEnrollmentCompletionScene;
- (void)requestMAIDSignInWithAuthenticationResults:(NSMutableDictionary *)arg1 personaID:(NSString *)arg2 makeiTunesAccountActive:(_Bool)arg3 completionHandler:(void (^)(_Bool, _Bool, NSError *))arg4;

@optional
- (void)requestDebuggingApplicationsInstallation:(NSArray *)arg1 requiredEntitlements:(NSArray *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (NSString *)notificationNameForApplicationWillTerminate;
- (void)dismissEnrollmentScene;
- (void)showInstallingEnrollmentProfileScene;
- (void)suggestRestoreForAccountWithUsername:(NSString *)arg1 personaID:(NSString *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)requestiCloudSignInConfirmationWithCompletionHandler:(void (^)(_Bool))arg1;
- (void)showiCloudPromotionPageWithiCloudQuotaString:(NSString *)arg1 completionHandler:(void (^)(void))arg2;
- (void)displayManagementDetailsOverviewWithProfileData:(NSData *)arg1 managedAppleID:(NSString *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)requestUserConsentWithProfileData:(NSData *)arg1 managedAppleID:(NSString *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)requestDevicePasscodeDataWithCompletionHandler:(void (^)(NSData *, unsigned long long, _Bool))arg1;
- (void)requestDevicePasscodeWithCompletionHandler:(void (^)(NSString *, _Bool))arg1;
- (void)requestSilentMAIDAuthenticationWithAuthenticationResults:(NSMutableDictionary *)arg1 personaID:(NSString *)arg2 requireAppleMAID:(_Bool)arg3 completionHandler:(void (^)(NSMutableDictionary *, _Bool, NSError *))arg4;
- (void)requestMAIDAuthenticationWithManagedAppleID:(NSString *)arg1 personaID:(NSString *)arg2 ephemeral:(_Bool)arg3 requireAppleMAID:(_Bool)arg4 completionHandler:(void (^)(NSMutableDictionary *, _Bool, NSError *))arg5;
- (void)requestMAIDAuthenticationWithManagedAppleID:(NSString *)arg1 personaID:(NSString *)arg2 ephemeral:(_Bool)arg3 completionHandler:(void (^)(NSMutableDictionary *, _Bool, NSError *))arg4;
- (void)requestWebAuthenticationWithWebAuthURL:(NSURL *)arg1 authenticator:(id <MDMAuthenticatorProtocol>)arg2 authParams:(NSDictionary *)arg3 completionHandler:(void (^)(NSDictionary *, _Bool, NSError *))arg4;
- (void)requestAuthServicesAuthenticationWithWebAuthURL:(NSURL *)arg1 callbackURLScheme:(NSString *)arg2 completionHandler:(void (^)(NSURL *, _Bool, NSError *))arg3;
- (void)requestESSOApplicationInstallationWithITunesItemID:(NSNumber *)arg1 requiredEntitlements:(NSArray *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)requestUsernameWithDefaultUsername:(NSString *)arg1 completionHandler:(void (^)(NSString *, _Bool))arg2;
@end

