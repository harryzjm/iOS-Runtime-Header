//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOActiveTileGroup, GEOResourceManifestConfiguration, NSArray, NSNumber, NSObject, NSProgress, NSString;
@protocol GEOResourceManifestServerProxyDelegate, OS_dispatch_queue;

@protocol GEOResourceManifestServerProxy <NSObject>
@property(readonly, nonatomic) GEOActiveTileGroup *activeTileGroup;
@property(nonatomic) __weak id <GEOResourceManifestServerProxyDelegate> delegate;
- (void)getResourceManifestWithHandler:(void (^)(GEOResourceManifestDownload *, NSError *))arg1;
- (oneway void)resetActiveTileGroup;
- (oneway void)setActiveTileGroupIdentifier:(NSNumber *)arg1;
- (NSProgress *)updateProgress;
- (void)deactivateResourceScenario:(int)arg1;
- (void)activateResourceScenario:(int)arg1;
- (void)deactivateResourceScale:(int)arg1;
- (void)activateResourceScale:(int)arg1;
- (void)performOpportunisticResourceLoading;
- (void)cancelCurrentManifestUpdate;
- (void)forceUpdate:(long long)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)updateIfNecessary:(void (^)(NSError *))arg1;
- (void)setManifestToken:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (GEOResourceManifestConfiguration *)configuration;
- (NSString *)authToken;
- (void)closeConnection;
- (void)openConnection;
- (NSObject<OS_dispatch_queue> *)serverQueue;
- (id)initWithDelegate:(id <GEOResourceManifestServerProxyDelegate>)arg1 configuration:(GEOResourceManifestConfiguration *)arg2 additionalMigrationTaskClasses:(NSArray *)arg3;
@end

