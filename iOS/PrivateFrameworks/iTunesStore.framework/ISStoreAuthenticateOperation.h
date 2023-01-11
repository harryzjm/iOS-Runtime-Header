//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/SSAuthenticateRequestDelegate-Protocol.h>

@class NSString, SSAuthenticateResponse, SSAuthenticationContext, SSMutableAuthenticationContext;

@interface ISStoreAuthenticateOperation <SSAuthenticateRequestDelegate>
{
    SSMutableAuthenticationContext *_authenticationContext;
    SSAuthenticateResponse *_authenticateResponse;
    id _parentViewController;
}

+ (_Bool)_copyErrorForAuthenticateResponse:(id)arg1 error:(id *)arg2;
@property(retain) id parentViewController; // @synthesize parentViewController=_parentViewController;
- (void)_handleAuthenticateResponse:(id)arg1;
- (id)uniqueKey;
- (void)run;
- (id)authenticatedAccountDSID;
@property(readonly) SSAuthenticationContext *authenticationContext;
@property(readonly) SSAuthenticateResponse *authenticateResponse;
- (void)dealloc;
- (id)initWithAuthenticationContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

