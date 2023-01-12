//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDLogicalDeviceContext, CKDXPCConnection;
@protocol CKXPCLogicalDeviceScopedClient;

@interface CKDLogicalDeviceScopedClientProxy : NSObject
{
    _Bool _hasBeenThrottled;
    int _pid;
    CKDXPCConnection *_clientConnection;
    id <CKXPCLogicalDeviceScopedClient> _logicalDeviceScopedClientProxyCreator;
    CKDLogicalDeviceContext *_deviceContext;
}

- (void).cxx_destruct;
@property(nonatomic) __weak CKDLogicalDeviceContext *deviceContext; // @synthesize deviceContext=_deviceContext;
@property(retain, nonatomic) id <CKXPCLogicalDeviceScopedClient> logicalDeviceScopedClientProxyCreator; // @synthesize logicalDeviceScopedClientProxyCreator=_logicalDeviceScopedClientProxyCreator;
@property(nonatomic) __weak CKDXPCConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property _Bool hasBeenThrottled; // @synthesize hasBeenThrottled=_hasBeenThrottled;
- (void)addThrottle:(id)arg1;
- (void)resetThrottles;
- (id)readBytesOfInMemoryAssetContentWithUUID:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 error:(id *)arg4;
- (id)openFileWithOpenInfo:(id)arg1 error:(id *)arg2;
- (void)_getLogicalDeviceScopedClientProxyCreatorSynchronous:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getLogicalDeviceScopedClientProxySynchronous:(_Bool)arg1 errorHandler:(CDUnknownBlockType)arg2 clientProxyHandler:(CDUnknownBlockType)arg3;
- (void)tearDown;
- (_Bool)processIsAttached;
- (id)initWithClientConnection:(id)arg1 deviceContext:(id)arg2;
- (id)description;
- (id)CKPropertiesDescription;

@end
