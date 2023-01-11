//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSString, NSXPCConnection, PDXPCApplicationInfo;

@interface PDXPCService : NSObject <PDXPCServiceExportedInterface>
{
    struct os_unfair_lock_s _lock;
    NSXPCConnection *_connection;
    NSString *_className;
    _Bool _callbacksSuspended;
    int _remoteProcessIdentifier;
    NSString *_remoteProcessApplicationIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *remoteProcessApplicationIdentifier; // @synthesize remoteProcessApplicationIdentifier=_remoteProcessApplicationIdentifier;
@property(readonly, nonatomic) int remoteProcessIdentifier; // @synthesize remoteProcessIdentifier=_remoteProcessIdentifier;
- (void)serviceSuspended;
- (void)serviceResumed;
@property(readonly, nonatomic) NSString *remoteProcessBundleIdentifier;
@property(readonly, nonatomic) PDXPCApplicationInfo *remoteProcessApplicationInfo;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (void)clearConnectionReference;
- (id)connection;
- (id)initWithConnection:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
