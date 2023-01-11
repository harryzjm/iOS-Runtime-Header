//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreParsec/PARClientXPC-Protocol.h>

@class NSMutableArray, NSString, NSXPCConnection, NSXPCListenerEndpoint, PARImageLoader, PARSessionConfiguration, QueryIdMapper;
@protocol OS_dispatch_queue, PARDaemonXPC;

@interface PARSearchClient : NSObject <PARClientXPC>
{
    id <PARDaemonXPC> _remoteObject;
    NSMutableArray *_sessions;
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic _Bool _configured;
    NSObject<OS_dispatch_queue> *_idQueue;
    QueryIdMapper *_idMapper;
    PARSessionConfiguration *_configuration;
    NSXPCConnection *_connection;
    PARImageLoader *_imageLoader;
}

+ (id)sharedClient;
+ (id)daemonConnection;
+ (id)_deafListenerEndpoint;
@property(readonly) PARImageLoader *imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain) PARSessionConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)updateParameters:(double)arg1 safariLast1day:(double)arg2 safariLast1week:(double)arg3 safariLast1month:(double)arg4 safariAll:(double)arg5 safariMostRecent:(double)arg6 minThresholdToSend:(double)arg7;
- (void)clearCompletionsFromDate:(id)arg1 toDate:(id)arg2;
- (void)addCompletion:(id)arg1 forInput:(id)arg2;
- (void)getImageMap:(CDUnknownBlockType)arg1;
- (void)fileHandleAndAttributesForResource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)listSessions:(CDUnknownBlockType)arg1;
- (void)reportFeedback:(id)arg1 feedback:(id)arg2 queryId:(unsigned long long)arg3;
- (unsigned long long)request:(id)arg1 request:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (unsigned long long)_queryId:(unsigned long long)arg1 forObject:(id)arg2;
- (void)bag:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)configure:(id)arg1;
@property(retain) NSXPCListenerEndpoint *endpoint;
- (void)addSession:(id)arg1;
- (void)dealloc;
- (void)_invalidateConnection;
- (id)initWithConnection:(id)arg1;
- (id)init;
- (void)didDeleteResource:(id)arg1;
- (void)didDownloadResource:(id)arg1;
- (void)bagDidLoad:(id)arg1 error:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

