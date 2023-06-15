//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAPSecuritySessionEncryption, HMDDataStreamControlProtocol, HMFTimer, NSMapTable, NSMutableArray, NSMutableSet, NSString;
@protocol HMDDataStreamDelegate, HMDDataStreamTransport, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDDataStream : NSObject
{
    _Bool _active;
    _Bool _firstMessageReceived;
    id <HMDDataStreamDelegate> _delegate;
    NSString *_logIdentifier;
    id <HMDDataStreamTransport> _transport;
    HAPSecuritySessionEncryption *_sessionEncryption;
    NSMapTable *_protocols;
    HMDDataStreamControlProtocol *_controlProtocol;
    HMFTimer *_connectionTimer;
    HMFTimer *_helloMessageResponseTimer;
    NSObject<OS_dispatch_queue> *_workQueue;
    unsigned long long _nextRequestIdentifier;
    NSMutableSet *_pendingRequests;
    NSMutableArray *_pendingEvents;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *pendingEvents; // @synthesize pendingEvents=_pendingEvents;
@property(readonly, nonatomic) NSMutableSet *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(nonatomic) unsigned long long nextRequestIdentifier; // @synthesize nextRequestIdentifier=_nextRequestIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) HMFTimer *helloMessageResponseTimer; // @synthesize helloMessageResponseTimer=_helloMessageResponseTimer;
@property(retain, nonatomic) HMFTimer *connectionTimer; // @synthesize connectionTimer=_connectionTimer;
@property(nonatomic) _Bool firstMessageReceived; // @synthesize firstMessageReceived=_firstMessageReceived;
@property(retain, nonatomic) HMDDataStreamControlProtocol *controlProtocol; // @synthesize controlProtocol=_controlProtocol;
@property(retain, nonatomic) NSMapTable *protocols; // @synthesize protocols=_protocols;
@property(retain, nonatomic) HAPSecuritySessionEncryption *sessionEncryption; // @synthesize sessionEncryption=_sessionEncryption;
@property(retain, nonatomic) id <HMDDataStreamTransport> transport; // @synthesize transport=_transport;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(nonatomic) __weak id <HMDDataStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (void)timerDidFire:(id)arg1;
- (void)transport:(id)arg1 didReceiveRawFrame:(id)arg2;
- (void)transportDidOpen:(id)arg1;
- (void)transportDidClose:(id)arg1;
- (void)transport:(id)arg1 didFailWithError:(id)arg2;
- (void)setTrafficClass:(unsigned long long)arg1;
- (void)protocolDidUpdateActiveStatus:(id)arg1;
- (void)sendRequestForProtocol:(id)arg1 topic:(id)arg2 payload:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendRequestForProtocol:(id)arg1 topic:(id)arg2 identifier:(unsigned long long)arg3 payload:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendResponseForRequestHeader:(id)arg1 payload:(id)arg2 status:(unsigned short)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendEventForProtocol:(id)arg1 topic:(id)arg2 payload:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)protocolDelegateHandle;
- (id)protocolWithName:(id)arg1;
- (void)addProtocol:(id)arg1 name:(id)arg2;
- (void)close;
- (void)connect;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (id)initWithTransport:(id)arg1 sessionEncryption:(id)arg2 workQueue:(id)arg3 logIdentifier:(id)arg4 connectionTimer:(id)arg5 helloMessageResponseTimer:(id)arg6;
- (id)initWithTransport:(id)arg1 sessionEncryption:(id)arg2 workQueue:(id)arg3 logIdentifier:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

