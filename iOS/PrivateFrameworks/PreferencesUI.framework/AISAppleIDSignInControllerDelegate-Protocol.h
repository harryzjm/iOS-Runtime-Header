//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PreferencesUI/NSObject-Protocol.h>

@class AISAppleIDSignInController, AISAppleIDSignInResult, NSError;

@protocol AISAppleIDSignInControllerDelegate <NSObject>
- (void)signInController:(AISAppleIDSignInController *)arg1 didFinishWithError:(NSError *)arg2;
- (void)signInController:(AISAppleIDSignInController *)arg1 didCompleteWithResult:(AISAppleIDSignInResult *)arg2;

@optional
- (void)signInControllerDidSkip:(AISAppleIDSignInController *)arg1;
@end

