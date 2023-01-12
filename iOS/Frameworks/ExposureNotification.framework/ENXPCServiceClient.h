//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface ENXPCServiceClient : NSObject
{
    struct os_unfair_lock_s _lock;
    NSObject<OS_xpc_object> *_xpcConnection;
    _Bool _invalidated;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_xpc_object> *_testListenerEndpoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_xpc_object> *testListenerEndpoint; // @synthesize testListenerEndpoint=_testListenerEndpoint;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_xpcReceivedEvent:(id)arg1;
- (id)_ensureXPCStartedAndReturnError:(id *)arg1;
- (id)getXPCConnectionAndReturnError:(id *)arg1;
- (void)_invalidateForced:(_Bool)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end
