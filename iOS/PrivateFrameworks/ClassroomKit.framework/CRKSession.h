//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CATStateMachine, CATTransport, CRKRemoteEndpoint, CRKTransportPreflightOperation, NSDictionary;
@protocol CRKGrowthFunction, CRKSessionDelegate;

@interface CRKSession : NSObject
{
    CATStateMachine *mFSM;
    double mCurrentBackoffInterval;
    _Bool _requiresBeacon;
    id <CRKSessionDelegate> _delegate;
    CRKRemoteEndpoint *_endpoint;
    id <CRKGrowthFunction> _backoffGrowthFunction;
    CATTransport *_transport;
    double _lostBeaconTimeout;
    double _willLoseBeaconWarningTimeout;
    CRKTransportPreflightOperation *_transportPreflightOperation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CRKTransportPreflightOperation *transportPreflightOperation; // @synthesize transportPreflightOperation=_transportPreflightOperation;
@property(nonatomic) double willLoseBeaconWarningTimeout; // @synthesize willLoseBeaconWarningTimeout=_willLoseBeaconWarningTimeout;
@property(nonatomic) double lostBeaconTimeout; // @synthesize lostBeaconTimeout=_lostBeaconTimeout;
@property(retain, nonatomic) CATTransport *transport; // @synthesize transport=_transport;
@property(readonly, nonatomic) id <CRKGrowthFunction> backoffGrowthFunction; // @synthesize backoffGrowthFunction=_backoffGrowthFunction;
@property(nonatomic) _Bool requiresBeacon; // @synthesize requiresBeacon=_requiresBeacon;
@property(readonly) CRKRemoteEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(nonatomic) __weak id <CRKSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CATStateMachine *stateMachine; // @synthesize stateMachine=mFSM;
- (void)processFinishedTransportPreflightOperation:(id)arg1;
- (void)transportPreflightOperationDidFinish:(id)arg1;
- (void)stopPreflightingTransport;
- (void)startPreflightingTransport:(id)arg1;
- (void)resetBackoff;
- (void)backoffDidFinish;
- (void)exitBackoffCanConnect;
- (void)enterBackoffCanConnect;
- (void)enterNoNetwork;
- (void)enterOutOfRange;
- (void)delegateInvalidated;
- (void)delegateDisconnected;
- (void)delegateConnected;
- (void)delegateDidBecomeNotConnectable;
- (void)delegateDidBecomeConnectable;
- (void)delegateDidLoseBeacon;
- (void)delegateWillLoseBeacon;
- (void)cancelConnectionAttempt;
- (id)studentSocketOptions;
- (void)tryConnecting;
- (void)registerDefaults;
- (void)failedToConnect;
- (void)didConnect;
- (void)lostBeacon;
@property(readonly, copy, nonatomic) NSDictionary *stateDictionary;
- (void)rejected;
- (void)invalidate;
- (void)connect;
- (void)lostConnection;
- (void)localWiFiBecameUnavailable;
- (void)localWiFiBecameAvailable;
- (void)foundBeacon;
- (id)initWithEndpoint:(id)arg1;

@end
