//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProximityAppleIDSetupUI/NSObject-Protocol.h>

@class AAUISignInViewController, NSDictionary;

@protocol AAUISignInViewControllerDelegate <NSObject>

@optional
- (void)signInViewControllerDidCancel:(AAUISignInViewController *)arg1;
- (void)signInViewController:(AAUISignInViewController *)arg1 didCompleteWithAuthenticationResults:(NSDictionary *)arg2;
@end

