//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, AMSUIWebClientContext, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebAccountAction
{
    ACAccount *_account;
    NSDictionary *_accountObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *accountObject; // @synthesize accountObject=_accountObject;
@property(copy, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)runAction;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) AMSUIWebClientContext *context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

