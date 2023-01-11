//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VisualLocalization/VLLocalizationDataProvider-Protocol.h>

@class GEOApplicationAuditToken, GEOTileData, GEOTileKeyMap, GEOTileLoader, NSArray, NSString, geo_isolater;
@protocol VLLocalizationDataProviderDelegate;

__attribute__((visibility("hidden")))
@interface VLTileDataProvider : NSObject <VLLocalizationDataProvider>
{
    id <VLLocalizationDataProviderDelegate> _delegate;
    GEOTileLoader *_tileLoader;
    NSString *_tileLoaderClientID;
    GEOApplicationAuditToken *_auditToken;
    geo_isolater *_isolation;
    struct list<VLLocalizationDataKey, std::__1::allocator<VLLocalizationDataKey>> _loadingKeys;
    struct list<VLLocalizationDataKey, std::__1::allocator<VLLocalizationDataKey>> _recentFailures;
    struct list<VLLocalizationDataKey, std::__1::allocator<VLLocalizationDataKey>> _recentUnsupportedTiles;
    CDStruct_4c217994 _lastLoadedKey;
    GEOTileData *_lastLoadedData;
    GEOTileKeyMap *_pendingMetadataTiles;
    NSArray *_supportedFormatVersions;
    unsigned int _maxSupportedFormatVersion;
    unsigned int _lastFormatVersion;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <VLLocalizationDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)determineAvailabilityForCoordinate:(const CDStruct_160d0e14 *)arg1 callbackQueue:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)_fetchDataTile:(const struct _GEOTileKey *)arg1 originalKey:(const CDStruct_4c217994 *)arg2 additionalInfo:(const struct _GEOVisualLocalizationTrackAdditionalInfo *)arg3;
- (id)fileURLForKey:(const CDStruct_4c217994 *)arg1 error:(id *)arg2;
- (void)_fetchMetadataTile:(const struct _GEOTileKey *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchMetadataForDataKey:(const CDStruct_4c217994 *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchMetadataForCoordinate:(const CDStruct_160d0e14 *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_disburseMetadataTileForKey:(const struct _GEOTileKey *)arg1 tileData:(id)arg2 error:(id)arg3;
- (void)dealloc;
- (void)_commonInitWithTileLoader:(id)arg1 auditToken:(id)arg2 supportedFormatVersions:(id)arg3;
- (id)initWithAuditToken:(id)arg1 supportedFormatVersions:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
