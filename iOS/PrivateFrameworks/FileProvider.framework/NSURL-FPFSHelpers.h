//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSPersonNameComponents, NSString;

@interface NSURL (FPFSHelpers)
+ (id)fp_uncachedContainerURLForSecurityApplicationGroupIdentifier:(id)arg1;
+ (id)fp_uniqueTempFolderWithError:(id *)arg1;
+ (id)fp_supportDirectory;
+ (id)fp_cloudStorageDirectory;
+ (id)fp_tempDirectory;
+ (id)fp_homeDirectoryForUserID:(unsigned int)arg1;
+ (id)fp_personaSharedDirectoryPathForUserID:(unsigned int)arg1;
+ (id)fp_homeDirectoryPathForUserID:(unsigned int)arg1;
+ (id)fp_homeDirectory;
+ (id)fp_personaSharedDirectory;
+ (void)fp_createEmptyTempPackageWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)fp_createEmptyTempFileWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_fp_createInTempDirectoryWithName:(id)arg1 creationBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fp_physicalURL;
- (id)fp_withReadWriteAccess:(CDUnknownBlockType)arg1;
- (_Bool)fp_deleteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)fp_deleteAllowingCoordination:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fp_coordinatedDeleteWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)fp_createSubFolder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)fp_renameWithNewName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)fp_renameWithNewName:(id)arg1 allowCoordination:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)fp_trashUnderFolder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)fp_trashUnderFolder:(id)arg1 allowCoordination:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)fp_reparentUnderFolder:(id)arg1 allowBouncing:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)fp_reparentUnderFolder:(id)arg1 allowBouncing:(_Bool)arg2 allowCoordination:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)fp_reparentUnderFolder:(id)arg1 withNewName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)fp_reparentUnderFolder:(id)arg1 withNewName:(id)arg2 allowCoordination:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)fp_reparentUnderFolder:(id)arg1 allowCoordination:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)fp_importUnderFolder:(id)arg1 allowCoordination:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)fp_importUnderFolder:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)fp_importUnderFolder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)fp_importUnderFolder:(id)arg1 allowCoordination:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)fp_queued_moveUnderFolder:(id)arg1 withNewName:(id)arg2 coordinationOptions:(unsigned long long)arg3 allowBounce:(_Bool)arg4 allowCoordination:(_Bool)arg5 moveHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (_Bool)fp_moveUnderFolder:(id)arg1 withNewName:(id)arg2 coordinationOptions:(unsigned long long)arg3 allowBounce:(_Bool)arg4 allowCoordination:(_Bool)arg5 moveHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (_Bool)fp_moveUnderFolder:(id)arg1 withNewName:(id)arg2 coordinationOptions:(unsigned long long)arg3 allowBounce:(_Bool)arg4 allowCoordination:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (_Bool)fp_moveUnderFolder:(id)arg1 withNewName:(id)arg2 allowBounce:(_Bool)arg3 allowCoordination:(_Bool)arg4 moveHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (_Bool)fp_moveUnderFolder:(id)arg1 withNewName:(id)arg2 allowBounce:(_Bool)arg3 allowCoordination:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)fp_existingURLOfChildWithName:(id)arg1 isFolder:(_Bool)arg2 notMatchingFileID:(id)arg3 nextAvailableBounceNumber:(id *)arg4 forceFetchingBounceNumber:(_Bool)arg5;
- (unsigned long long)getMaxChildrenCount;
- (id)fp_scanForURLOfChildWithName:(id)arg1 isFolder:(_Bool)arg2 maxChildrenCount:(unsigned long long)arg3 notMatchingFileID:(id)arg4 nextAvailableBounceNumber:(id *)arg5;
- (id)_fp_lookupURLOfChildWithName:(id)arg1 notMatchingFileID:(id)arg2;
- (id)fp_existingURLOfChildWithName:(id)arg1 isFolder:(_Bool)arg2;
- (CDUnknownBlockType)fp_defaultMoverBlock;
- (id)fp_isDatalessWithError:(id *)arg1;
- (id)fp_volumeUUID;
- (id)fp_bouncedNameWithIndex:(long long)arg1;
- (id)fp_commonDirectDescendantOf:(id)arg1;
- (id)fp_matchesUbiquitousHeuristics;
- (_Bool)fp_matchesFileProviderHeuristics:(unsigned int)arg1;
- (_Bool)fp_isInSyncableRootFast;
- (id)fp_fpfsRootURL;
- (_Bool)fp_matchesAlternateContentsURL:(id)arg1;
- (_Bool)fp_matchesApplicationContainerURL:(id)arg1;
- (_Bool)fp_isAppInboxOrDescendants;
- (_Bool)_fp_partOfAppInboxWithURLComponents:(id)arg1;
- (id)_fp_componentsRelativeToRoot:(id)arg1;
- (_Bool)fp_matchesEDSLocation;
- (_Bool)fp_matchesLiveFilesURL:(id)arg1;
- (_Bool)fp_matchesFPFSURL:(id)arg1;
- (_Bool)fp_matchesCloudDocsURL:(id)arg1;
- (_Bool)fp_isLocationOrInLocation:(id)arg1 relativeTo:(id)arg2;
- (_Bool)fp_matchesFileProviderURL:(id)arg1;
- (id)fp_moveToTempFolderWithFilename:(id)arg1 error:(id *)arg2;
- (id)fp_directorySizeWithError:(id *)arg1;
- (_Bool)fp_hasThumbnailOnImmutableDocument;
- (_Bool)fp_associateThumbnailToVersionAtURL:(id)arg1 thumbnailMetadata:(id)arg2 error:(id *)arg3;
- (_Bool)fp_associateThumbnailFromDocumentAtURL:(id)arg1 error:(id *)arg2;
- (void)fp_attachSecurityScopeFromURL:(id)arg1;
- (id)fp_addDocumentTrackingWithError:(id *)arg1;
- (_Bool)fp_checkSandboxFileMetadataRead;
- (void)fp_makeWritableAndRemoveNonExportableAttributes;
- (_Bool)fp_makeWritableOnFD:(int)arg1 error:(id *)arg2;
- (_Bool)fp_makeWritableWithError:(id *)arg1;
- (_Bool)fp_removeACLWithError:(id *)arg1;
- (_Bool)fp_removeFileProviderXattrsWithError:(id *)arg1;
- (void)fp_hideExtension:(_Bool)arg1;
- (_Bool)fp_isPackage;
- (_Bool)fp_isFolder;
- (_Bool)fp_isSymlink;
- (id)fp_realpathURL;
- (long long)fp_relationshipToItemAtURL:(id)arg1;
- (id)fp_relativePathWithRealpath:(id)arg1;
- (id)fp_relativePathOf:(id)arg1;
- (id)fp_scopeDescription;
- (id)fp_shortDescription;
- (id)fp_issueSandboxExtensionOfClass:(const char *)arg1 report:(_Bool)arg2 error:(id *)arg3;
- (id)fp_copyToTempFolderWithFilename:(id)arg1 queue:(id)arg2 precomputedItemSize:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)fp_copyToURL:(id)arg1 queue:(id)arg2 precomputedItemSize:(unsigned long long)arg3 replacePlaceholder:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)fp_getSize:(unsigned long long *)arg1 error:(id *)arg2;
- (id)fp_pathComponentDisplayMetadata;
- (id)fp_addTestConflictLoserFromItemAtURL:(id)arg1 lastEditorDeviceName:(id)arg2 lastEditorUserName:(id)arg3 error:(id *)arg4;
@property(readonly, nonatomic) NSPersonNameComponents *fp_lastEditorNameComponents;
@property(readonly, nonatomic) NSString *fp_lastEditorDeviceName;
- (_Bool)shouldBeForwardedToFileProvider;
@end

