//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSMapTable, NSString, NSXPCListenerEndpoint, TKToken;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface TKTokenEndpoint : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listener;
    NSMapTable *_sessionMap;
    long long _clientCount;
    NSString *_tokenID;
    TKToken *_token;
    NSError *_tokenError;
}

@property(retain) NSError *tokenError; // @synthesize tokenError=_tokenError;
@property(retain) TKToken *token; // @synthesize token=_token;
@property(readonly) NSString *tokenID; // @synthesize tokenID=_tokenID;
- (void).cxx_destruct;
- (void)dealloc;
- (void)acceptNewConnection:(id)arg1;
- (id)sessionForEvent:(id)arg1 context:(id *)arg2 error:(id *)arg3;
@property(readonly) NSXPCListenerEndpoint *endpoint;
- (void)terminateAfterRemovingClientWithNotification:(CDUnknownBlockType)arg1;
- (void)resumeWithToken:(id)arg1 tokenError:(id)arg2;
- (void)addClientWithReplyNotification:(CDUnknownBlockType)arg1;
- (id)initWithTokenID:(id)arg1;

@end

