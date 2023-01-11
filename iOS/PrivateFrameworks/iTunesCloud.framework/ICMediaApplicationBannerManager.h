//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICMediaApplicationBannerManagerClientProtocol-Protocol.h>
#import <iTunesCloud/ICMediaApplicationBannerManagerServiceProtocol-Protocol.h>
#import <iTunesCloud/NSXPCListenerDelegate-Protocol.h>

@class ICMediaApplicationBannerStore, NSMutableSet, NSOperationQueue, NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue;

@interface ICMediaApplicationBannerManager : NSObject <ICMediaApplicationBannerManagerServiceProtocol, ICMediaApplicationBannerManagerClientProtocol, NSXPCListenerDelegate>
{
    NSOperationQueue *_operationQueue;
    ICMediaApplicationBannerStore *_bannerStore;
    _Bool _isSystemService;
    _Bool _resetNeeded;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSXPCListener *_xpcServiceListener;
    NSMutableSet *_xpcConnections;
    NSXPCConnection *_xpcClientConnection;
}

+ (id)sharedSystemService;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)serviceBannerStoreDidChange;
- (void)serviceUpdateBanners:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)serviceUpdateBanner:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)serviceBannersForBundleIdentifier:(id)arg1 target:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)serviceAllBannersWithCompletion:(CDUnknownBlockType)arg1;
- (void)serviceProcessSyncCommands:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)serviceResetWithCompletion:(CDUnknownBlockType)arg1;
- (void)serviceSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)_postClientStoreDidChangeNotification;
- (void)_removeConnection:(id)arg1;
- (void)_addConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)_storePlatformRequestContextWithIdentity:(id)arg1;
- (void)_schedulePeriodicTasks;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;
- (void)_processSyncCommands:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateBanners:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateBanner:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateBanner:(id)arg1 withIncrementedDisplayCount:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)bannersForBundleIdentifier:(id)arg1 target:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)allBannersWithCompletion:(CDUnknownBlockType)arg1;
- (void)processSyncCommands:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)syncWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopSystemService;
- (void)startSystemService;
- (id)initWithNotificationStore:(id)arg1 isSystemService:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

