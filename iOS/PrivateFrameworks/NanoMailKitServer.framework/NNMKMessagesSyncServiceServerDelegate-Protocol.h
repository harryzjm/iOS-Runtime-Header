//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoMailKitServer/NSObject-Protocol.h>

@class NNMKMessagesSyncServiceServer, NNMKProtoCompactMessagesRequest, NNMKProtoMailboxSelection, NNMKProtoMessageDeletions, NNMKProtoMessageStatusUpdates, NNMKProtoMessagesFilteredOutWarning, NNMKProtoSendMessageRequest, NSString;

@protocol NNMKMessagesSyncServiceServerDelegate <NSObject>
- (void)messagesSyncServiceServer:(NNMKMessagesSyncServiceServer *)arg1 didUpdateMailboxSelection:(NNMKProtoMailboxSelection *)arg2;
- (void)messagesSyncServiceServer:(NNMKMessagesSyncServiceServer *)arg1 didRequestSendMessage:(NNMKProtoSendMessageRequest *)arg2;
- (void)messagesSyncServiceServer:(NNMKMessagesSyncServiceServer *)arg1 didRequestCompactMessages:(NNMKProtoCompactMessagesRequest *)arg2;
- (void)messagesSyncServiceServer:(NNMKMessagesSyncServiceServer *)arg1 didWarnMessagesFilteredOut:(NNMKProtoMessagesFilteredOutWarning *)arg2;
- (void)messagesSyncServiceServer:(NNMKMessagesSyncServiceServer *)arg1 didDeleteMessages:(NNMKProtoMessageDeletions *)arg2;
- (void)messagesSyncServiceServer:(NNMKMessagesSyncServiceServer *)arg1 didUpdateMessagesStatus:(NNMKProtoMessageStatusUpdates *)arg2;
- (void)messagesSyncServiceServerConnectivityChanged:(NNMKMessagesSyncServiceServer *)arg1;
- (void)messagesSyncServiceServerSpaceBecameAvailable:(NNMKMessagesSyncServiceServer *)arg1;
- (void)messagesSyncServiceServer:(NNMKMessagesSyncServiceServer *)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(NSString *)arg2;
- (void)messagesSyncServiceServer:(NNMKMessagesSyncServiceServer *)arg1 didFailSendingProtobufWithIDSIdentifier:(NSString *)arg2 errorCode:(long long)arg3;
@end

