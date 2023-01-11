//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FMF/FMFXPCInternalClientProtocol-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSOperationQueue, NSSet, NSString, NSXPCConnection;
@protocol FMFSessionDelegate, OS_dispatch_queue;

@interface FMFSession : NSObject <FMFXPCInternalClientProtocol>
{
    _Bool _isModelInitialized;
    id <FMFSessionDelegate> _delegate;
    NSOperationQueue *_delegateQueue;
    NSMutableSet *_internalHandles;
    NSXPCConnection *_connection;
    NSSet *_cachedGetHandlesSharingLocationsWithMe;
    NSSet *_cachedGetHandlesFollowingMyLocation;
    NSMutableDictionary *_cachedLocationForHandleByHandle;
    NSMutableDictionary *_cachedOfferExpirationForHandleByHandle;
    NSMutableDictionary *_cachedCanShareLocationWithHandleByHandle;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_handlesQueue;
}

+ (_Bool)isAnyAccountManaged;
+ (_Bool)isProvisionedForLocationSharing;
+ (_Bool)FMFRestricted;
+ (_Bool)FMFAllowed;
+ (id)sharedInstance;
@property(nonatomic) _Bool isModelInitialized; // @synthesize isModelInitialized=_isModelInitialized;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handlesQueue; // @synthesize handlesQueue=_handlesQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) NSMutableDictionary *cachedCanShareLocationWithHandleByHandle; // @synthesize cachedCanShareLocationWithHandleByHandle=_cachedCanShareLocationWithHandleByHandle;
@property(retain, nonatomic) NSMutableDictionary *cachedOfferExpirationForHandleByHandle; // @synthesize cachedOfferExpirationForHandleByHandle=_cachedOfferExpirationForHandleByHandle;
@property(retain, nonatomic) NSMutableDictionary *cachedLocationForHandleByHandle; // @synthesize cachedLocationForHandleByHandle=_cachedLocationForHandleByHandle;
@property(retain, nonatomic) NSSet *cachedGetHandlesFollowingMyLocation; // @synthesize cachedGetHandlesFollowingMyLocation=_cachedGetHandlesFollowingMyLocation;
@property(retain, nonatomic) NSSet *cachedGetHandlesSharingLocationsWithMe; // @synthesize cachedGetHandlesSharingLocationsWithMe=_cachedGetHandlesSharingLocationsWithMe;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSMutableSet *internalHandles; // @synthesize internalHandles=_internalHandles;
@property(retain, nonatomic) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <FMFSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleIncomingAirDropURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mappingPacketSendFailed:(id)arg1 toHandle:(id)arg2 withError:(id)arg3;
- (void)receivedMappingPacket:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeHandles:(id)arg1;
- (void)addHandles:(id)arg1;
@property(copy, nonatomic) NSSet *handles;
- (oneway void)modelDidLoad;
- (oneway void)networkReachabilityUpdated:(_Bool)arg1;
- (oneway void)didUpdateFences:(id)arg1;
- (oneway void)didUpdateLocations:(id)arg1;
- (oneway void)didUpdateFollowing:(id)arg1;
- (oneway void)didUpdateFollowers:(id)arg1;
- (oneway void)abPreferencesDidChange;
- (oneway void)abDidChange;
- (oneway void)didReceiveServerError:(id)arg1;
- (oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;
- (oneway void)didUpdatePendingOffersForHandles:(id)arg1;
- (void)didReceiveFriendshipRequest:(id)arg1;
- (oneway void)didUpdateActiveDeviceList:(id)arg1;
- (oneway void)didChangeActiveLocationSharingDevice:(id)arg1;
- (oneway void)didUpdateHideFromFollowersStatus:(_Bool)arg1;
- (oneway void)didUpdateFavorites:(id)arg1;
- (oneway void)didStopFollowingHandle:(id)arg1;
- (oneway void)didStartFollowingHandle:(id)arg1;
- (oneway void)didRemoveFollowerHandle:(id)arg1;
- (oneway void)didAddFollowerHandle:(id)arg1;
- (oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2;
- (oneway void)setLocations:(id)arg1;
- (void)forceRefresh;
- (_Bool)hasModelInitialized;
- (void)invalidate;
- (void)dispatchOnDelegateQueue:(CDUnknownBlockType)arg1;
- (id)serverProxy;
- (id)__connection;
- (void)invalidateWithError:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)locatingInProgressChanged:(id)arg1;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)init;
- (void)_registerForFMFDLaunchedNotification;
- (void)_daemonDidLaunch;
- (id)internalConnection;
- (void)includeDeviceInAutomations:(CDUnknownBlockType)arg1;
- (void)showShareMyLocationRestrictedAlert;
- (void)showShareMyLocationiCloudSettingsOffAlert;
- (void)getDataForPerformanceRequest:(CDUnknownBlockType)arg1;
- (void)sessionHandleReport:(CDUnknownBlockType)arg1;
- (void)dumpStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendIDSPacket:(id)arg1 toHandle:(id)arg2;
- (void)isIn5XXGracePeriodWithCompletion:(CDUnknownBlockType)arg1;
- (void)exit5XXGracePeriod;
- (void)crashDaemon;
- (_Bool)shouldHandleErrorInFWK:(id)arg1;
- (_Bool)is5XXError:(id)arg1;
- (void)setExpiredInitTimestamp;
- (id)verifyRestrictionsAndShowDialogIfRequired;
- (void)getRecordIdForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPrettyNameForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAllDevices:(CDUnknownBlockType)arg1;
- (double)maxLocatingInterval;
- (id)getAllDevices;
- (id)getActiveLocationSharingDevice;
- (oneway void)iCloudAccountNameWithCompletion:(CDUnknownBlockType)arg1;
- (void)locationForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshLocationForHandles:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)refreshLocationForHandle:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)canOfferToHandles:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getHandlesWithPendingOffers:(CDUnknownBlockType)arg1;
- (void)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getPendingMappingPacketsForHandle:(id)arg1 groupId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)isMyLocationEnabled:(CDUnknownBlockType)arg1;
- (void)setHideMyLocationEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getHandlesFollowingMyLocationWithGroupId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getHandlesFollowingMyLocation:(CDUnknownBlockType)arg1;
- (void)getHandlesSharingLocationsWithMeWithGroupId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getHandlesSharingLocationsWithMe:(CDUnknownBlockType)arg1;
- (void)setActiveDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getActiveLocationSharingDevice:(CDUnknownBlockType)arg1;
- (void)encryptPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)decryptPayload:(id)arg1 withToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dataForPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleAndLocationForPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)contactForPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)nearbyLocationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)favoritesForMaxCount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAllLocations:(CDUnknownBlockType)arg1;
- (void)removeFavorite:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addFavorite:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getFavoritesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getPendingFriendshipRequestsWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopSharingMyLocationWithHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)stopSharingMyLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)declineFriendshipRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)approveFriendshipRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendFriendshipInviteToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)extendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_checkAndDisplayMeDeviceSwitchAlert;
- (void)_sendAutoSwitchMeDevice;
- (void)_sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)_isNoMappingPacketReturnedError:(id)arg1;
- (void)fencesForHandles:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getFences:(CDUnknownBlockType)arg1;
- (void)deleteFence:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addFence:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadDataIfNotLoaded;
- (id)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (id)cachedLocationForHandle:(id)arg1;
- (_Bool)isMyLocationEnabled;
- (id)getHandlesWithPendingOffers;
- (_Bool)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (_Bool)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (id)getFavoritesSharingLocationWithMe;
- (id)getHandlesFollowingMyLocation;
- (id)getHandlesSharingLocationsWithMe;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

