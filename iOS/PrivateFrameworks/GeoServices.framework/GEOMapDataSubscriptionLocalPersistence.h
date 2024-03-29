//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOOfflineDataConfiguration, GEOTileDB, NSString, geo_isolater;

__attribute__((visibility("hidden")))
@interface GEOMapDataSubscriptionLocalPersistence : NSObject
{
    geo_isolater *_isolation;
    GEOTileDB *_db;
    GEOOfflineDataConfiguration *_offlineDataConfiguration;
}

- (void).cxx_destruct;
- (void)calculateTotalSizeOfOfflineSubscriptionsWithCallbackQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchSubscriptionsForSyncToWatchWithCallbackQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeSubscriptionWithIdentifier:(id)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchExpiredSubscriptionsWithIdentifiers:(id)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchSubscriptionsWithIdentifiers:(id)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addSubscriptionWithIdentifier:(id)arg1 auditToken:(id)arg2 dataTypes:(unsigned long long)arg3 policy:(long long)arg4 region:(id)arg5 displayName:(id)arg6 expirationDate:(id)arg7 callbackQueue:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (id)initWithTileDB:(id)arg1 offlineDataConfiguration:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

