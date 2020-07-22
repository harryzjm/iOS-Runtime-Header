//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class NSDictionary, NSInputStream, NSMutableDictionary, NSNumber, NSOutputStream, NSString;
@protocol OS_dispatch_queue;

@interface _IDSDeviceConnection : NSObject <IDSDaemonListenerProtocol>
{
    NSString *_nsuuid;
    _Bool _isDefaultPairedDevice;
    NSString *_service;
    NSString *_streamName;
    NSString *_serviceToken;
    NSString *_connectionUUID;
    int _socket;
    unsigned long long _mtu;
    CDUnknownBlockType _openSocketCompletionHandler;
    NSObject<OS_dispatch_queue> *_openSocketCompletionHandlerQueue;
    NSString *_openSocketCompletionHandlerID;
    NSInputStream *_inputStreamForSocket;
    NSOutputStream *_outputStreamForSocket;
    _Bool _hasTimedOut;
    NSNumber *_clientTimeout;
    NSMutableDictionary *_awdMetrics;
}

- (void).cxx_destruct;
- (id)deviceConnectionKey;
- (void)_daemonDied:(id)arg1;
- (void)_cleanupCompletionBlock;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;
- (void)_close;
- (void)close;
- (_Bool)updateConnectionWithOptions:(id)arg1 error:(id *)arg2;
- (void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
@property(readonly, nonatomic) NSDictionary *metrics;
@property(readonly, nonatomic) unsigned long long mtu;
@property(readonly, nonatomic) NSOutputStream *outputStream;
@property(readonly, nonatomic) NSInputStream *inputStream;
@property(readonly, nonatomic) int socket;
- (void)_connect;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

