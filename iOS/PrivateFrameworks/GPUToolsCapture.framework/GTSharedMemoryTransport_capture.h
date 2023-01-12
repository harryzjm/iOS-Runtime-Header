//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GTBaseStreamTransport_capture, NSMutableArray, NSURL;

__attribute__((visibility("hidden")))
@interface GTSharedMemoryTransport_capture
{
    void *_outgoingShmem;
    void *_incomingShmem;
    void *_masterSMRegion;
    void *_outgoingBuffer;
    void *_incomingBuffer;
    GTBaseStreamTransport_capture *_relayTransport;
    CDUnknownFunctionPointerType _consumeBytesIMP;
    SEL _consumeBytesSEL;
    unsigned int _currentPacketBytesLeft;
    int _mode;
    _Bool _deferred;
    NSMutableArray *_bufferedMessages;
    char _sendName[64];
    char _receiveName[64];
    unsigned long long _sm_region_size_small;
    unsigned long long _sm_region_size_large;
}

@property(readonly, nonatomic) _Bool deferred; // @synthesize deferred=_deferred;
- (void)_dequeueIncomingMessages;
- (void)_dequeuePacket;
- (void)_relayPacket;
- (void)_accumulateMessageBytes;
- (long long)_read:(void *)arg1 size:(unsigned long long)arg2;
- (void)_copyFromSM:(void *)arg1 size:(unsigned long long)arg2;
- (void)_updateReaderOffset:(unsigned long long)arg1;
- (unsigned int)_nextMessageSerial;
- (long long)_write:(const void *)arg1 size:(unsigned long long)arg2;
- (void)_waitEAGAIN;
- (void)_copyToSM:(const void *)arg1 size:(long long)arg2;
- (unsigned long long)_computeBytesAvailableToRead;
- (unsigned long long)_computeBytesAvailableToWrite;
- (void)_invalidate;
- (_Bool)connected;
- (id)connect;
- (_Bool)_clientConnect:(id *)arg1;
- (_Bool)_serverConnect:(id *)arg1;
- (_Bool)_createAndRunSources:(id *)arg1;
- (void)_setupIOBuffers;
- (_Bool)_openSMRegion:(struct sm_region_header **)arg1 size:(unsigned long long)arg2 name:(const char *)arg3 error:(id *)arg4;
- (_Bool)_initializeSMRegion:(struct sm_region_header **)arg1 size:(unsigned long long)arg2 name:(const char *)arg3 error:(id *)arg4;
- (void)_tearDownSharedMemory;
- (void *)_mapSharedMemoryFile:(int)arg1 size:(unsigned long long)arg2 error:(id *)arg3;
- (unsigned long long)_calculateVMRegionMapSize:(unsigned long long)arg1;
- (id)_getSharedMemoryNameWithSuffix:(id)arg1;
- (_Bool)send:(id)arg1 inReplyTo:(id)arg2 error:(id *)arg3 replyQueue:(id)arg4 timeout:(unsigned long long)arg5 handler:(CDUnknownBlockType)arg6;
- (void)setRelayTransport:(id)arg1;
@property(retain, nonatomic) NSURL *url; // @dynamic url;
- (void)dealloc;
- (id)initWithMode:(int)arg1 initialMessageSerial:(unsigned int)arg2;
- (id)initWithMode:(int)arg1;
- (id)init;

@end

