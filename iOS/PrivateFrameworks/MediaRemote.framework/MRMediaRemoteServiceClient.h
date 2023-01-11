//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRAVRoutingClientController, MRMediaRemoteService, MRNotificationClient, MRNotificationServiceClient, MRPlayerPath, NSArray, NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue;

@interface MRMediaRemoteServiceClient : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_registeredOrigins;
    MRAVRoutingClientController *_routingClientController;
    MRPlayerPath *_activePlayerPath;
    NSMutableSet *_playerPathInvalidationHandlers;
    MRNotificationServiceClient *_notificationService;
    MRMediaRemoteService *_service;
    MRNotificationClient *_notificationClient;
    NSObject<OS_dispatch_queue> *_playbackQueueDispatchQueue;
}

+ (id)sharedServiceClient;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *playbackQueueDispatchQueue; // @synthesize playbackQueueDispatchQueue=_playbackQueueDispatchQueue;
@property(readonly, nonatomic) MRNotificationClient *notificationClient; // @synthesize notificationClient=_notificationClient;
@property(readonly, nonatomic) MRMediaRemoteService *service; // @synthesize service=_service;
- (void)processPlayerPathInvalidationHandlersWithBlock:(CDUnknownBlockType)arg1;
- (void)processPlayerPathInvalidationHandlersWithInvalidOrigin:(id)arg1;
- (void)removeInvalidationHandler:(id)arg1;
- (id)addPlayerPathInvalidationHandler:(id)arg1;
- (void)fetchPickableRoutesWithCategory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isOriginRegistered:(id)arg1;
- (void)unregisterAllOriginsWithCompletion:(CDUnknownBlockType)arg1;
- (void)unregisterOrigin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)registerOrigin:(id)arg1 withDeviceInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) MRPlayerPath *activePlayerPath;
@property(readonly, nonatomic) NSArray *registeredOrigins;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
- (id)debugDescription;
- (void)dealloc;
- (id)init;

@end
