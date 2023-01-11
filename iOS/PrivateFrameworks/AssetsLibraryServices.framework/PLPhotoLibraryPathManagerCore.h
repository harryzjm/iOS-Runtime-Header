//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssetsLibraryServices/PLPhotoLibraryPathManager-Protocol.h>

@class NSString, NSURL, PLFileSystemCapabilities;

@interface PLPhotoLibraryPathManagerCore : NSObject <PLPhotoLibraryPathManager>
{
    struct os_unfair_lock_s _folderCreationAndCapabilitiesLock;
    unsigned int _photoDirectoriesExists;
    unsigned int _privateSubDirectoriesExists;
    unsigned int _privateCacheSubDirectoriesExists;
    unsigned int _externalDirectoriesExists;
    unsigned int _persistedAlbumDataDirectoryExists;
    PLFileSystemCapabilities *_capabilities;
    NSURL *_libraryURL;
    NSString *_baseDirectory;
    NSString *_assetUUIDRecoveryMappingPath;
    NSString *_iTunesPhotosDirectory;
    NSString *_legacyModelInterestDatabasePath;
    NSString *_legacyMemoriesRelatedSnapshotDirectory;
}

+ (id)basenameForSpatialOverCaptureFromOriginalBasename:(id)arg1;
+ (void)_persistSystemPhotoLibraryPath:(id)arg1;
+ (void)recordPrevSystemLibraryPath:(id)arg1;
+ (_Bool)isSystemLibraryURLDefined;
+ (_Bool)setSystemLibraryURL:(id)arg1 options:(unsigned short)arg2 error:(id *)arg3;
+ (id)systemLibraryURLIfResolvable;
+ (id)systemLibraryURL;
+ (id)_constructLegacySystemPhotoLibraryURLFromUnresolvableBookmark:(id)arg1;
+ (id)_legacySystemLibraryPath;
+ (id)_legacySystemLibraryBookmarkData;
+ (void)_updateSystemLibraryURLWithOldValue:(id)arg1;
+ (id)systemLibraryBaseDirectory;
+ (_Bool)isSupportedFileSystemAtURL:(id)arg1;
+ (_Bool)isSystemPhotoLibraryURL:(id)arg1;
+ (id)systemLibraryPathManager;
+ (void)listenForSystemPhotoLibraryURLChanges;
+ (id)libraryURLFromDatabaseURL:(id)arg1;
+ (_Bool)setTimeMachineExclusionAttribute:(_Bool)arg1 url:(id)arg2 error:(id *)arg3;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *legacyMemoriesRelatedSnapshotDirectory; // @synthesize legacyMemoriesRelatedSnapshotDirectory=_legacyMemoriesRelatedSnapshotDirectory;
@property(retain, nonatomic) NSString *legacyModelInterestDatabasePath; // @synthesize legacyModelInterestDatabasePath=_legacyModelInterestDatabasePath;
@property(retain, nonatomic) NSString *iTunesPhotosDirectory; // @synthesize iTunesPhotosDirectory=_iTunesPhotosDirectory;
@property(copy) NSString *assetUUIDRecoveryMappingPath; // @synthesize assetUUIDRecoveryMappingPath=_assetUUIDRecoveryMappingPath;
@property(copy) NSString *baseDirectory; // @synthesize baseDirectory=_baseDirectory;
@property(copy) NSURL *libraryURL; // @synthesize libraryURL=_libraryURL;
- (id)pathsGroupedByAssetBasePathFromFilePaths:(id)arg1 populateInvalidAdjustmentPaths:(id)arg2;
- (id)assetBaseFilenameForAdjustmentFilePath:(id)arg1;
- (id)photoMetadataDirectoryForMediaInMainDirectory:(id)arg1;
- (id)persistedAlbumDataDirectoryCreateIfNeeded:(_Bool)arg1 error:(id *)arg2;
- (id)iTunesSyncedFaceDataDirectory;
- (id)iTunesSyncedFaceAlbumThumbnailsDirectory;
- (id)iTunesSyncedAssetsDirectory;
- (id)iTunesSyncedAssetSmallThumbnailsDirectory;
- (id)iTunesSyncedAssetMetadataThumbnailsDirectory;
- (id)iTunesPhotosSyncMetadataFilePath;
- (id)iTunesPhotosSyncCurrentLibraryUUIDPath;
- (id)iTunesPhotosLastSyncMetadataFilePath;
- (id)modelRestorePostProcessingCompleteTokenPath;
- (id)cloudRestoreCompleteTokenPath;
- (id)cloudRestoreBackgroundPhaseInProgressTokenPath;
- (id)cloudRestoreForegroundPhaseCompleteTokenPath;
- (id)pathToAssetAlbumOrderStructure;
- (id)assetAbbreviatedMetadataDirectoryForDirectory:(id)arg1 type:(unsigned char)arg2;
- (void)setDataProtectionComplete:(_Bool)arg1;
- (_Bool)isDataProtectionComplete;
- (id)_dataProtectionIndicatorFilePath;
- (void)obtainAccessAndWaitWithFileWithIdentifier:(id)arg1 mode:(unsigned char)arg2 toURLWithHandler:(CDUnknownBlockType)arg3;
- (void)setExtendedAttributesWithIdentifier:(id)arg1 andURL:(id)arg2;
- (void)setExtendedAttributesWithIdentifier:(id)arg1;
- (id)readOnlyUrlWithIdentifier:(id)arg1;
- (id)temporaryDragAndDropDirectoryCreateIfNeeded:(_Bool)arg1 error:(id *)arg2;
- (id)temporaryFileBackedDebugDirectoryCreateIfNeeded:(_Bool)arg1 error:(id *)arg2;
- (id)knownDBPaths;
- (id)syncInfoPath;
- (id)pathToAssetsToAlbumsMapping;
- (id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 createIfNeeded:(_Bool)arg4 error:(id *)arg5;
- (id)externalDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(_Bool)arg2 error:(id *)arg3;
- (id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)externalDirectoryWithSubType:(unsigned char)arg1;
- (id)privateCacheDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(_Bool)arg2 error:(id *)arg3;
- (id)privateCacheDirectoryWithSubType:(unsigned char)arg1;
- (id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 createIfNeeded:(_Bool)arg4 error:(id *)arg5;
- (id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 createIfNeeded:(_Bool)arg3 error:(id *)arg4;
- (id)privateDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(_Bool)arg2 error:(id *)arg3;
- (id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)privateDirectoryWithSubType:(unsigned char)arg1;
- (id)pathsForExternalWriters;
- (_Bool)createPathsForNewLibrariesWithError:(id *)arg1;
- (id)pathsForPermissionCheck;
- (id)pathsForClientAccess:(id)arg1;
- (id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 createIfNeeded:(_Bool)arg4 error:(id *)arg5;
- (id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 createIfNeeded:(_Bool)arg3 error:(id *)arg4;
- (id)photoDirectoryWithType:(unsigned char)arg1 createIfNeeded:(_Bool)arg2 error:(id *)arg3;
- (id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)photoDirectoryWithType:(unsigned char)arg1 additionalPathComponents:(id)arg2;
- (id)photoDirectoryWithType:(unsigned char)arg1;
- (id)photosAsideDatabasePath;
- (id)photosCPLDatabasePath;
- (id)photosDatabasePath;
- (id)baseDirectoryForBundleScope:(unsigned char)arg1;
- (id)convertPhotoLibraryPathType:(unsigned char)arg1;
- (id)privateDirectoryWithBundleIdentifier:(id)arg1 createIfNeeded:(_Bool)arg2;
- (id)basePrivateDirectoryPath;
- (_Bool)createDirectoryOnceWithPath:(id)arg1 mask:(unsigned char)arg2 type:(unsigned char)arg3 error:(id *)arg4;
- (_Bool)updateTimeMachineExclusionAttributeForExcludePath:(id)arg1 error:(id *)arg2;
- (void)externalDirectoryCreationMaskResetWithSubType:(unsigned char)arg1;
- (void)privateCacheDirectoryCreationMaskResetWithSubType:(unsigned char)arg1;
- (void)privateDirectoryCreationMaskResetWithSubType:(unsigned char)arg1;
- (void)photoDirectoryCreationMaskResetWithType:(unsigned char)arg1;
- (void)postInit;
@property(readonly, nonatomic) PLFileSystemCapabilities *capabilities; // @synthesize capabilities=_capabilities;
- (id)initWithLibraryURL:(id)arg1;
- (id)initWithBaseDirectory:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
