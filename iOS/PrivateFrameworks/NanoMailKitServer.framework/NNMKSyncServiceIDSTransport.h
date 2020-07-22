//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoMailKitServer/IDSServiceDelegate-Protocol.h>
#import <NanoMailKitServer/NNMKSyncServiceTransport-Protocol.h>

@class IDSService, NSString;
@protocol NNMKSyncServiceTransportDelegate;

@interface NNMKSyncServiceIDSTransport : NSObject <IDSServiceDelegate, NNMKSyncServiceTransport>
{
    IDSService *_idsService;
    unsigned long long _connectivityState;
    id <NNMKSyncServiceTransportDelegate> _delegate;
}

@property(nonatomic) __weak id <NNMKSyncServiceTransportDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long connectivityState; // @synthesize connectivityState=_connectivityState;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
- (void).cxx_destruct;
- (unsigned long long)_connectivityState;
- (void)_handleConnectivityChange;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)serviceSpaceDidBecomeAvailable:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 timeout:(double)arg4 allowCloudDelivery:(_Bool)arg5;
- (id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 shortTimeout:(_Bool)arg4 allowCloudDelivery:(_Bool)arg5;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool forceFailureForAllRequests;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool simulateCloudConnectedOnly;
@property(readonly) Class superclass;

@end

