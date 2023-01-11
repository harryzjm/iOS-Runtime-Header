//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable, geo_isolater;

@interface GEOETARequester : NSObject
{
    geo_isolater *_isolater;
    NSHashTable *_pendingSimpleRequests;
    NSMapTable *_pendingRequests;
}

+ (id)sharedRequester;
- (void).cxx_destruct;
- (_Bool)_finishRequest:(id)arg1;
- (_Bool)_finishSimpleRequest:(id)arg1;
- (void)cancelSimpleETARequest:(id)arg1;
- (void)startSimpleETARequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 callbackQueue:(id)arg4 finished:(CDUnknownBlockType)arg5 networkActivity:(CDUnknownBlockType)arg6 error:(CDUnknownBlockType)arg7;
- (void)cancelRequest:(id)arg1;
- (void)updateRequest:(id)arg1 callbackQueue:(id)arg2 finished:(CDUnknownBlockType)arg3 networkActivity:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)startRequest:(id)arg1 connectionProperties:(id)arg2 auditToken:(id)arg3 throttleToken:(id)arg4 callbackQueue:(id)arg5 willSendRequest:(CDUnknownBlockType)arg6 finished:(CDUnknownBlockType)arg7 networkActivity:(CDUnknownBlockType)arg8 error:(CDUnknownBlockType)arg9;
- (void)dealloc;
- (id)init;

@end
