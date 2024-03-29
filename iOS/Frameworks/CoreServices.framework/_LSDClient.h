//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LSDClient : NSObject
{
    NSXPCConnection *_XPCConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(readonly, retain) NSXPCConnection *XPCConnection; // @synthesize XPCConnection=_XPCConnection;
- (void)didHandleInvocation:(id)arg1 isReply:(_Bool)arg2;
- (void)willHandleInvocation:(id)arg1 isReply:(_Bool)arg2;
- (id)initWithXPCConnection:(id)arg1;
- (void)handleXPCInvocation:(id)arg1 isReply:(_Bool)arg2;
- (id)initWithXPCConnection:(id)arg1 queue:(id)arg2;

@end

