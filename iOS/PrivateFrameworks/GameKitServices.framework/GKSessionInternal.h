//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKAutoPeerIDTable, GKConnection, GKList, GKSession, GKTable, GKVoiceChatSessionListener, NSString;
@protocol GKSessionDOOBReceiveHandler, GKSessionDelegate, GKSessionPrivateDelegate;

@interface GKSessionInternal : NSObject
{
    GKSession *_session;
    NSString *domain;
    NSString *serviceType;
    unsigned long long _port;
    NSString *_displayName;
    unsigned int _pid;
    unsigned long long maxPeers;
    struct OpaqueGCKSession *sessionRef;
    struct OpaqueAGPSession *agpSessionRef;
    GKConnection *_connection;
    id _delegate;
    id _privateDelegate;
    id _dataReceiveHandler;
    void *_dataReceiveHandlerContext;
    id <GKSessionDOOBReceiveHandler> _doobReceiveHandler[2];
    void *_doobReceiveHandlerContext[2];
    GKTable *_peerInfoTable;
    GKTable *_peerNameTable;
    GKAutoPeerIDTable *_peerIDTable;
    GKList *_peersAvailable;
    GKList *_peersConnected;
    GKList *_peersForCleanup;
    GKList *_peersPendingIncomingInvitation;
    GKList *_peersPendingOutgoingInvitation;
    struct _opaque_pthread_mutex_t _lock;
    struct _opaque_pthread_mutex_t _delegateLock;
    _Bool _isSearching;
    _Bool _isPublishing;
    _Bool _sessionStarted;
    int _mode;
    _Bool _isBusy;
    NSString *sessionID;
    double disconnectTimeout;
    struct _DNSServiceRef_t *_dnsServiceConnection;
    struct _DNSServiceRef_t *_dnsServiceResolveConnection;
    int _sReset;
    struct _DNSServiceRef_t *_serviceBrowser;
    struct _DNSServiceRef_t *_service;
    struct _DNSServiceRef_t *_oldService;
    _Bool _handleEventsRunning;
    _Bool _stopHandlingEvents;
    _Bool _wifiEnabled;
    _Bool _shutdown;
    GKVoiceChatSessionListener *_voiceChatListener;
}

