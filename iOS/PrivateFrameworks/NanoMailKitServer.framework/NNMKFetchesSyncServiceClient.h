//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol NNMKFetchesSyncServiceClientDelegate;

@interface NNMKFetchesSyncServiceClient
{
    id <NNMKFetchesSyncServiceClientDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <NNMKFetchesSyncServiceClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (id)notifyCompanionAboutWebKitStatus:(id)arg1;
- (id)notifyInitialSyncFinished:(id)arg1;
- (id)requestHaltSync:(id)arg1;
- (id)requestFullSync:(id)arg1;
- (id)requestContent:(id)arg1 highPriority:(_Bool)arg2;
- (void)requestMoreMessagesForConversation:(id)arg1;
- (id)requestMoreMessagesInBatch:(id)arg1;
- (id)requestFetch:(id)arg1;
- (id)initWithQueue:(id)arg1;

@end
