//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

@class AMSAuthenticateRequest, CDPUIController, UIViewController;

__attribute__((visibility("hidden")))
@interface AMSUIAuthenticateCloudTask : AMSTask
{
    CDPUIController *_cdpUIController;
    AMSAuthenticateRequest *_authRequest;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) AMSAuthenticateRequest *authRequest; // @synthesize authRequest=_authRequest;
@property(retain, nonatomic) CDPUIController *cdpUIController; // @synthesize cdpUIController=_cdpUIController;
- (id)_serviceContextWithResults:(id)arg1 parentViewController:(id)arg2;
- (id)performAuthenticate;
- (id)initWithAuthRequest:(id)arg1 presentingViewController:(id)arg2;

@end

