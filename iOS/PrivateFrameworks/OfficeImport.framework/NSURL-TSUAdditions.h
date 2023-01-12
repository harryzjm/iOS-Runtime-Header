//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (TSUAdditions)
+ (id)tsu_fileURLWithPath:(id)arg1;
+ (id)URLWithPackagePart:(id)arg1;
@property(readonly, getter=tsu_isInTrash) _Bool tsu_inTrash;
- (void)tsu_removeCachedResourceValueForKeys:(id)arg1;
- (id)tsu_fileProviderBookmarkableString;
- (_Bool)tsu_isOnSameVolumeAs:(id)arg1;
- (id)tsu_reachableFileURLByDeletingUnreachablePathComponents;
- (_Bool)tsu_isOnAPFSVolume;
- (_Bool)tsu_isOnForeignVolume;
- (id)tsu_fileSystemTypeName;
- (id)tsu_fileTypeIdentifierHandlingFileCoordinationPromises;
- (_Bool)tsu_setNeedsDocumentIdentifierAndReturnError:(out id *)arg1;
- (_Bool)tsu_shareOwnerName:(out id *)arg1 error:(id *)arg2;
- (id)tsu_shareOwnerName;
- (_Bool)tsu_isDocumentUploaded:(out _Bool *)arg1 error:(id *)arg2;
- (_Bool)tsu_isDocumentUploaded;
- (_Bool)tsu_displayName:(out id *)arg1 error:(id *)arg2;
- (id)tsu_displayName;
- (_Bool)tsu_isShareOwner:(out _Bool *)arg1 error:(id *)arg2;
- (_Bool)tsu_isShareOwner;
- (_Bool)tsu_isShareCollaborator:(out _Bool *)arg1 error:(id *)arg2;
- (_Bool)tsu_isShareCollaborator;
- (_Bool)_isShareRole:(out _Bool *)arg1 role:(id)arg2 error:(id *)arg3;
- (_Bool)tsu_isShared:(out _Bool *)arg1 error:(id *)arg2;
- (_Bool)tsu_isShared;
- (_Bool)tsu_fileSize:(out unsigned long long *)arg1 error:(id *)arg2;
- (unsigned long long)tsu_fileSize;
- (_Bool)tsu_isFileSizeTooLargeForSharing;
- (void)tsu_performSecurityScopedResourceAccessAsynchronouslyUsingBlock:(CDUnknownBlockType)arg1;
- (void)tsu_performSecurityScopedResourceAccessUsingBlock:(CDUnknownBlockType)arg1;
- (id)tsu_documentIdentifier;
- (_Bool)tsu_conformsToAnyUTI:(id)arg1;
- (_Bool)tsu_conformsToUTI:(id)arg1;
@property(readonly, nonatomic) NSString *tsu_UTI;
@property(readonly) NSURL *URL;
- (_Bool)isInternalToPackage;
- (id)initWithPackagePart:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

