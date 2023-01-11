//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AAGrandSlamSigner, AAUIAccountManager, NSOperationQueue;

@interface FAFamilyEligibilityRequester : NSObject
{
    AAGrandSlamSigner *_grandSlamSigner;
    AAUIAccountManager *_accountManager;
    NSOperationQueue *_networkActivityQueue;
}

- (void).cxx_destruct;
- (id)_appleAccount;
- (id)_accountStore;
- (id)_grandSlamSigner;
- (void)requestFamilyEligibilityWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAccountManager:(id)arg1;
- (id)init;

@end

