//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSFileHandle, NSInputStream, NSObject, NSString;
@protocol OS_dispatch_io, OS_dispatch_queue, OS_dispatch_semaphore;

@interface __NSCFBackgroundDataTask
{
    NSInputStream *_requestBodyStream;
    NSInputStream *_initialStream;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSFileHandle *_readHandle;
    NSObject<OS_dispatch_io> *_pipeIO;
    unsigned long long _bytesRead;
    NSObject<OS_dispatch_semaphore> *_streamOpenedSema;
    _Bool _finishedOpen;
    _Bool _openedStreamDuringNeedNewBodyStream;
    _Bool _streamBased;
    CDUnknownBlockType _streamWriteCompletion;
}

- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)dealloc;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

