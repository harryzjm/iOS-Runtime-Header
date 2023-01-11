//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSURLProtocolDialogHandling-Protocol.h>

@class ACAccount, NSDictionary, NSError, NSString;

__attribute__((visibility("hidden")))
@interface AMSURLProtocolAuthorizationDialog <AMSURLProtocolDialogHandling>
{
    _Bool _authorizationIsForced;
    ACAccount *_authenticatedAccount;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool authorizationIsForced; // @synthesize authorizationIsForced=_authorizationIsForced;
@property(readonly, nonatomic) ACAccount *authenticatedAccount; // @synthesize authenticatedAccount=_authenticatedAccount;
- (void).cxx_destruct;
- (_Bool)_shouldAuthenticateForButton:(id)arg1;
- (id)_findActionableButton;
- (id)_authenticateWithError:(id *)arg1 dialogOptions:(long long)arg2;
- (id)runDialog;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *dialogDictionary;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