@property(readonly, retain) GKConnection *connection; // @synthesize connection=_connection;
@property(readonly) int sessionMode; // @synthesize sessionMode=_mode;
@property(readonly) NSString *sessionID; // @synthesize sessionID;
@property(nonatomic) unsigned long long port; // @synthesize port=_port;
@property(nonatomic) struct OpaqueAGPSession *agpSessionRef; // @synthesize agpSessionRef;
@property(nonatomic) struct OpaqueGCKSession *sessionRef; // @synthesize sessionRef;
@property(nonatomic) unsigned long long maxPeers; // @synthesize maxPeers;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType;
@property(copy, nonatomic) NSString *domain; // @synthesize domain;
- (id)voiceChatSessionListener;
- (id)stringForGCKID:(unsigned int)arg1;
- (void)didResolveService:(struct _DNSServiceRef_t *)arg1 forPeer:(id)arg2 hostName:(const char *)arg3 port:(unsigned short)arg4 interface:(unsigned int)arg5 txtLen:(unsigned short)arg6 txtRecord:(const void *)arg7 withError:(int)arg8 moreComing:(_Bool)arg9;
- (void)didLookupHostname:(struct _DNSServiceRef_t *)arg1 forPeer:(id)arg2 hostName:(const char *)arg3 address:(const struct sockaddr_in *)arg4 interface:(unsigned int)arg5 withError:(int)arg6 moreComing:(_Bool)arg7;
- (_Bool)tryConnectToPeer:(id)arg1;
- (void)browse;
- (void)didRemoveService:(const char *)arg1 fromIF:(const char *)arg2 withError:(int)arg3 moreComing:(_Bool)arg4;
- (void)didFindService:(const char *)arg1 fromIF:(const char *)arg2 withError:(int)arg3 moreComing:(_Bool)arg4;
- (void)didUpdateTXTRecordForPeer:(id)arg1 fromIF:(const char *)arg2 txtLen:(unsigned short)arg3 txtRecord:(const void *)arg4 withError:(int)arg5 moreComing:(_Bool)arg6;
- (void)processTXTRecordForPeer:(id)arg1 txtLen:(unsigned short)arg2 txtRecord:(const void *)arg3;
- (void)cleanupExAvailablePeers;
- (_Bool)filterService:(const char *)arg1 withPID:(unsigned int)arg2;
- (void)publish;
- (_Bool)checkDNSConnection;
- (void)handleEvents;
@property double disconnectTimeout;
- (_Bool)isPeerBusy:(id)arg1;
@property _Bool wifiEnabled;
@property(getter=isBusy) _Bool busy;
- (void)stopOldService;
@property(readonly) NSString *peerID;
- (id)peersWithConnectionState:(int)arg1;
@property(getter=isAvailable) _Bool available;
- (void)disconnectFromAllPeers;
- (void)disconnectPeerFromAllPeers:(id)arg1;
- (void)denyConnectionFromPeer:(id)arg1;
- (_Bool)acceptConnectionFromPeer:(id)arg1 error:(id *)arg2;
- (void)cancelConnectToPeer:(id)arg1;
- (void)connectToPeer:(id)arg1 withTimeout:(double)arg2;
- (void)timeoutConnectToPeer:(id)arg1;
- (void)setDataReceiveHandler:(id)arg1 withContext:(void *)arg2;
@property(readonly, nonatomic) id dataReceiveHandler;
- (void)setDOOBReceiveHandler:(id)arg1 withContext:(void *)arg2 inBand:(unsigned int)arg3;
- (void)receiveDOOB:(id)arg1 fromPeer:(id)arg2 inSession:(id)arg3 context:(void *)arg4;
- (_Bool)sendDataToAllPeers:(id)arg1 withDataMode:(int)arg2 error:(id *)arg3;
- (_Bool)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 enableOOB:(_Bool)arg4 error:(id *)arg5;
- (_Bool)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 error:(id *)arg4;
- (_Bool)passesSendDataSanityCheck:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 error:(id *)arg4;
- (_Bool)sendAudioData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 error:(id *)arg4;
- (id)displayNameForPeer:(id)arg1;
@property(readonly) NSString *displayName;
- (void)dealloc;
- (void)reset;
- (id)initWithSessionID:(id)arg1 displayName:(id)arg2 session:(id)arg3 sessionMode:(int)arg4;
- (id)initWithConnection:(id)arg1 session:(id)arg2 delegate:(id)arg3;
- (id)description;
@property id <GKSessionPrivateDelegate> privateDelegate;
@property id <GKSessionDelegate> delegate;
- (void)unlock;
- (void)lock;
- (void)didPublishWithError:(int)arg1;
- (void)stopResolvingAllPeers;
- (id)serviceName;
- (_Bool)parseServiceName:(const char *)arg1 intoDisplayName:(id *)arg2 pid:(unsigned int *)arg3 state:(id *)arg4;
- (void)tellDelegate_networkStatisticsChanged:(id)arg1;
- (void)tellDelegate_updateRelay:(id)arg1;
- (void)tellDelegate_initiateRelay:(id)arg1;
- (void)tellDelegate_peerDidBecomeBusy:(id)arg1;
- (void)tellDelegate_connectionRequestToPeerFailed:(id)arg1;
- (void)tellDelegate_gotInvited:(id)arg1;
- (void)tellDelegate_didReceiveData:(id)arg1;
- (void)tellDelegate_didReceiveBand_RetryICE:(id)arg1;
- (void)tellDelegate_peerDidBecomeUnavailable:(id)arg1;
- (void)tellDelegate_peerDidBecomeAvailable:(id)arg1;
- (void)tellDelegate_isConnectingPeer:(id)arg1;
- (void)tellDelegate_didDisconnectPeer:(id)arg1;
- (void)tellDelegate_didConnectPeer:(id)arg1;
- (void)tellDelegate_sessionDidFailWithError:(id)arg1;
- (void)setDisplayName:(id)arg1 forPeer:(unsigned int)arg2;
- (void)printDictionaries;
- (id)newNSErrorFromGKSessionError:(int)arg1 description:(id)arg2 reason:(id)arg3;
- (id)newNSErrorFromHRESULT:(int)arg1 description:(id)arg2 reason:(id)arg3;
- (_Bool)isShuttingDown;
- (void)sendCallbacksToDelegate:(CDStruct_68f9d01f *)arg1 remotePeer:(unsigned int)arg2;

@end

