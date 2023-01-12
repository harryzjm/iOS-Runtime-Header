//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAP2AccessoryServerTransportNetServiceDelegate-Protocol.h>
#import <CoreHAP/HAP2CoAPClientDelegate-Protocol.h>

@class HAP2AccessoryServerDiscoveryAccessoryInfo, HMFActivity, NSString;
@protocol HAP2AccessoryServerDiscovery, HAP2AccessoryServerTransportCoAPClientFactory, HAP2AccessoryServerTransportNetService, HAP2AccessoryServerTransportNetServiceFactory, HAP2CoAPClient;

@interface HAP2AccessoryServerTransportCoAP <HAP2CoAPClientDelegate, HAP2AccessoryServerTransportNetServiceDelegate>
{
    CDUnknownBlockType _stateChangeCompletion;
    CDUnknownBlockType _sendRequestCompletion;
    id <HAP2AccessoryServerTransportNetService> _netService;
    HMFActivity *_netServiceResolveActivity;
    id <HAP2CoAPClient> _coapClient;
    unsigned long long _maxTransmitAttempts;
    double _initialACKTimeout;
    NSString *_serviceName;
    NSString *_serviceType;
    NSString *_serviceDomain;
    id <HAP2AccessoryServerDiscovery> _discovery;
    HAP2AccessoryServerDiscoveryAccessoryInfo *_acessoryInfo;
    double _addressResolutionTimeout;
    id <HAP2AccessoryServerTransportNetServiceFactory> _netServiceFactory;
    id <HAP2AccessoryServerTransportCoAPClientFactory> _coapClientFactory;
    struct coap_address_t _ipAddress;
}

- (void).cxx_destruct;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)client:(id)arg1 didReceiveEvent:(id)arg2;
- (void)clientDidDisconnect:(id)arg1 error:(id)arg2;
- (void)doUpdateMaxRequestTimeout:(double)arg1;
- (void)doCloseWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)doSendRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)doOpenWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)mergeWithNewTransport:(id)arg1;
- (id)mimeTypeForCharacteristicRequests;
- (id)mimeTypeForWellKnownEndpoint:(unsigned long long)arg1;
- (id)endpointForCharacteristics:(id)arg1;
- (id)endpointForCharacteristic:(id)arg1;
- (id)wellKnownEndpoint:(unsigned long long)arg1;
- (unsigned long long)protocolFeaturesForVersion:(id)arg1;
- (id)underlyingTransport;
- (id)initWithServiceName:(id)arg1 type:(id)arg2 domain:(id)arg3 operationQueue:(id)arg4;
- (id)initWithAccessoryInfo:(id)arg1 discovery:(id)arg2 operationQueue:(id)arg3;
- (id)initWithOperationQueue:(id)arg1 delegateQueue:(id)arg2 serviceName:(id)arg3 serviceType:(id)arg4 serviceDomain:(id)arg5 addressResolutionTimeout:(double)arg6 discovery:(id)arg7 accessoryInfo:(id)arg8 coapClient:(id)arg9 netServiceFactory:(id)arg10 coapClientFactory:(id)arg11;
- (id)initWithOperationQueue:(id)arg1 delegateQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
