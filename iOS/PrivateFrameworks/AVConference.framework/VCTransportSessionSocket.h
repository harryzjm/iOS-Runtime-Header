//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCNetworkAddress;

__attribute__((visibility("hidden")))
@interface VCTransportSessionSocket
{
    int _rtpVFD;
    int _rtcpVFD;
    _Bool _isRTPUsable;
    _Bool _isRTCPUsable;
    _Bool _isSharedSocket;
    struct sockaddr_storage _rtpIPPort;
    unsigned int _rtpIPPortLength;
    struct sockaddr_storage _rtcpIPPort;
    unsigned int _rtcpIPPortLength;
    VCNetworkAddress *_remoteAddress;
    int _networkInterfaceType;
    _Bool _isIPv6;
    unsigned int _networkMTU;
}

- (_Bool)isIPv6;
- (unsigned int)networkMTU;
- (int)networkInterfaceType;
- (int)initializeNetworkInfoWithSocket:(int)arg1;
- (void)initializeInterfaceTypeWithSocket:(int)arg1;
- (void)start;
- (int)createVFD:(int *)arg1 forStreamType:(unsigned int)arg2;
- (int)createAndConfigureVFDForSocket:(int)arg1 packetType:(int)arg2 remoteIP:(struct sockaddr_storage *)arg3 remoteIPLength:(unsigned int)arg4 vfd:(int *)arg5;
- (int)configureParamatersForStreamType:(unsigned int)arg1 socket:(int *)arg2 packetType:(int *)arg3 remoteIP:(struct sockaddr_storage *)arg4 remoteIPLength:(unsigned int *)arg5;
- (int)setBasebandNotificationStreamParamatersForSocket:(int *)arg1 packetType:(int *)arg2 remoteIP:(struct sockaddr_storage *)arg3 remoteIPLength:(unsigned int *)arg4;
- (int)setVideoRTCPStreamParamatersForSocket:(int *)arg1 packetType:(int *)arg2 remoteIP:(struct sockaddr_storage *)arg3 remoteIPLength:(unsigned int *)arg4;
- (int)setVideoRTPStreamParamatersForSocket:(int *)arg1 packetType:(int *)arg2 remoteIP:(struct sockaddr_storage *)arg3 remoteIPLength:(unsigned int *)arg4;
- (int)setAudioRTCPStreamParamatersForSocket:(int *)arg1 packetType:(int *)arg2 remoteIP:(struct sockaddr_storage *)arg3 remoteIPLength:(unsigned int *)arg4;
- (int)setAudioRTPStreamParamatersForSocket:(int *)arg1 packetType:(int *)arg2 remoteIP:(struct sockaddr_storage *)arg3 remoteIPLength:(unsigned int *)arg4;
- (int)setRemoteAddress:(id)arg1 remoteRTCPPort:(int)arg2;
- (int)connectSocket:(int)arg1 remoteAddress:(id)arg2 storage:(struct sockaddr_storage *)arg3;
- (int)updateTransportStream:(struct OpaqueVCTransportStream *)arg1;
- (id)streams;
- (int)createVFD:(int *)arg1 realSocket:(int)arg2 sockAddr:(struct sockaddr_storage *)arg3 length:(unsigned int *)arg4 isUsable:(_Bool *)arg5;
- (void)dealloc;
- (id)initWithRTPSocket:(int)arg1 RTCPSocket:(int)arg2;
- (id)initWithSharedSocket:(int)arg1;
- (id)initWithSocketDictionary:(id)arg1;

@end
