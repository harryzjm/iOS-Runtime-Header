//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLAssetsdResourceServiceProtocol-Protocol.h>

@class NSObject, NSString, PLAssetsdCPLResourceDownloader;
@protocol OS_dispatch_queue;

@interface PLAssetsdResourceService <PLAssetsdResourceServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_asyncImageDataQueue;
    PLAssetsdCPLResourceDownloader *_resourceDownloader;
}

- (void).cxx_destruct;
- (void)projectExtensionDataForProjectUuid:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)updateInternalResourcePath:(id)arg1 objectURI:(id)arg2 sandboxExtension:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)consolidateAssets:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)_consolidateResource:(id)arg1 assetUUID:(id)arg2 error:(id *)arg3;
- (void)translatePersistentURL:(id)arg1 withAdjustments:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
- (id)_utiFromPathConstrainedToImageOrMovie:(id)arg1;
- (id)_generateFullsizeRenderForAssetIfNecessary:(id)arg1 format:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_generateFullsizeRenderForAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_requiresFullsizeRenderGenerationForAsset:(id)arg1 format:(id)arg2;
- (void)generateOnDemandResourcesForAsset:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)downloadCloudSharedAsset:(id)arg1 wantedPlaceholderkind:(short)arg2 shouldPrioritize:(_Bool)arg3 shouldExtendTimer:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;
- (void)estimatedFileLengthOfVideo:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)asynchronousAdjustmentDataForAsset:(id)arg1 networkAccessAllowed:(_Bool)arg2 withDataBlob:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (void)getSandboxExtensionForFileSystemBookmark:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getSandboxExtensionsForAssetWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)imageDataForAssetWithObjectURI:(id)arg1 formatID:(unsigned short)arg2 allowPlaceholder:(_Bool)arg3 wantURLOnly:(_Bool)arg4 networkAccessAllowed:(_Bool)arg5 trackCPLDownload:(_Bool)arg6 reply:(CDUnknownBlockType)arg7;
- (void)fileDescriptorForPersistentURL:(id)arg1 withAdjustments:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (void)filePathForPersistentURL:(id)arg1 withAdjustments:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (void)addAssetWithURL:(id)arg1 toAlbum:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)addAssetGroupWithName:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)saveAssetWithDataAndPorts:(id)arg1 imageSurface:(id)arg2 previewImageSurface:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)initWithLibraryServicesManager:(id)arg1 connectionAuthorization:(id)arg2 resourceDownloader:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
