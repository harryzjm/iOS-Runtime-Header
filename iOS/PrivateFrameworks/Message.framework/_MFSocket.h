//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFStream, NSArray, NSCondition, NSData, NSInvocation, NSString;

@interface _MFSocket : NSObject
{
    NSCondition *_condition;
    NSString *_protocol;
    NSString *_host;
    NSString *_service;
    struct __CFString *_connectionServiceType;
    NSInvocation *_eventHandler;
    NSArray *_clientCertificates;
    int _lowThroughputCounter;
    int _numTimeoutSecs;
    _Bool _allowsTrustPrompt;
    _Bool _usesOpportunisticSockets;
    _Bool _socketCanRead;
    _Bool _socketCanWrite;
    _Bool _disableEphemeralDiffieHellmanCiphers;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_accountIdentifier;
    NSString *_networkAccountIdentifier;
    MFStream *_stream;
}

@property(retain) MFStream *stream; // @synthesize stream=_stream;
@property(copy, nonatomic) NSString *networkAccountIdentifier; // @synthesize networkAccountIdentifier=_networkAccountIdentifier;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(retain, nonatomic) NSArray *clientCertificates; // @synthesize clientCertificates=_clientCertificates;
@property(nonatomic) _Bool disableEphemeralDiffieHellmanCiphers; // @synthesize disableEphemeralDiffieHellmanCiphers=_disableEphemeralDiffieHellmanCiphers;
@property(nonatomic) _Bool usesOpportunisticSockets; // @synthesize usesOpportunisticSockets=_usesOpportunisticSockets;
@property(nonatomic) _Bool allowsTrustPrompt; // @synthesize allowsTrustPrompt=_allowsTrustPrompt;
@property(nonatomic) int timeout; // @synthesize timeout=_numTimeoutSecs;
- (void)enableThroughputMonitoring:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isCellularConnection;
@property(readonly, nonatomic) NSData *sourceIPAddress;
@property(readonly, nonatomic) unsigned int remotePortNumber;
@property(readonly, nonatomic) NSString *remoteHostname;
- (void)setEventHandler:(id)arg1;
- (long long)readBytes:(char *)arg1 length:(unsigned long long)arg2;
- (long long)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (unsigned int)_bufferedByteCount;
- (_Bool)connectToHost:(id)arg1 withPort:(unsigned int)arg2 service:(id)arg3;
@property(readonly, nonatomic) _Bool isValid;
@property(readonly, nonatomic) _Bool isWritable;
@property(readonly, nonatomic) _Bool isReadable;
- (void)abort;
- (void)dealloc;
- (id)init;
- (void)setConnectionServiceType:(struct __CFString *)arg1;
@property(readonly, nonatomic) NSArray *serverCertificates;
- (_Bool)setSecurityProtocol:(id)arg1;
- (id)securityProtocol;
- (_Bool)_waitForSocketOpenAndFlag:(_Bool *)arg1;
- (_Bool)_startSSLHandshakeWithProtocol:(id)arg1 errorPtr:(id *)arg2;
- (id)_negotiatedProtocolVersion;
- (_Bool)_evaluateTrust:(struct __SecTrust *)arg1 errorPtr:(id *)arg2;
- (void)_setCertificateIsTrusted:(_Bool)arg1 forAccount:(id)arg2;
- (_Bool)_certificateIsTrustedForAccount:(id)arg1;

@end

