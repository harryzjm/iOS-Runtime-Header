//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOCountryConfiguration, GEOResourceManifestManager, GEOSQLiteDB, NSMutableDictionary, NSString, _GEOTileDBWriteQueue;
@protocol OS_dispatch_queue;

@interface GEOTileDB : NSObject
{
    GEOSQLiteDB *_db;
    _GEOTileDBWriteQueue *_writeQueue;
    unsigned long long _maxDatabaseSize;
    unsigned long long _tileDataSize;
    _Bool _tileDataSizeIsValid;
    GEOCountryConfiguration *_countryConfiguration;
    GEOResourceManifestManager *_manifestManager;
    NSObject<OS_dispatch_queue> *_infrequentlyChangingMetadataQueue;
    CDStruct_e4886f83 *_expirationRecords;
    unsigned long long _expirationRecordsCount;
    _Bool _preloading;
    NSString *_devicePostureLocale;
    NSString *_devicePostureCountry;
    NSString *_devicePostureRegion;
    NSMutableDictionary *_editionsMap;
}

- (void).cxx_destruct;
- (void)_evictVeryOldTiles;
- (void)evictVeryOldTilesWithGroup:(id)arg1;
- (void)_invalidateAllTileData;
- (_Bool)_deleteAndRecreateDB;
- (void)_setEdition:(unsigned int)arg1 forTileSet:(unsigned int)arg2;
- (void)_deleteTileSet:(unsigned int)arg1;
- (void)_invalidateTileSet:(unsigned int)arg1;
- (void)_invalidateTileSetsForNewDevicePostureCountry:(id)arg1 newDevicePostureRegion:(id)arg2 oldDevicePostureCountry:(id)arg3 oldDevicePostureRegion:(id)arg4;
- (void)_updateDevicePosture;
- (void)evaluateDevicePostureAgainstCurrentManifest:(id)arg1;
- (void)_flushPendingWrites;
- (void)flushPendingWritesWithGroup:(id)arg1;
- (void)_deleteDataOnDBQueueForKey:(const struct _GEOTileKey *)arg1;
- (void)deleteDataForKey:(const struct _GEOTileKey *)arg1;
- (void)_setLastAccessTimeOnDBQueue:(double)arg1 forKey:(const struct _GEOTileKey *)arg2;
- (void)_addDataOnDBQueueWithData:(id)arg1 key:(const struct _GEOTileKey *)arg2 tileSet:(unsigned int)arg3 ETag:(id)arg4 reason:(unsigned char)arg5;
- (_Bool)_markExistingTileDataAsCurrentOnDBQueue:(const struct _GEOTileKey *)arg1 reason:(unsigned char)arg2;
- (void)getStaleTileKeysUsedSince:(double)arg1 fromTileSets:(id)arg2 maxCount:(unsigned long long)arg3 maxTotalSize:(unsigned long long)arg4 queue:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)getLastAccessTimestampForKey:(const struct _GEOTileKey *)arg1 callbackQueue:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)addData:(id)arg1 forKey:(const struct _GEOTileKey *)arg2 edition:(unsigned int)arg3 set:(unsigned int)arg4 provider:(unsigned int)arg5 etag:(id)arg6 reason:(unsigned char)arg7 isIdenticalToExistingStaleData:(_Bool)arg8;
- (void)addData:(id)arg1 forKey:(const struct _GEOTileKey *)arg2 edition:(unsigned int)arg3 set:(unsigned int)arg4 provider:(unsigned int)arg5 etag:(id)arg6 reason:(unsigned char)arg7;
- (void)dataForKeys:(id)arg1 reason:(unsigned char)arg2 group:(id)arg3 callbackQueue:(id)arg4 dataHandler:(CDUnknownBlockType)arg5;
- (_Bool)_dataForKeyOnDBQueue:(const struct _GEOTileKey *)arg1 reason:(unsigned char)arg2 callbackQueue:(id)arg3 dataHandler:(CDUnknownBlockType)arg4;
- (void)calculateFreeableSizeWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (unsigned long long)_shrinkBySizeSlow:(unsigned long long)arg1;
- (unsigned long long)_shrinkBySize:(unsigned long long)arg1;
- (unsigned long long)_shrinkToSize:(unsigned long long)arg1;
- (void)_evictIfNecessary;
- (void)_decrementCalculatedTileDataSize:(unsigned long long)arg1;
- (void)_incrementCalculatedTileDataSize:(unsigned long long)arg1;
- (unsigned long long)_allTileDataSize;
- (void)shrinkBySize:(unsigned long long)arg1 queue:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)shrinkToSize:(unsigned long long)arg1 queue:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)endPreloadSession;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;
- (_Bool)_isTileSetTTLExpired:(unsigned int)arg1 age:(double)arg2;
- (void)setExpirationRecords:(CDStruct_e4886f83 *)arg1 count:(unsigned long long)arg2;
@property(readonly, nonatomic) NSString *devicePostureRegion;
@property(readonly, nonatomic) NSString *devicePostureCountry;
- (void)_editionUpdate:(id)arg1;
- (void)_countryChanged:(id)arg1;
- (void)_deviceLocked:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (void)_performInTransaction:(CDUnknownBlockType)arg1;
- (void)_performOnDBQueue:(CDUnknownBlockType)arg1;
- (_Bool)_setup:(id)arg1;
- (id)_setupDB:(id)arg1;
- (void)tearDown;
- (id)initWithDBFilePath:(id)arg1 manifestManager:(id)arg2 countryConfiguration:(id)arg3 maximumDatabaseSize:(unsigned long long)arg4;
- (id)initWithDBFilePath:(id)arg1;
- (id)init;

@end

