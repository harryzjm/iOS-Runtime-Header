//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol NNMKAccountsSyncServiceClientDelegate;

@interface NNMKAccountsSyncServiceClient
{
    id <NNMKAccountsSyncServiceClientDelegate> _delegate;
}

@property(nonatomic) __weak id <NNMKAccountsSyncServiceClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (id)sendAccountAuthenticationStatus:(id)arg1;
- (id)updateAccountSourceTypeForAccount:(id)arg1;
- (id)initWithQueue:(id)arg1;

@end

