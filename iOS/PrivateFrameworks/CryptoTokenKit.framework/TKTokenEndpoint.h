//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSMapTable, NSString, NSXPCListenerEndpoint, TKToken;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface TKTokenEndpoint : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listener;
    NSMapTable *_sessionMap;
    long long _clientCount;
    NSError *_tokenError;
    NSString *_tokenID;
    TKToken *_token;
}

@property(readonly) TKToken *token; // @synthesize token=_token;
@property(readonly) NSString *tokenID; // @synthesize tokenID=_tokenID;
- (void).cxx_destruct;
- (void)dealloc;
- (void)acceptNewConnection:(id)arg1;
- (id)sessionForEvent:(id)arg1 error:(id *)arg2;
@property(readonly) NSXPCListenerEndpoint *endpoint;
- (void)terminateAfterRemovingClientWithNotification:(CDUnknownBlockType)arg1;
- (void)resumeWithToken:(id)arg1 tokenError:(id)arg2;
- (void)addClientWithReplyNotification:(CDUnknownBlockType)arg1;
- (id)initWithTokenID:(id)arg1;

@end

