//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccountUI/AAUISignInViewControllerDelegate-Protocol.h>

@class AKAppleIDAuthenticationContext, AKAppleIDAuthenticationInAppContext;

@protocol AAUISignInViewControllerInternalDelegate <AAUISignInViewControllerDelegate>

@optional
- (void)willAuthenticateWithContext:(AKAppleIDAuthenticationContext *)arg1;
- (AKAppleIDAuthenticationInAppContext *)authenticationContext;
@end
