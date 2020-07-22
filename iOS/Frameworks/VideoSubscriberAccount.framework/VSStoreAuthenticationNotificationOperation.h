//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL, VSAuthenticationBulletinOperation, VSIdentityProvider;

@interface VSStoreAuthenticationNotificationOperation
{
    VSIdentityProvider *_identityProvider;
    NSURL *_logoCacheURL;
    VSAuthenticationBulletinOperation *_authenticationBulletinOperation;
}

@property(retain, nonatomic) VSAuthenticationBulletinOperation *authenticationBulletinOperation; // @synthesize authenticationBulletinOperation=_authenticationBulletinOperation;
@property(copy, nonatomic) NSURL *logoCacheURL; // @synthesize logoCacheURL=_logoCacheURL;
@property(readonly, copy, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (id)initWithIdentityProvider:(id)arg1;
- (id)init;

@end

