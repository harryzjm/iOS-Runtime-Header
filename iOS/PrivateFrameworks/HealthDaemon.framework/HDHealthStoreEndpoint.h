//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDHealthStoreEndpointInterface-Protocol.h>
#import <HealthDaemon/_HKXPCExportable-Protocol.h>

@class HDDaemon, HDHealthStoreServer, HDXPCClient, NSString;
@protocol OS_dispatch_queue;

@interface HDHealthStoreEndpoint : NSObject <HDHealthStoreEndpointInterface, _HKXPCExportable>
{
    HDDaemon *_daemon;
    HDXPCClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    HDHealthStoreServer *_server;
}

+ (id)endpointWithClient:(id)arg1 healthDaemon:(id)arg2;
+ (_Bool)_isClientEntitled:(id)arg1 error:(id *)arg2;
+ (_Bool)_isDeviceSupportedWithBehavior:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) HDHealthStoreServer *server; // @synthesize server=_server;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) HDXPCClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) __weak HDDaemon *daemon; // @synthesize daemon=_daemon;
- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)invalidate;
- (void)remote_fetchPluginServiceEndpointWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_serverForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithClient:(id)arg1 daemon:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
