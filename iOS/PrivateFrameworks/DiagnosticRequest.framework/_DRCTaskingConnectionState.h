//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _DRCTaskingConnectionState : NSObject
{
    _Bool _isClosed;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

+ (id)sharedConnectionState;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) _Bool isClosed; // @synthesize isClosed=_isClosed;
- (id)sendMessageWithReplySync:(id)arg1;
- (_Bool)sendMessage:(id)arg1;
- (id)init;
- (void)cleanupState;

@end

