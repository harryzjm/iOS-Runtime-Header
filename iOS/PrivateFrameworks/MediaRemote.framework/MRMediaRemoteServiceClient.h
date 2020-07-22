//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class MRAVRoutingClientController, MRNotificationClient, NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRMediaRemoteServiceClient : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_playbackQueueDispatchQueue;
    NSMutableArray *_registeredOrigins;
    MRAVRoutingClientController *_routingClientController;
    void *_activePlayerPath;
    int _notifyRestoreClientStateForLaunch;
    NSString *_preparedBundleID;
    struct MRMediaRemoteService *_service;
    MRNotificationClient *_notificationClient;
}

+ (id)sharedServiceClient;
@property(readonly, nonatomic) MRNotificationClient *notificationClient; // @synthesize notificationClient=_notificationClient;
@property(readonly, nonatomic) struct MRMediaRemoteService *service; // @synthesize service=_service;
- (void)fetchPickableRoutesWithCategory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unregisterAllOriginsWithCompletion:(CDUnknownBlockType)arg1;
- (void)unregisterOrigin:(void *)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)registerOrigin:(void *)arg1 withCompletion:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) NSString *preparedBundleID;
@property(nonatomic) void *activePlayerPath;
- (void)_onQueue_setActivePlayerPath:(void *)arg1;
@property(readonly, nonatomic) NSArray *registeredOrigins;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *playbackQueueDispatchQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workerSerialQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
- (void)dealloc;
- (id)init;

@end

