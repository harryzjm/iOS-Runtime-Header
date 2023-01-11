//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CKFetchUserQuotaOperationCallbacks;

__attribute__((visibility("hidden")))
@interface CKDFetchUserQuotaOperation
{
    unsigned long long _quotaAvailable;
}

@property(nonatomic) unsigned long long quotaAvailable; // @synthesize quotaAvailable=_quotaAvailable;
- (void)main;
- (int)operationType;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

// Remaining properties
@property(retain, nonatomic) id <CKFetchUserQuotaOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;

@end
