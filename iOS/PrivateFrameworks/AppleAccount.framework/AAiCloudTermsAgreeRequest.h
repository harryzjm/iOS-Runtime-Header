//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount;

@interface AAiCloudTermsAgreeRequest
{
    ACAccount *_account;
    _Bool _preferPassword;
}

+ (Class)responseClass;
- (void).cxx_destruct;
@property(nonatomic) _Bool preferPassword; // @synthesize preferPassword=_preferPassword;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)performRequestWithHandler:(CDUnknownBlockType)arg1;
- (id)urlRequest;
- (id)initWithURLString:(id)arg1 account:(id)arg2;

@end
