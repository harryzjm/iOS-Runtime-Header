//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>

@class NSData, NWAddressEndpoint, NWInterface;

@interface NEIPSecSA : NSObject <NSCopying>
{
    _Bool _natTraversalEnabled;
    _Bool _natDetectedOnPeer;
    _Bool _natKeepaliveEnabled;
    _Bool _natKeepaliveOffloadEnabled;
    unsigned short _natTraversalPort;
    unsigned int _spi;
    int _direction;
    int _mode;
    int _protocol;
    unsigned int _replayWindowSize;
    int _encryptionAlgorithm;
    int _authenticationAlgorithm;
    unsigned int _internalSAID;
    NWAddressEndpoint *_localAddress;
    NWAddressEndpoint *_remoteAddress;
    NWInterface *_boundInterface;
    NWInterface *_tunnelInterface;
    unsigned long long _lifetimeSeconds;
    NSData *_encryptionKey;
    NSData *_authenticationKey;
    unsigned long long _natKeepaliveIntervalSeconds;
    unsigned long long _natKeepaliveOffloadIntervalSeconds;
}

@property unsigned int internalSAID; // @synthesize internalSAID=_internalSAID;
@property unsigned short natTraversalPort; // @synthesize natTraversalPort=_natTraversalPort;
@property unsigned long long natKeepaliveOffloadIntervalSeconds; // @synthesize natKeepaliveOffloadIntervalSeconds=_natKeepaliveOffloadIntervalSeconds;
@property unsigned long long natKeepaliveIntervalSeconds; // @synthesize natKeepaliveIntervalSeconds=_natKeepaliveIntervalSeconds;
@property _Bool natKeepaliveOffloadEnabled; // @synthesize natKeepaliveOffloadEnabled=_natKeepaliveOffloadEnabled;
@property _Bool natKeepaliveEnabled; // @synthesize natKeepaliveEnabled=_natKeepaliveEnabled;
@property _Bool natDetectedOnPeer; // @synthesize natDetectedOnPeer=_natDetectedOnPeer;
@property _Bool natTraversalEnabled; // @synthesize natTraversalEnabled=_natTraversalEnabled;
@property(retain) NSData *authenticationKey; // @synthesize authenticationKey=_authenticationKey;
@property int authenticationAlgorithm; // @synthesize authenticationAlgorithm=_authenticationAlgorithm;
@property(retain) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property int encryptionAlgorithm; // @synthesize encryptionAlgorithm=_encryptionAlgorithm;
@property unsigned long long lifetimeSeconds; // @synthesize lifetimeSeconds=_lifetimeSeconds;
@property unsigned int replayWindowSize; // @synthesize replayWindowSize=_replayWindowSize;
@property(retain) NWInterface *tunnelInterface; // @synthesize tunnelInterface=_tunnelInterface;
@property(retain) NWInterface *boundInterface; // @synthesize boundInterface=_boundInterface;
@property(retain) NWAddressEndpoint *remoteAddress; // @synthesize remoteAddress=_remoteAddress;
@property(retain) NWAddressEndpoint *localAddress; // @synthesize localAddress=_localAddress;
@property int protocol; // @synthesize protocol=_protocol;
@property int mode; // @synthesize mode=_mode;
@property(readonly) int direction; // @synthesize direction=_direction;
@property unsigned int spi; // @synthesize spi=_spi;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (id)createDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initInboundSA;
- (id)initOutboundSAWithSPI:(unsigned int)arg1;

@end
