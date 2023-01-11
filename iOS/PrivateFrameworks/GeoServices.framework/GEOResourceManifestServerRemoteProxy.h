//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceManifestServerProxy-Protocol.h>

@class GEOActiveTileGroup, GEOResourceManifestConfiguration, NSString;
@protocol GEOResourceManifestServerProxyDelegate, OS_dispatch_queue, OS_xpc_object;

@interface GEOResourceManifestServerRemoteProxy : NSObject <GEOResourceManifestServerProxy>
{
    id <GEOResourceManifestServerProxyDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_xpc_object> *_conn;
    _Bool _sentConfigurationMessage;
    _Bool _hasOpenConnection;
    _Bool _isUpdatingManifest;
    _Bool _isLoadingResources;
    NSObject<OS_dispatch_queue> *_serverQueue;
    GEOResourceManifestConfiguration *_configuration;
    struct os_unfair_lock_s _authTokenLock;
    NSString *_authToken;
    int _activeTileGroupChangedNotificationToken;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GEOResourceManifestServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleMessage:(id)arg1 xpcMessage:(id)arg2;
- (unsigned long long)maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2;
- (void)deactivateResourceScenario:(int)arg1;
- (void)activateResourceScenario:(int)arg1;
- (void)deactivateResourceScale:(int)arg1;
- (void)activateResourceScale:(int)arg1;
- (void)performOpportunisticResourceLoading;
- (void)setManifestToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getResourceManifestWithHandler:(CDUnknownBlockType)arg1;
- (id)updateProgress;
- (void)cancelCurrentManifestUpdate;
- (void)forceUpdate:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateIfNecessary:(CDUnknownBlockType)arg1;
- (oneway void)resetActiveTileGroup;
- (void)setActiveTileGroupIdentifier:(id)arg1 updateType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (oneway void)setActiveTileGroupIdentifier:(id)arg1;
- (void)closeConnection;
- (void)openConnection;
- (id)_xpcConnection;
- (id)configuration;
- (id)authToken;
- (void)dealloc;
@property(readonly, nonatomic) GEOActiveTileGroup *activeTileGroup;
- (id)initWithDelegate:(id)arg1 configuration:(id)arg2;
- (id)serverQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
