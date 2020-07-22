//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActivitySharing/_HKXPCExportable-Protocol.h>

@class HKPluginProxyProvider, NSString;
@protocol ASServerInterface, OS_dispatch_queue;

@interface ASClient : NSObject <_HKXPCExportable>
{
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id <ASServerInterface> _serverProxy;
    HKPluginProxyProvider *_pluginProxyProvider;
}

- (void).cxx_destruct;
- (CDUnknownBlockType)_clientQueueSuccessCompletion:(CDUnknownBlockType)arg1;
- (void)_remoteProxy:(CDUnknownBlockType)arg1;
- (void)fetchAreMultipleDevicesSharingDataForSnapshotIndex:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)clearFriendListWithCompletion:(CDUnknownBlockType)arg1;
- (void)cloudKitAccountStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAllDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)pushFakeActivityDataToAllFriendsWithCompletion:(CDUnknownBlockType)arg1;
- (void)pushActivityDataToAllFriendsWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeFriendWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setMuteEnabled:(_Bool)arg1 forFriendWithUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setActivityDataVisible:(_Bool)arg1 toFriendWithUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)ignoreInviteRequestFromFriendWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendWithdrawInviteRequestToFriendWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)acceptInviteRequestFromFriendWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendInviteRequestToDestination:(id)arg1 callerID:(id)arg2 serviceIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

