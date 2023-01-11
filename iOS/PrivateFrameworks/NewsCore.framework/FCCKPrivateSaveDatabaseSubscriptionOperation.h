//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKNotificationInfo, NSString;

@interface FCCKPrivateSaveDatabaseSubscriptionOperation
{
    NSString *_subscriptionID;
    CKNotificationInfo *_notificationInfo;
    CDUnknownBlockType _saveDatabaseSubscriptionCompletionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType saveDatabaseSubscriptionCompletionBlock; // @synthesize saveDatabaseSubscriptionCompletionBlock=_saveDatabaseSubscriptionCompletionBlock;
@property(copy, nonatomic) CKNotificationInfo *notificationInfo; // @synthesize notificationInfo=_notificationInfo;
@property(copy, nonatomic) NSString *subscriptionID; // @synthesize subscriptionID=_subscriptionID;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;

@end
