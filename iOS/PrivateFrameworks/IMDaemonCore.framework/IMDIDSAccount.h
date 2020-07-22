//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSAccount;

@interface IMDIDSAccount
{
    IDSAccount *_idsAccount;
}

@property(readonly, retain, nonatomic) IDSAccount *idsAccount; // @synthesize idsAccount=_idsAccount;
- (id)description;
- (_Bool)canMakeDowngradeRoutingChecks;
- (id)accountDefaults;
- (void)writeAccountDefaults:(id)arg1;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1 defaults:(id)arg2 service:(id)arg3 idsAccount:(id)arg4;

@end

