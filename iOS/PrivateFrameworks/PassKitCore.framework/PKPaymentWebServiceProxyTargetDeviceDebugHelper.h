//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCListener, PKPaymentWebService, PKPaymentWebServiceLocalProxyTargetDevice, PKPaymentWebServiceRemoteProxyTargetDevice;

@interface PKPaymentWebServiceProxyTargetDeviceDebugHelper : NSObject <NSXPCListenerDelegate>
{
    PKPaymentWebService *_webService;
    NSXPCListener *_remoteListener;
    PKPaymentWebServiceLocalProxyTargetDevice *_localTarget;
    PKPaymentWebServiceRemoteProxyTargetDevice *_remoteTarget;
}

+ (id)webServiceWithProxiedTargetDevice:(id)arg1;
- (void).cxx_destruct;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)localProxyTargetDevice;
- (id)initWithWebService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
