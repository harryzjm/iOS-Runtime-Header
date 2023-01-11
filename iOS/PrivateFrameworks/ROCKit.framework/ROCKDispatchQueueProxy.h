//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, ROCKConnection;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface ROCKDispatchQueueProxy
{
    _Bool _remoteQueue;
    ROCKConnection *_rockConnection;
    NSObject<OS_xpc_object> *_xpcDictionary;
}

+ (id)dispatchQueueProxyWithUUID:(id)arg1 qosClass:(unsigned int)arg2 relativePriority:(int)arg3 rockConnection:(id)arg4 remoteQueue:(_Bool)arg5;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcDictionary; // @synthesize xpcDictionary=_xpcDictionary;
@property(nonatomic) _Bool remoteQueue; // @synthesize remoteQueue=_remoteQueue;
@property(retain, nonatomic) ROCKConnection *rockConnection; // @synthesize rockConnection=_rockConnection;
- (void).cxx_destruct;
- (id)makeQueue;
@property(readonly, nonatomic) int relativePriority;
@property(readonly, nonatomic) unsigned int qosClass;
- (id)initWithUUID:(id)arg1 qosClass:(unsigned int)arg2 relativePriority:(int)arg3 rockConnection:(id)arg4 remoteQueue:(_Bool)arg5;

@end

