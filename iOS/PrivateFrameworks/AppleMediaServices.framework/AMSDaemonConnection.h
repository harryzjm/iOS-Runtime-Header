//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSDaemonConnection : NSObject
{
    NSXPCConnection *_sharedConnection;
    NSObject<OS_dispatch_queue> *_sharedConnectionAccessQueue;
    NSMutableSet *_activePromises;
    NSMutableArray *_interruptionHandlers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *interruptionHandlers; // @synthesize interruptionHandlers=_interruptionHandlers;
@property(readonly, nonatomic) NSMutableSet *activePromises; // @synthesize activePromises=_activePromises;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedConnectionAccessQueue; // @synthesize sharedConnectionAccessQueue=_sharedConnectionAccessQueue;
@property(retain, nonatomic) NSXPCConnection *sharedConnection; // @synthesize sharedConnection=_sharedConnection;
- (void)_handleInvalidation;
- (void)_handleInterruption;
- (void)_checkOutPromise:(id)arg1;
- (void)_checkInPromise:(id)arg1;
- (id)_connectionProxyForAsync:(_Bool)arg1 accessBlock:(CDUnknownBlockType)arg2;
- (id)securityServiceProxyWithDelegate:(id)arg1;
- (id)pushNotificationService;
- (id)purchaseServiceProxy;
- (id)fraudReportServiceProxy;
- (id)deviceMessengerProxyWithDelegate:(id)arg1;
- (id)cookieServiceProxy;
- (id)callService:(id)arg1 then:(CDUnknownBlockType)arg2;
- (void)addInterruptionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

