//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PBBridgeSupport/IDSServiceDelegate-Protocol.h>

@class IDSService, NSMutableDictionary, NSString, NSTimer;

@interface PBBridgeIDSServiceDelegate : NSObject <IDSServiceDelegate>
{
    _Bool _shouldSuppressTransportReachabilityTimeout;
    IDSService *_service;
    NSTimer *_transportReachabilityTimer;
    NSMutableDictionary *_inflightMessages;
    NSMutableDictionary *_pendingMessages;
}

@property(retain, nonatomic) NSMutableDictionary *pendingMessages; // @synthesize pendingMessages=_pendingMessages;
@property(retain, nonatomic) NSMutableDictionary *inflightMessages; // @synthesize inflightMessages=_inflightMessages;
@property(retain, nonatomic) NSTimer *transportReachabilityTimer; // @synthesize transportReachabilityTimer=_transportReachabilityTimer;
@property(nonatomic) _Bool shouldSuppressTransportReachabilityTimeout; // @synthesize shouldSuppressTransportReachabilityTimeout=_shouldSuppressTransportReachabilityTimeout;
@property(retain, nonatomic) IDSService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (id)customDescriptionOfMessageType:(unsigned short)arg1;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)reportConnectionForService:(id)arg1 accounts:(id)arg2 devices:(id)arg3;
- (void)transportBecameUnreachable;
- (void)transportBecameReachable;
- (void)resetTransportReachabilityTimer;
- (void)cancelReachabilityTimer;
- (void)startReachabilityTimer;
- (void)checkReachability;
- (_Bool)connectionStateWithDevices:(id)arg1 accounts:(id)arg2;
- (id)sendProtoBuf:(id)arg1 service:(id)arg2 priority:(long long)arg3 responseIdentifier:(id)arg4 expectsResponse:(_Bool)arg5 retryCount:(long long)arg6 retryInterval:(double)arg7;
- (id)_sendProtoBuf:(id)arg1 service:(id)arg2 priority:(long long)arg3 responseIdentifier:(id)arg4 expectsResponse:(_Bool)arg5;
- (id)serviceIdentifier;
- (void)setupServiceMessageSelectorMappings;
- (void)endSetupTransaction;
- (void)beginSetupTransaction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

