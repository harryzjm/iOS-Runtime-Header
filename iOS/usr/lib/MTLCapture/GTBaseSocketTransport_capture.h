//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GTSharedMemoryTransport_capture, NSObject;
@protocol OS_dispatch_source;

@interface GTBaseSocketTransport_capture
{
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_source> *_writeSource;
    GTSharedMemoryTransport_capture *_smTransport;
    _Bool _writeSourceIsSuspended;
    _Bool _scheduledReadOnWritableSocket;
}

@property(readonly, nonatomic) GTSharedMemoryTransport_capture *smTransport; // @synthesize smTransport=_smTransport;
- (unsigned int)_nextMessageSerial;
- (_Bool)relayMessageOverSharedMemoryTransport:(id)arg1 error:(id *)arg2;
- (void)destroySharedMemoryTransport;
- (void)_destroySharedMemoryTransport;
- (id)createNewSharedMemoryTransportWithURL:(id)arg1;
- (id)createNewSharedMemoryTransport;
- (void)_invalidate;
- (void)setPrioritizeOutgoingMessages:(_Bool)arg1;
- (_Bool)connected;
- (void)scheduleReadOnWritableSocket;
- (void)runWithSocket:(int)arg1;
- (void)_readAndAccumulateLoop;
- (void)closeSocketDescriptor;
- (long long)_write:(const void *)arg1 size:(unsigned long long)arg2;
- (void)_waitEAGAIN;
- (long long)_read:(void *)arg1 size:(unsigned long long)arg2;
- (id)init;

@end
