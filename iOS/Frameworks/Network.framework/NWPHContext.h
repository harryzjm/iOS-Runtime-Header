//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWPHContext : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_xpc_object> *_request;
    NSObject<OS_xpc_object> *_reply;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_xpc_object> *reply; // @synthesize reply=_reply;
@property(retain) NSObject<OS_xpc_object> *request; // @synthesize request=_request;
@property(retain) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) int pid;
- (id)initWithRequest:(id)arg1 onConnection:(id)arg2;

@end

