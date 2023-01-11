//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BLTSendQueueSerializer, NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BLTSettingsSendSerializer
{
    NSObject<OS_dispatch_queue> *_queue;
    BLTSendQueueSerializer *_queueSerializer;
    NSMutableArray *_completionHandlers;
    NSMutableDictionary *_ackHandlers;
    CDUnknownBlockType _acknowledgementBlock;
    unsigned long long _ackHandlerCount;
    unsigned long long _responseCount;
}

- (void).cxx_destruct;
- (void)sendNowWithSent:(CDUnknownBlockType)arg1 withAcknowledgement:(CDUnknownBlockType)arg2 withTimeout:(id)arg3;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 onlyOneFor:(id)arg5 didSend:(CDUnknownBlockType)arg6 andResponse:(CDUnknownBlockType)arg7 spoolToFile:(_Bool)arg8;
- (void)handleFileURL:(id)arg1;
- (id)init;

@end
