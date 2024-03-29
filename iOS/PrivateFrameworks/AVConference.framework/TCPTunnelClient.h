//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSMutableData, NSMutableDictionary, NSString, TCPBufferPool;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface TCPTunnelClient : NSObject
{
    int _connectState;
    int _connectedFD;
    int _isChannelBound;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _allocationResponseHandler;
    CDUnknownBlockType _terminationHandler;
    CDUnknownBlockType _bindingResponseHandler;
    CDUnknownBlockType _destroyHandler;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_source> *_writeSource;
    unsigned char _writeSourceSuspended;
    NSObject<OS_dispatch_source> *_timer;
    float _fTimeout;
    NSString *_participantID;
    unsigned short _channelNumber;
    NSMutableDictionary *_reqRespDict;
    NSDictionary *_relayUpdateDict;
    struct tagIPPORT _serverIPPort;
    NSData *_allocateReq;
    NSData *_channelBReq;
    double _allocationTimestamp;
    NSMutableData *_currentlyReadingMessage;
    long long _currentlyReadingDataGoalLength;
    unsigned short _currentMsgType;
    long long _currentPadding;
    char *_writeBuf;
    int _head;
    int _tail;
    TCPBufferPool *_bufferPool;
}

@property(copy) NSString *participantID; // @synthesize participantID=_participantID;
@property(copy) CDUnknownBlockType terminationHandler; // @synthesize terminationHandler=_terminationHandler;
@property(copy) CDUnknownBlockType destroyHandler; // @synthesize destroyHandler=_destroyHandler;
@property(copy) CDUnknownBlockType bindingResponseHandler; // @synthesize bindingResponseHandler=_bindingResponseHandler;
@property(copy) CDUnknownBlockType allocationResponseHandler; // @synthesize allocationResponseHandler=_allocationResponseHandler;
@property(copy) CDUnknownBlockType receiveHandler; // @synthesize receiveHandler=_handler;
- (_Bool)isTunnelSocketClosed;
- (void)closeTunnelSocket;
- (void)unbindChannel;
- (void)vcArg:(id)arg1 sendRealTimeData:(id)arg2 toParticipantID:(id)arg3;
- (_Bool)sendRefreshMsg:(unsigned int)arg1 error:(id *)arg2;
- (_Bool)sendChannelBindingMsgWithDict:(id)arg1 error:(id *)arg2;
- (_Bool)sendAllocateMsg:(id *)arg1;
- (unsigned int)connectionType;
- (void)dealloc;
- (id)initWithRelayRequestDictionary:(id)arg1 withCallID:(unsigned int)arg2 relayType:(unsigned char)arg3 errorCode:(int *)arg4;
- (void)receivedSSLConnectionData:(id)arg1 recordType:(unsigned short)arg2;
- (void)processSocketReadSSL;
- (void)receivedControlData:(id)arg1;
- (void)vcArg:(id)arg1 sendControlData:(id)arg2 isTypeSSL:(_Bool)arg3 withTimeout:(float)arg4 withDetail:(long long)arg5;
- (void)processSocketWrite:(unsigned char)arg1;
- (void)sendTCPData:(const void *)arg1 bufSize:(int)arg2;
- (void)processSocketRead;
- (void)createDispatchTimer:(float)arg1 withDetailedError:(long long)arg2;
- (void)destroyDispatchTimer;
- (void)reportErrorAndTerminate:(long long)arg1 detail:(long long)arg2 returnCode:(long long)arg3 description:(id)arg4 reason:(id)arg5;
- (void)resetConnection;

@end

