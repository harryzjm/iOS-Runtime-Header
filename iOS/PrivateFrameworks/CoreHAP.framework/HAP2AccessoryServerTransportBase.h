//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAP2AccessoryServerTransportCommon-Protocol.h>

@class HAP2AccessoryServerTransportBaseOperationClose, HAP2PropertyLock, HAP2SerializedOperationQueue, NSObject, NSString;
@protocol HAP2AccessoryServerTransportCommon, OS_dispatch_queue;

@interface HAP2AccessoryServerTransportBase <HAP2AccessoryServerTransportCommon>
{
    unsigned long long _internalState;
    HAP2AccessoryServerTransportBaseOperationClose *_queuedCloseOperation;
    double _maxRequestTimeout;
    HAP2PropertyLock *_propertyLock;
    HAP2SerializedOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) HAP2SerializedOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) HAP2PropertyLock *propertyLock; // @synthesize propertyLock=_propertyLock;
- (void)doUpdateMaxRequestTimeout:(double)arg1;
- (void)didDisconnectWithError:(id)arg1;
- (void)doCloseWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)doSendRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)doOpenWithCompletion:(CDUnknownBlockType)arg1;
- (void)didChangeStateWithError:(id)arg1;
- (void)updateMaxRequestTimeout:(double)arg1;
- (_Bool)mergeWithNewTransport:(id)arg1;
- (id)mimeTypeForWellKnownEndpoint:(unsigned long long)arg1;
- (id)mimeTypeForCharacteristicRequests;
- (id)endpointForCharacteristics:(id)arg1;
- (id)endpointForCharacteristic:(id)arg1;
- (id)wellKnownEndpoint:(unsigned long long)arg1;
- (unsigned long long)protocolFeaturesForVersion:(id)arg1;
- (void)closeWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)openWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <HAP2AccessoryServerTransportCommon> underlyingTransport;
@property(nonatomic) double maxRequestTimeout; // @synthesize maxRequestTimeout=_maxRequestTimeout;
@property(readonly, nonatomic) unsigned long long state;
- (id)initWithOperationQueue:(id)arg1 delegateQueue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
