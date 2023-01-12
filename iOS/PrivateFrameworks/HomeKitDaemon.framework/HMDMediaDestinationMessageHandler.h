//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol HMDMediaDestinationMessageHandlerDataSource, HMDMediaDestinationMessageHandlerDelegate;

@interface HMDMediaDestinationMessageHandler
{
    id <HMDMediaDestinationMessageHandlerDataSource> _dataSource;
    id <HMDMediaDestinationMessageHandlerDelegate> _delegate;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property __weak id <HMDMediaDestinationMessageHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDMediaDestinationMessageHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)handleMediaDestinationUpdateSupportedOptionsRequestMessage:(id)arg1;
- (void)handleMediaDestinationUpdateAudioGroupIdentifierRequestMessage:(id)arg1;
- (unsigned long long)supportedOptionsInMessage:(id)arg1 error:(id *)arg2;
- (id)audioGroupIdentifierInMessage:(id)arg1 error:(id *)arg2;
- (void)handleUpdatedDestination:(id)arg1;
- (void)sendRequestToUpdateSupportOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendRequestToUpdateAudioGroupIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 notifications:(id)arg4 dataSource:(id)arg5 delegate:(id)arg6;
- (id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 dataSource:(id)arg4 delegate:(id)arg5;

@end
