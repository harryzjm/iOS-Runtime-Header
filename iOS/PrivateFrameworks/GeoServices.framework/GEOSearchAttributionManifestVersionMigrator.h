//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOActiveTileGroupMigrator-Protocol.h>

@class GEOResourceManifestConfiguration, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface GEOSearchAttributionManifestVersionMigrator : NSObject <GEOActiveTileGroupMigrator>
{
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMutableArray *_runningTasks;
}

- (void).cxx_destruct;
- (void)_removeRunningTask:(id)arg1;
- (void)_addRunningTask:(id)arg1;
- (_Bool)needsMigrationForNewTileGroup:(id)arg1 inResourceManifest:(id)arg2 oldTileGroup:(id)arg3 dataSet:(id)arg4;
- (id)taskForNewTileGroup:(id)arg1 inResourceManifest:(id)arg2 oldTileGroup:(id)arg3 activeScales:(id)arg4 activeScenarios:(id)arg5 dataSet:(id)arg6 updateType:(long long)arg7;
- (id)initWithManifestConfiguration:(id)arg1 mapLayerDataManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

