//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ManagedConfigurationUI/NSObject-Protocol.h>

@class AKAppleIDAuthenticationInAppContext, MCProfileConnection, NSArray, NSError, NSString;
@protocol DMCRFSnapshot;

@protocol MCProfileTitlePageViewModelDelegate <NSObject>
- (void)presentRestoreFailedAlertWithError:(NSError *)arg1 completionHandler:(void (^)(void))arg2;
- (void)installationFinishedSuccessfully:(_Bool)arg1 shouldDismiss:(_Bool)arg2 shouldRedirect:(_Bool)arg3 errorToDisplay:(NSError *)arg4;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)presentSpinnerViewController;
- (void)presentAuthenticationViewControllerWithContext:(AKAppleIDAuthenticationInAppContext *)arg1 authenticationPreparationHandler:(void (^)(void (^)(void)))arg2 authenticationCompletionHandler:(void (^)(NSMutableDictionary *, NSError *, _Bool))arg3;
- (void)promptForManagedRestoreWithManagedAppleID:(NSString *)arg1 snapshot:(id <DMCRFSnapshot>)arg2 conflictingApps:(NSArray *)arg3 completionHandler:(void (^)(_Bool))arg4;
- (void)informQuestionViewControllerOfPreflightResult:(NSError *)arg1 profileConnection:(MCProfileConnection *)arg2;
- (void)promptForUserInput:(NSArray *)arg1 completionHandler:(void (^)(NSArray *, _Bool))arg2;
- (void)promptForPasscodeWithCompletionHandler:(void (^)(_Bool, NSString *))arg1;
@end

