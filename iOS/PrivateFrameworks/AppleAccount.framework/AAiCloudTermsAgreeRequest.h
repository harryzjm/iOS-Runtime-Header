//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, ACAccountStore;

@interface AAiCloudTermsAgreeRequest
{
    ACAccount *_account;
    ACAccountStore *_accountStore;
}

@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithURLString:(id)arg1 account:(id)arg2;

@end
