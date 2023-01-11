//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLAssetsdDebugServiceProtocol-Protocol.h>

@class NSString, PLAssetsdCPLResourceDownloader, PLPhotoLibraryBundleController;

@interface PLAssetsdDebugService <PLAssetsdDebugServiceProtocol>
{
    PLAssetsdCPLResourceDownloader *_resourceDownloader;
    PLPhotoLibraryBundleController *_bundleController;
}

- (void).cxx_destruct;
- (void)updateSiriVocabulary;
- (void)coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2 reply:(CDUnknownBlockType)arg3;
- (void)snapshotJournalsForPayloadClassIDs:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)privateDownloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned long long)arg2 highPriority:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cleanupEmptyHighlightsWithReply:(CDUnknownBlockType)arg1;
- (void)updateHighlightTitlesWithReply:(CDUnknownBlockType)arg1;
- (void)processUnprocessedMomentLocationsWithReply:(CDUnknownBlockType)arg1;
- (void)processRecentHighlightsWithReply:(CDUnknownBlockType)arg1;
- (void)prefetchResourcesWithMode:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)prefetchResourcesForHighlights:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)prefetchResourcesForMemories:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)pruneAssetsWithUUID:(id)arg1 resourceTypes:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)debugSidecarURLsWithObjectURI:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)revertToOriginalWithObjectURI:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)enqueuePrefetch;
- (void)clearPrefetchState;
- (void)getCPLStateWithReply:(CDUnknownBlockType)arg1;
- (void)getXPCTransactionStatusWithReply:(CDUnknownBlockType)arg1;
- (void)rebuildAllThumbnails;
- (void)resetDupesAnalysis;
- (void)rebuildCloudFeedWithReply:(CDUnknownBlockType)arg1;
- (void)rebuildSearchIndexWithReply:(CDUnknownBlockType)arg1;
- (void)setSearchIndexPaused:(_Bool)arg1 reason:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)dropSearchIndexWithReply:(CDUnknownBlockType)arg1;
- (void)deferredLogDumpWithFormat:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)dumpMomentsMetadataToPath:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)dumpMetadataForMomentsToPath:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rebuildHighlightsDeletingExistingHighlights:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rebuildMomentsDeletingExistingMoments:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)momentGenerationStatusWithReply:(CDUnknownBlockType)arg1;
- (void)recoverAssetsInInconsistentCloudState;
- (void)identifyAssetsWithInconsistentCloudState;
- (void)asynchronousUnloadImageFilesForAssetWithObjectURI:(id)arg1 minimumFormat:(unsigned short)arg2 reply:(CDUnknownBlockType)arg3;
- (void)statusWithReply:(CDUnknownBlockType)arg1;
- (id)initWithLibraryServicesManager:(id)arg1 resourceDownloader:(id)arg2 bundleController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
