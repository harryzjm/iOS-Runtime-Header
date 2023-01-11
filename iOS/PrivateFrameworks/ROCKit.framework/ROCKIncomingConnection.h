//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface ROCKIncomingConnection : NSObject
{
    NSObject<OS_xpc_object> *_xpcConnection;
}

+ (id)connectionWithXPCConnection:(id)arg1 handlerQueue:(id)arg2 xpcHandler:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)arg1 handlerQueue:(id)arg2 xpcHandler:(CDUnknownBlockType)arg3;

@end
