//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object, WebBookmarksXPCConnectionDelegate;

@interface WebBookmarksXPCConnection : NSObject
{
    NSMutableDictionary *_messageHandlers;
    NSMutableDictionary *_entitlementLookupCache;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    id <WebBookmarksXPCConnectionDelegate> _delegate;
}

@property(nonatomic) id <WebBookmarksXPCConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)sendMessage:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1;
- (id)messageWithName:(const char *)arg1;
- (_Bool)hasBoolEntitlement:(id)arg1;
- (void)setMessageHandlers:(id)arg1;
- (void)setHandler:(CDUnknownBlockType)arg1 forMessageNamed:(const char *)arg2;
- (void)_handleMessage:(id)arg1;
- (id)initClientForMachService:(const char *)arg1;
- (id)initWithConnection:(id)arg1;

@end

