//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ICMusicSubscriptionFairPlayController : NSObject
{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_fairPlaySerialQueue;
    NSMutableDictionary *_subscriptionKeyBagStatusCache;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (void)_handleSubscriptionFairPlayKeyStatusChangedDistributedNotification:(id)arg1;
- (void)stopSubscriptionLeaseForAccountUniqueIdentifier:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)generateSubscriptionLeaseRequestWithAccountUniqueID:(unsigned long long)arg1 transactionType:(unsigned int)arg2 certificateData:(id)arg3 assetIDData:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)generateSubscriptionBagRequestWithAccountUniqueIdentifier:(unsigned long long)arg1 transactionType:(unsigned int)arg2 machineIDData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)importSubscriptionKeyBagData:(id)arg1 leaseInfoData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)importSubscriptionKeyBagData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getKeyStatusListWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getKeyStatusForAccountUniqueIdentifier:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_init;

@end

