//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount;

__attribute__((visibility("hidden")))
@interface FMOwnerAccount_ios
{
    ACAccount *_account;
}

@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)hostNameOfType:(long long)arg1;
- (id)tokenOfType:(long long)arg1;
- (id)dataclassProperties;
- (id)lastName;
- (id)firstName;
- (id)username;
- (id)personId;
- (void)initializeAccount;
- (void)accountChanged;
- (void)dealloc;
- (id)init;

@end
