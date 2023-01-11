//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AASigningSession, ACAccount, NSDictionary;

@interface AALoginOrCreateDelegatesRequest
{
    ACAccount *_account;
    NSDictionary *_parameters;
    AASigningSession *_signingSession;
}

+ (Class)responseClass;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)urlString;
- (id)initWithAccount:(id)arg1 parameters:(id)arg2 signingSession:(id)arg3;

@end
