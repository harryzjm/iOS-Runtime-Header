//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount;

@interface AMSAuthKitUpdateResult : NSObject
{
    ACAccount *_account;
    unsigned long long _credentialSource;
}

@property(readonly, nonatomic) unsigned long long credentialSource; // @synthesize credentialSource=_credentialSource;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)initWithAccount:(id)arg1 credentialSource:(unsigned long long)arg2;

@end
