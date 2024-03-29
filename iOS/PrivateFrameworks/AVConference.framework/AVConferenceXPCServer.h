//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface AVConferenceXPCServer : NSObject
{
    NSObject<OS_xpc_object> *listener;
    NSMutableArray *clientConnections;
    NSMutableDictionary *registeredBlocks;
    NSObject<OS_dispatch_queue> *incomingMessageQueue;
    NSObject<OS_dispatch_queue> *outgoingMessageQueue;
    NSObject<OS_dispatch_queue> *clientConnectionsQueue;
}

+ (_Bool)clientWithToken:(CDStruct_6ad76789)arg1 hasEntitlement:(id)arg2;
+ (id)AVConferenceXPCServerSingleton;
@property(readonly) NSMutableDictionary *registeredBlocks; // @synthesize registeredBlocks;
@property(readonly) NSObject<OS_xpc_object> *listener; // @synthesize listener;
- (id)authorizedTokenData;
- (void)_xpc_start_listening_for_connections;
- (void)appendContextToDictionary:(id)arg1 forConnection:(id)arg2;
- (void)appendPIDToDictionary:(id)arg1 pid:(int)arg2;
- (id)newClientDiedDictionary;
- (id)newNSDictionaryWidthNSDictionary:(id)arg1;
- (id)newNSDictionaryFromNSError:(id)arg1;
- (id)newNSErrorFromNSDictionary:(id)arg1;
- (id)newXPCDictionaryFromNSDictionary:(id)arg1 forEvent:(id)arg2;
- (id)newNSDictionaryFromXPCDictionary:(id)arg1;
- (void)deregisterFromService:(const char *)arg1;
- (void)registerBlockForService:(const char *)arg1 block:(CDUnknownBlockType)arg2 queue:(id)arg3 eventLogLevel:(int)arg4;
- (void)registerBlockForService:(const char *)arg1 block:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)registerBlockForService:(const char *)arg1 block:(CDUnknownBlockType)arg2;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 toAllClientsWithContext:(id)arg3;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 context:(id)arg3;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 xpcArguments:(id)arg3 context:(id)arg4;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allocWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)_xpc_get_connections_from_list_for_context:(id)arg1;
- (id)_xpc_get_connection_from_list_for_context:(id)arg1;
- (id)_xpc_get_connection_from_list_for_connection:(id)arg1;
- (void)_xpc_remove_connections_from_list;
- (void)_xpc_remove_connection_from_list:(id)arg1;
- (void)_xpc_add_connection_to_list:(id)arg1;
- (void)_xpc_handle_incoming_request:(id)arg1;

@end

