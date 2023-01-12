//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSInputStream, NSObject, NSOutputStream, NSString, NSURLSessionStreamTask;
@protocol OS_dispatch_queue;

@interface NSProxyConnectionStreamTask
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isConnected;
    NSString *_host;
    int _port;
    _Bool _dataAvailableForReading;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSURLSessionStreamTask *_streamTask;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (void)write:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)read:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithHost:(id)arg1 port:(unsigned short)arg2 queue:(id)arg3 configuration:(id)arg4;
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

