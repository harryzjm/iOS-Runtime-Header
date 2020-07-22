//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPMediaItem, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MPMediaLibraryPlaybackItemMetadata
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _hasValidMediaItemValuesForProperties;
    _Bool _hasEvaluatedOfflineHLS;
    _Bool _isOfflineHLS;
    MPMediaItem *_mediaItem;
    NSDictionary *_mediaItemValuesForProperties;
    NSDictionary *_playbackKeys;
    NSObject<OS_dispatch_queue> *_writeQueue;
}

+ (id)_lowQualityCachedAssetDestinationDirectory;
+ (id)_highQualityCachedAssetDestinationDirectory;
+ (id)streamingPlaybackAssetDestinationFilePathForMediaLibraryPersistentID:(long long)arg1 storeAdamID:(long long)arg2 storeSagaID:(unsigned long long)arg3 assetQuality:(unsigned long long)arg4 assetFlavor:(id)arg5 protectionType:(unsigned long long)arg6 pathExtension:(id)arg7;
@property(retain, nonatomic, getter=_writeQueue) NSObject<OS_dispatch_queue> *writeQueue; // @synthesize writeQueue=_writeQueue;
- (void).cxx_destruct;
- (id)_mediaItemValuesForProperties;
- (id)_onqueue_mediaItemValuesForProperties;
- (void)_invalidateMediaItemProperties;
- (id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(_Bool)arg1 returningAssetQuality:(unsigned long long *)arg2 protectionType:(unsigned long long *)arg3 usesPurchaseBundle:(_Bool *)arg4;
- (void)_persistURI:(id)arg1 persistentContentKey:(id)arg2;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
@property(retain, nonatomic) MPMediaItem *mediaItem;
- (float)volumeNormalization;
- (id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned long long)arg1 assetFlavor:(id)arg2 protectionType:(unsigned long long)arg3 pathExtension:(id)arg4;
- (id)storeUbiquitousIdentifier;
- (unsigned long long)storeSagaID;
- (long long)storeSubscriptionAdamID;
- (long long)storeAdamID;
- (unsigned long long)storeAccountID;
- (_Bool)shouldReportPlayEventsToStore;
- (_Bool)shouldRememberBookmarkTime;
- (_Bool)showComposer;
- (void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setCachedLocalPlaybackAssetFilePath:(id)arg1 protectionType:(unsigned long long)arg2 assetQuality:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (id)protectedContentSupportStorageURL;
- (id)modelGenericObject;
- (long long)mediaLibraryPersistentID;
- (id)localNetworkContentURL;
- (id)iTunesStoreContentDSID;
- (id)iTunesStoreContentID;
- (_Bool)isSubscriptionRequired;
- (_Bool)isExplicitTrack;
- (_Bool)isOfflineHLS;
- (id)hlsOfflinePlaybackKeys;
- (double)expectedDuration;
- (long long)endpointType;
- (_Bool)prefersStoreContentInfo;
- (long long)downloadIdentifier;
- (id)copyrightText;
- (unsigned long long)contentType;
- (id)contentTitle;
- (id)composerName;
- (id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned long long *)arg1 protectionType:(unsigned long long *)arg2 usesPurchaseBundle:(_Bool *)arg3;
- (id)buyParameters;
- (double)bookmarkTime;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (long long)artistStoreAdamID;
- (id)artistName;
- (_Bool)allowsInitiatingPlayWhileDownload;
- (id)albumTitle;
- (long long)albumStoreAdamID;
- (id)albumArtistName;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithMediaItem:(id)arg1;
- (id)init;

@end
