//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VSAsyncOperation.h"

@class NSArray, VSAccountStore, VSOptional;

__attribute__((visibility("hidden")))
@interface VSCredentialSaveOperation : VSAsyncOperation
{
    VSOptional *_result;
    NSArray *_unsavedAccounts;
    VSAccountStore *_accountStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(copy, nonatomic) NSArray *unsavedAccounts; // @synthesize unsavedAccounts=_unsavedAccounts;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
- (void)executionDidBegin;
- (void)_didSaveAccounts:(id)arg1 withResult:(_Bool)arg2 error:(id)arg3;
- (id)initWithUnsavedAccounts:(id)arg1 accountStore:(id)arg2;
- (id)init;

@end

