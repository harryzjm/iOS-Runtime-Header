//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SystemStatus/STDynamicActivityAttributionServerHandle-Protocol.h>
#import <SystemStatus/STDynamicAttributionXPCClientProtocol-Protocol.h>

@class NSMutableSet, NSString, NSXPCConnection;

@interface STDynamicAttributionXPCServerHandle : NSObject <STDynamicAttributionXPCClientProtocol, STDynamicActivityAttributionServerHandle>
{
    struct os_unfair_lock_s _lock;
    NSXPCConnection *_lock_connection;
    CDUnknownBlockType _lock_connectionProvider;
    NSMutableSet *_lock_clients;
}

+ (id)sharedMachServiceServerHandle;
- (void).cxx_destruct;
- (void)currentAttributionsDidChange:(id)arg1;
- (void)unsubscribeFromUpdates:(id)arg1;
- (void)subscribeToUpdates:(id)arg1;
- (void)setAttributionStringWithFormat:(id)arg1 maskingClientAuditToken:(CDStruct_4c969caf)arg2 forClient:(id)arg3;
- (void)setLocalizableAttributionKey:(id)arg1 andApplication:(id)arg2 forClient:(id)arg3;
- (id)_lock_remoteProxy;
- (id)initWithXPCConnectionProvider:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
