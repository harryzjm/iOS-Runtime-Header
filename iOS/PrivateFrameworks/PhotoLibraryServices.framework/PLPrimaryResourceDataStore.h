//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLResourceDataStore-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, PAImageConversionServiceClient, PAVideoConversionServiceClient, PLCloudPhotoLibraryManager, PLPhotoLibraryPathManager, PLPrimaryResourceDataStoreKeyHelper;

@interface PLPrimaryResourceDataStore <PLResourceDataStore>
{
    NSMutableDictionary *_makeAvailableProgressByTaskIdentifier;
    struct os_unfair_lock_s _lock;
    PAImageConversionServiceClient *_imageConversionServiceClient;
    PAVideoConversionServiceClient *_videoConversionServiceClient;
    unsigned int _masterThumbRecipeID;
    PLPrimaryResourceDataStoreKeyHelper *_mainScopeKeyHelper;
    NSDictionary *_keyHelperByBundleScope;
}

+ (unsigned int)currentDeviceMasterThumbRecipeID;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (id)supportedRecipes;
+ (unsigned int)storeClassID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *keyHelperByBundleScope; // @synthesize keyHelperByBundleScope=_keyHelperByBundleScope;
@property(retain, nonatomic) PLPrimaryResourceDataStoreKeyHelper *mainScopeKeyHelper; // @synthesize mainScopeKeyHelper=_mainScopeKeyHelper;
@property(nonatomic) unsigned int masterThumbRecipeID; // @synthesize masterThumbRecipeID=_masterThumbRecipeID;
- (void)transitional_reconsiderLocalAvailabilityBasedOnExistingLocationOfCPLResource:(id)arg1 givenFilePath:(id)arg2;
- (void)requestStreamingURLForResource:(id)arg1 asset:(id)arg2 intent:(unsigned long long)arg3 inContext:(id)arg4 clientBundleID:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (_Bool)canStreamResource:(id)arg1;
- (_Bool)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;
- (_Bool)dataStoreSubtypeIsDownloadable:(unsigned long long)arg1;
- (id)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)storeExternalResource:(id)arg1 forAsset:(id)arg2 inContext:(id)arg3 options:(id)arg4 error:(id *)arg5 resultingResource:(id *)arg6;
- (_Bool)canStoreExternalResource:(id)arg1;
- (id)virtualResourcesForAsset:(id)arg1;
- (id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned int)arg2;
- (id)resourceURLForKey:(id)arg1 assetID:(id)arg2;
- (id)resourceDataForKey:(id)arg1 assetID:(id)arg2;
- (id)keyFromKeyStruct:(const void *)arg1;
- (id)descriptionForSubtype:(long long)arg1;
- (id)name;
@property(readonly, getter=_cplManager) PLCloudPhotoLibraryManager *cplManager;
- (void)dealloc;
- (id)initWithPathManager:(id)arg1;
- (id)_masterThumbnailVirtualResourceForAsset:(id)arg1;
- (id)_expectedFilePathForMasterThumbnailForAsset:(id)arg1;
- (id)_makeResourceLocallyAvailable:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_cancelAvailabilityRequestWithTaskIdentifier:(id)arg1;
- (id)_videoConversionServiceClient;
- (id)_imageConversionServiceClient;
- (void)_pruneResource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_downloadCPLResource:(id)arg1 options:(id)arg2 taskDidBeginHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)_isSystemLibraryStore;
- (void)_transitionTaskToInflightWithIdentifier:(id)arg1;
- (_Bool)_taskIsPendingPhotoFinalizationWithIdentifier:(id)arg1;
- (_Bool)_taskIsPendingDownloadWithIdentifier:(id)arg1;
- (id)_newProgressForTaskWithIdentifier:(id)arg1 type:(long long)arg2;
- (id)keyHelperForBundleScope:(unsigned char)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property(readonly) Class superclass;

@end
