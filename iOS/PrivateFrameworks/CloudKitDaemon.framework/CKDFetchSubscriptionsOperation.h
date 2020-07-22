//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDFetchSubscriptionsOperation
{
    _Bool _isFetchAllSubscriptionsOperation;
    NSMutableArray *_subscriptions;
    CDUnknownBlockType _subscriptionFetchedProgressBlock;
    NSArray *_subscriptionIDs;
}

@property(nonatomic) _Bool isFetchAllSubscriptionsOperation; // @synthesize isFetchAllSubscriptionsOperation=_isFetchAllSubscriptionsOperation;
@property(retain, nonatomic) NSArray *subscriptionIDs; // @synthesize subscriptionIDs=_subscriptionIDs;
@property(copy, nonatomic) CDUnknownBlockType subscriptionFetchedProgressBlock; // @synthesize subscriptionFetchedProgressBlock=_subscriptionFetchedProgressBlock;
@property(retain, nonatomic) NSMutableArray *subscriptions; // @synthesize subscriptions=_subscriptions;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_handleSubscriptionFetched:(id)arg1 withID:(id)arg2 responseCode:(id)arg3;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

