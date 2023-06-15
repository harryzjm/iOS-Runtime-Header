//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOOfflineDataKey, GEOPBOfflineTileMetadata, GEOTileData, NSObject;
@protocol OS_dispatch_queue;

@protocol GEOOfflineDataAccessor <NSObject>
- (GEOPBOfflineTileMetadata *)offlineTileMetadataWithError:(id *)arg1;
- (void)getOfflineVersionMetadataWithCallbackQueue:(NSObject<OS_dispatch_queue> *)arg1 callback:(void (^)(GEOOfflineVersionMetadata *, NSError *))arg2;
- (void)getAvailableKeysForLayer:(unsigned int)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 callback:(void (^)(NSArray *, NSError *))arg3;
- (_Bool)hasDataForKey:(GEOOfflineDataKey *)arg1 error:(id *)arg2;
- (void)hasDataForKey:(GEOOfflineDataKey *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 callback:(void (^)(_Bool, NSError *))arg3;
- (GEOTileData *)dataForKey:(GEOOfflineDataKey *)arg1 error:(id *)arg2;
- (void)getDataForKey:(GEOOfflineDataKey *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 callback:(void (^)(GEOTileData *, NSError *))arg3;
@end

