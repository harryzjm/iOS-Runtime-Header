//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDHealthStoreEndpointInterface-Protocol.h>
#import <HealthDaemon/_HKXPCExportable-Protocol.h>

@class HDDaemon, HDHealthStoreServer, HDXPCClient, HKProfileIdentifier, NSString;
@protocol OS_dispatch_queue;

@interface HDHealthStoreEndpoint : NSObject <HDHealthStoreEndpointInterface, _HKXPCExportable>
{
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    HDDaemon *_daemon;
    HDXPCClient *_client;
    HDHealthStoreServer *_server;
}

+ (id)endpointWithClient:(id)arg1 healthDaemon:(id)arg2;
+ (_Bool)_isClientEntitled:(id)arg1 error:(id *)arg2;
+ (_Bool)_isDeviceSupportedWithBehavior:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) HDHealthStoreServer *server; // @synthesize server=_server;
@property(readonly, nonatomic) HDXPCClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) __weak HDDaemon *daemon; // @synthesize daemon=_daemon;
- (void)connectionInvalidated;
- (void)connectionConfigured;
- (id)remoteInterface;
- (id)exportedInterface;
@property(readonly, nonatomic) HKProfileIdentifier *profileIdentifier;
- (void)invalidate;
- (_Bool)_validateAccessToProfile:(id)arg1 byClient:(id)arg2;
- (_Bool)_validateSourceBundleIdentifier:(id)arg1 client:(id)arg2 error:(id *)arg3;
- (void)remote_serverForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithClient:(id)arg1 daemon:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
