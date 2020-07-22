//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NNMKSyncController;
@protocol NNMKResendSchedulerDelegate;

@interface NNMKResendScheduler : NSObject
{
    unsigned long long _initialSyncResendInterval;
    id <NNMKResendSchedulerDelegate> _delegate;
    NNMKSyncController *_syncController;
}

@property(retain, nonatomic) NNMKSyncController *syncController; // @synthesize syncController=_syncController;
@property(nonatomic) __weak id <NNMKResendSchedulerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long initialSyncResendInterval; // @synthesize initialSyncResendInterval=_initialSyncResendInterval;
- (void).cxx_destruct;
- (void)_resendSendingProgressForComposedMessageWithId:(id)arg1 forIDSIdentifier:(id)arg2 newResendInterval:(unsigned long long)arg3;
- (void)_resendPendingAccountWithIds:(id)arg1 forIDSIdentifier:(id)arg2 newResendInterval:(unsigned long long)arg3;
- (void)_resendPendingMessageContentWithId:(id)arg1 sentBecauseUserRequested:(_Bool)arg2 idsIdentifier:(id)arg3 newResendInterval:(unsigned long long)arg4;
- (void)_resendPendingMessagesWithIds:(id)arg1 forIDSIdentifier:(id)arg2 newResendInterval:(unsigned long long)arg3;
- (void)_resendInitialSyncWithIDSIdentifier:(id)arg1 newResendInterval:(unsigned long long)arg2 mailboxIds:(id)arg3;
- (void)_resendObjectIds:(id)arg1 type:(id)arg2 resendInterval:(unsigned long long)arg3 idsIdentifier:(id)arg4;
- (void)_scheduleIdsIdentifierForResend:(id)arg1 currentResendInterval:(unsigned long long)arg2 newResendInterval:(unsigned long long)arg3 errorCode:(long long)arg4;
- (void)_failPendingComposedMessages;
- (void)_executePendingResendsAndContentRequests;
- (id)deviceRegistry;
- (void)resetInitialSyncResendInterval;
- (id)objectIdsForPendingIDSIdentifier:(id)arg1;
- (id)messageTypeForIDSIdentifier:(id)arg1;
- (void)forceRetryingAllPendingIDSMessages;
- (void)deletePendingIDSMessagesForMailboxId:(id)arg1;
- (void)handleIDSMessageSentSuccessfullyWithId:(id)arg1;
- (void)handleIDSMessageFailedWithId:(id)arg1 errorCode:(long long)arg2;
- (void)resendObjectsForIDSIdentifier:(id)arg1;
- (void)registerIDSIdentifier:(id)arg1 objectIds:(id)arg2 type:(id)arg3 resendInterval:(unsigned long long)arg4;

@end

