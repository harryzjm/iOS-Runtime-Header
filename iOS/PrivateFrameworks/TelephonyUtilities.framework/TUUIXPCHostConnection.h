//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue, TUUIXPCHostConnectionDelegate, TUUIXPCHostDelegate;

__attribute__((visibility("hidden")))
@interface TUUIXPCHostConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    id <TUUIXPCHostConnectionDelegate> _connectionDelegate;
    id <TUUIXPCHostDelegate> _hostDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TUUIXPCHostDelegate> hostDelegate; // @synthesize hostDelegate=_hostDelegate;
@property(nonatomic) __weak id <TUUIXPCHostConnectionDelegate> connectionDelegate; // @synthesize connectionDelegate=_connectionDelegate;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)fetchInCallUIState:(CDUnknownBlockType)arg1;
- (void)handleRedialCommandWhileScreening:(id)arg1;
- (void)shouldHostHandleMRCommand:(unsigned int)arg1 sourceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shouldHostHandleMRCommand:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)ping;
- (id)remoteObjectProxy;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 hostDelegate:(id)arg2 connectionDelegate:(id)arg3 queue:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

