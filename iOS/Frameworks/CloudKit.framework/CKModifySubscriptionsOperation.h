//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKModifySubscriptionsOperation
{
    NSArray *_subscriptionsToSave;
    NSArray *_subscriptionIDsToDelete;
    CDUnknownBlockType _modifySubscriptionsCompletionBlock;
    NSMutableArray *_savedSubscriptions;
    NSMutableArray *_deletedSubscriptionIDs;
    NSMutableDictionary *_subscriptionsBySubscriptionIDs;
    NSMutableDictionary *_subscriptionErrors;
}

@property(retain, nonatomic) NSMutableDictionary *subscriptionErrors; // @synthesize subscriptionErrors=_subscriptionErrors;
@property(retain, nonatomic) NSMutableDictionary *subscriptionsBySubscriptionIDs; // @synthesize subscriptionsBySubscriptionIDs=_subscriptionsBySubscriptionIDs;
@property(retain, nonatomic) NSMutableArray *deletedSubscriptionIDs; // @synthesize deletedSubscriptionIDs=_deletedSubscriptionIDs;
@property(retain, nonatomic) NSMutableArray *savedSubscriptions; // @synthesize savedSubscriptions=_savedSubscriptions;
@property(copy, nonatomic) CDUnknownBlockType modifySubscriptionsCompletionBlock; // @synthesize modifySubscriptionsCompletionBlock=_modifySubscriptionsCompletionBlock;
@property(copy, nonatomic) NSArray *subscriptionIDsToDelete; // @synthesize subscriptionIDsToDelete=_subscriptionIDsToDelete;
@property(copy, nonatomic) NSArray *subscriptionsToSave; // @synthesize subscriptionsToSave=_subscriptionsToSave;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)activityCreate;
- (id)initWithSubscriptionsToSave:(id)arg1 subscriptionIDsToDelete:(id)arg2;
- (id)init;

@end

