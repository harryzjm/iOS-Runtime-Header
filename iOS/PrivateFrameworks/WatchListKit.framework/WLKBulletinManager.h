//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WatchListKit/NSXPCListenerDelegate-Protocol.h>
#import <WatchListKit/WLKBulletinDataProviderDelegate-Protocol.h>
#import <WatchListKit/WLKBulletinServer-Protocol.h>
#import <WatchListKit/WLKBulletinStoreDelegate-Protocol.h>

@class BBDataProviderConnection, BBDataProviderProxy, NSMutableSet, NSString, NSXPCListener, WLKBulletinStore;
@protocol OS_dispatch_queue;

@interface WLKBulletinManager : NSObject <NSXPCListenerDelegate, WLKBulletinDataProviderDelegate, WLKBulletinStoreDelegate, WLKBulletinServer>
{
    NSObject<OS_dispatch_queue> *_privateQueue;
    BBDataProviderConnection *_connection;
    BBDataProviderProxy *_dataProviderProxy;
    WLKBulletinStore *_bulletinStore;
    NSXPCListener *_listener;
    NSMutableSet *_connections;
    NSMutableSet *_clients;
    long long _appInstallationState;
}

+ (id)sharedBulletinManager;
@property(nonatomic) long long appInstallationState; // @synthesize appInstallationState=_appInstallationState;
@property(retain, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
@property(retain, nonatomic) NSMutableSet *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) WLKBulletinStore *bulletinStore; // @synthesize bulletinStore=_bulletinStore;
@property(retain, nonatomic) BBDataProviderProxy *dataProviderProxy; // @synthesize dataProviderProxy=_dataProviderProxy;
@property(retain, nonatomic) BBDataProviderConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue; // @synthesize privateQueue=_privateQueue;
- (void).cxx_destruct;
- (void)_handleTVAppInstalledNotification:(id)arg1;
- (void)postBulletin:(id)arg1;
- (void)bulletinStore:(id)arg1 didRemoveBulletinWithCoalescingIDs:(id)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)addClient:(id)arg1;
- (void)updateAppInstallationState;
- (void)start;
- (void)_stop;
- (void)_start;
- (void)_setAppInstalled:(_Bool)arg1;
- (void)bulletinDataProvider:(id)arg1 didReceiveResponse:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
