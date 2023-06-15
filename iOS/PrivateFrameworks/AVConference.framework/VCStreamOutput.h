//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCStreamOutput
{
    long long _streamToken;
    struct opaqueVCRemoteImageQueue *_remoteQueue;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    int _clientProcessID;
    struct __CFDictionary *_attributes;
    id _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    _Bool _isClientInProcess;
    _Bool _useFigRemoteQueue;
    struct __CFAllocator *_backingBufferAllocator;
}

@property(readonly) struct __CFAllocator *backingBufferAllocator; // @synthesize backingBufferAllocator=_backingBufferAllocator;
@property(readonly) _Bool isClientInProcess; // @synthesize isClientInProcess=_isClientInProcess;
@property(readonly, nonatomic) long long streamToken; // @synthesize streamToken=_streamToken;
- (int)processID;
- (void)didUpdateAttachments:(struct __CFDictionary *)arg1;
- (void)didSuspend:(_Bool)arg1;
- (void)didStall:(_Bool)arg1;
- (void)didReceiveSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)didInvalidate;
- (void)didDegrade:(_Bool)arg1;
- (void)didPause:(_Bool)arg1;
- (_Bool)initXPCCommandQueue;
- (id)copyXpcSenderQueue;
- (_Bool)createRemoteQueue;
- (void)dealloc;
- (void)invalidate;
- (id)initWithStreamToken:(long long)arg1 clientProcessID:(int)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

