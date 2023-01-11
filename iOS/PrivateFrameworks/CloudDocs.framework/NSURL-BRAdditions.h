//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (BRAdditions)
+ (void)br_containerIDsWithExternalReferencesTo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)br_documentURLFromBookmarkableString:(id)arg1 error:(id *)arg2;
+ (void)br_documentURLFromBookmarkableString:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)br_documentURLFromFileObjectID:(id)arg1 error:(id *)arg2;
- (unsigned short)br_capabilityToMoveToURL:(id)arg1 error:(id *)arg2;
- (_Bool)br_isPCSChained;
- (_Bool)br_isSymLink;
- (_Bool)br_wouldBeExcludedFromSync;
- (id)br_typeIdentifierWithError:(id *)arg1;
- (_Bool)br_setAccessTime:(unsigned long long)arg1 error:(id *)arg2;
- (void)br_addPhysicalProperty;
- (_Bool)br_isPromiseURL;
- (id)br_logicalURL;
- (id)br_physicalURL;
- (id)br_documentRecordIDWithError:(id *)arg1;
- (id)br_itemID;
- (id)br_URLByResolvingExternalDocumentReferenceWithError:(id *)arg1;
- (id)br_URLByResolvingInProcessExternalDocumentReferenceWithProperties:(id)arg1;
- (id)br_externalDocumentPropertiesWithError:(id *)arg1;
- (_Bool)br_isExternalDocumentReference;
- (id)br_cloudDocsContainer;
- (_Bool)br_mightBeBRAlias;
- (_Bool)br_isDocumentsContainer;
- (id)br_containerIDIfIsDesktopOrDocumentsURL;
- (id)br_containerIDIfIsDocumentsContainerURL;
- (id)br_containerID;
- (_Bool)br_isInSharedDocsContainer;
- (void)br_isConflictedWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)br_isInCloudDocsPrivateStoragesForRemoteDocumentVersions;
- (_Bool)br_isInCloudDocsPrivateStorages;
- (_Bool)_br_isInSyncedLocationStrictly:(_Bool)arg1;
- (_Bool)br_isStrictlyInSyncedLocation;
- (_Bool)br_isInSyncedLocation;
- (_Bool)br_isInSyncedDocuments;
- (_Bool)br_isInSyncedDesktop;
- (_Bool)br_isInMobileDocuments;
- (_Bool)br_isInTrash;
- (id)br_debugDescription;
- (id)br_pathRelativeToMobileDocuments;
- (id)br_pathRelativeToSyncedRootURL:(id)arg1;
- (id)br_pathRelativeToSyncedRootURLForContainerID:(id)arg1;
- (void)br_containerIDsWithExternalReferencesWithHandler:(CDUnknownBlockType)arg1;
- (void)br_bookmarkableStringForRemoteOpeningAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)br_bookmarkableStringWithEtag:(_Bool)arg1 onlyAllowItemKnowByServer:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)br_bookmarkableStringWithEtag:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)br_cachedBookmarkData;
- (void)br_preCacheBookmarkData:(id)arg1 versionEtag:(id)arg2;
- (_Bool)br_isParentOfURL:(id)arg1;
- (_Bool)br_isParentOfURL:(id)arg1 strictly:(_Bool)arg2;
- (_Bool)br_isInLocalHomeDirectory;
- (id)br_realpathURL;
@end

