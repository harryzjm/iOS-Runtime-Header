//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMapTable;
@protocol _GEOETARequesterServerProxy;

@interface GEOETARequester : NSObject
{
    NSMapTable *_pendingRequests;
    NSLock *_pendingRequestsLock;
    id <_GEOETARequesterServerProxy> _serverProxy;
}

+ (id)sharedRequester;
+ (void)useRemoteProxy;
+ (void)useLocalProxy;
+ (void)useProxy:(Class)arg1;
- (void).cxx_destruct;
- (void)cancelSimpleETARequest:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)startSimpleETARequest:(id)arg1 auditToken:(id)arg2 requestMode:(int)arg3 finished:(CDUnknownBlockType)arg4 networkActivity:(CDUnknownBlockType)arg5 error:(CDUnknownBlockType)arg6;
- (void)_startRequest:(id)arg1 provider:(id)arg2 isRequestUpdate:(_Bool)arg3 connectionProperties:(id)arg4 willSendRequest:(CDUnknownBlockType)arg5 finished:(CDUnknownBlockType)arg6 networkActivity:(CDUnknownBlockType)arg7 error:(CDUnknownBlockType)arg8;
- (void)updateRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)startRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)startRequest:(id)arg1 connectionProperties:(id)arg2 auditToken:(id)arg3 willSendRequest:(CDUnknownBlockType)arg4 finished:(CDUnknownBlockType)arg5 networkActivity:(CDUnknownBlockType)arg6 error:(CDUnknownBlockType)arg7;
- (void)dealloc;
- (id)init;

@end
