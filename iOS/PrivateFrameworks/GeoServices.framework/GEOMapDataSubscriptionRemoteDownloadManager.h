//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOXPCConnection, NSMapTable, NSString, geo_isolater;
@protocol GEOMapDataSubscriptionDownloadManagerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOMapDataSubscriptionRemoteDownloadManager : NSObject
{
    id <GEOMapDataSubscriptionDownloadManagerDelegate> _delegate;
    int _geodLaunchedNotifyToken;
    struct GEOOnce_s _configuredConnection;
    NSObject<OS_dispatch_queue> *_incomingMessageQueue;
    GEOXPCConnection *_connection;
    geo_isolater *_statesLock;
    NSMapTable *_states;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GEOMapDataSubscriptionDownloadManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_receivedStateUpdate:(id)arg1;
- (void)_stopObservingStateForIdentifier:(id)arg1;
- (void)_startObservingStateForIdentifier:(id)arg1;
- (void)_reconnectIfNecessary;
- (void)fetchStateForSubscriptionWithIdentifier:(id)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)determineEstimatedSizeForSubscriptionWithRegion:(id)arg1 dataTypes:(unsigned long long)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fetchLastUpdatedDateForOfflineSubscriptionsWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)forceUpdateForUserInitiatedSubscriptionsForDataType:(unsigned long long)arg1 mode:(long long)arg2;
- (void)cancelDownloadForSubscriptionIdentifiers:(id)arg1;
- (void)startDownloadForSubscriptionIdentifiers:(id)arg1 mode:(long long)arg2;
- (void)_handleEvent:(id)arg1;
- (id)_connection;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

