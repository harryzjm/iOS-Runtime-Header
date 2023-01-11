//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NSPServerCommands-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface NSPServerClient : NSObject <NSPServerCommands>
{
    struct os_unfair_lock_s lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
}

@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)setTestLatencyMap:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchStateForClient:(id)arg1 withPeerEndpoint:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setCurrentLatitude:(double)arg1 longitude:(double)arg2 timestamp:(id)arg3 forClient:(id)arg4;
- (void)reportUsage:(id)arg1 fromClient:(id)arg2;
- (void)refreshWaldoNowWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)establishTrustWithEdgeSetForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setAppRule:(id)arg1 forLabel:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchAppRuleForLabel:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setEdgeSet:(id)arg1 forIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchEdgeSetForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setCurrentConfiguration:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)fetchCurrentConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)getConnection;
- (id)initWithCallbackQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
