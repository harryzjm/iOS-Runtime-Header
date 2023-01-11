//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BoardServices/BSInvalidatable-Protocol.h>
#import <BoardServices/BSXPCServiceConnectionListenerConfiguring-Protocol.h>
#import <BoardServices/BSXPCServiceConnectionParent-Protocol.h>

@class BSServiceQuality, NSHashTable, NSString;
@protocol OS_xpc_object;

@interface BSXPCServiceConnectionListener : NSObject <BSXPCServiceConnectionListenerConfiguring, BSXPCServiceConnectionParent, BSInvalidatable>
{
    NSString *_serviceName;
    unsigned long long _unique;
    NSString *_proem;
    struct os_unfair_lock_s _lock;
    NSString *_lock_debugDesc;
    NSString *_config_eDesc;
    BSServiceQuality *_config_qos;
    CDUnknownBlockType _lock_connectionHandler;
    CDUnknownBlockType _lock_errorHandler;
    NSObject<OS_xpc_object> *_lock_listener;
    NSHashTable *_lock_childConnections;
    NSObject<OS_xpc_object> *_lock_endpoint;
    _Bool _lock_nonLaunching;
    _Bool _lock_activated;
    _Bool _lock_invalidated;
    _Bool _lock_clientInvalidated;
}

- (void).cxx_destruct;
- (void)_invalidateChildConnection:(id)arg1;
@property(readonly, nonatomic, getter=_isClientInvalidated) _Bool _clientInvalidated;
@property(readonly, nonatomic, getter=_isInvalidated) _Bool _invalidated;
- (void)setErrorHandler:(CDUnknownBlockType)arg1;
- (void)setConnectionHandler:(CDUnknownBlockType)arg1;
- (void)setServiceQuality:(id)arg1;
- (void)setEndpointDescription:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
