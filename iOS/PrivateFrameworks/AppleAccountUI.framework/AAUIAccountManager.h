//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSDictionary;
@protocol AAUIAccountManagerDelegate;

@interface AAUIAccountManager : NSObject
{
    ACAccountStore *_accountStore;
    struct NSDictionary *_accounts;
    id <AAUIAccountManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <AAUIAccountManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDictionary *accounts; // @synthesize accounts=_accounts;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (struct NSDictionary *)_delegate_accountsForAccountManager;
- (id)grandSlamAccountForService:(id)arg1;
- (id)initWithAccountStore:(id)arg1;
- (id)init;

@end

