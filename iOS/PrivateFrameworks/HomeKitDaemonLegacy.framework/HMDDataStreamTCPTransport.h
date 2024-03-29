//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDDataStreamFrameReader, HMFNetAddress, NSString;
@protocol HMDDataStreamTransportDelegate, HMDNetworkConnection, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDDataStreamTCPTransport : NSObject
{
    _Bool _connected;
    long long _remotePort;
    int _schedulingMode;
    id <HMDDataStreamTransportDelegate> delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFNetAddress *_remoteAddress;
    id <HMDNetworkConnection> _tcpConnection;
    HMDDataStreamFrameReader *_byteReader;
    NSString *_logIdentifier;
    CDUnknownBlockType _connectionFactory;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType connectionFactory; // @synthesize connectionFactory=_connectionFactory;
@property(readonly, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly, nonatomic) HMDDataStreamFrameReader *byteReader; // @synthesize byteReader=_byteReader;
@property(retain, nonatomic) id <HMDNetworkConnection> tcpConnection; // @synthesize tcpConnection=_tcpConnection;
@property(readonly, nonatomic) HMFNetAddress *remoteAddress; // @synthesize remoteAddress=_remoteAddress;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak id <HMDDataStreamTransportDelegate> delegate; // @synthesize delegate;
- (void)setTrafficClass:(unsigned long long)arg1;
- (void)sendRawFrame:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)close;
- (void)_closeWithError:(id)arg1;
- (void)_doReceive;
- (void)_consumeReceivedData:(id)arg1;
- (void)_stopWithError:(id)arg1;
- (void)_start;
- (void)_registerForConnectionEvents;
- (void)_handleReadClose;
- (void)connect;
- (id)_createTcpConnection;
- (void)dealloc;
- (id)initWithAddress:(id)arg1 port:(long long)arg2 targetQueue:(id)arg3 logIdentifier:(id)arg4;
- (id)initWithAddress:(id)arg1 port:(long long)arg2 workQueue:(id)arg3 logIdentifier:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

