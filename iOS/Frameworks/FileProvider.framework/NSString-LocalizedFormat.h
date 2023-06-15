//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (LocalizedFormat)
+ (id)fp_coordinatorReadingOptions:(unsigned long long)arg1;
+ (id)fp_hashForToken:(id)arg1;
+ (struct __CFStringTokenizer *)fp_wordTokenizer;
+ (id)fp_representableHFSFileNameWithBase:(id)arg1 suffix:(id)arg2 extension:(id)arg3 makeDotFile:(_Bool)arg4;
+ (unsigned long long)fp_maximumBounceLevel;
+ (id)fp_commonParentPathForItemURLs:(id)arg1;
+ (id)fp_pathWithFileSystemRepresentation:(const char *)arg1;
+ (id)_fpd_pathWithFileSystemRepresentation:(const char *)arg1;
+ (id)fp_fromParsedDiskIdentifier:(long long)arg1;
+ (id)fp_providerDomainIDFromProviderID:(id)arg1 domainIdentifier:(id)arg2;
+ (id)fpfs_initWithFSEventsFlags:(unsigned int)arg1;
+ (id)fp_defaultProviderDomainID;
+ (void)setFp_defaultProviderDomainID:(id)arg1;
- (id)fp_formatStringWithValues:(id)arg1 error:(id *)arg2;
- (id)fp_localizedFormatWithKeys:(id)arg1 fromDictionary:(id)arg2 error:(id *)arg3;
- (_Bool)fp_usesDSCopyEngine;
- (id)fp_relativePathWithRealpath:(id)arg1;
- (id)fp_valueForKeyPath:(id)arg1;
- (_Bool)fp_splitKeyPathInProperty:(id *)arg1 remainder:(id *)arg2;
- (_Bool)fp_isCJKLanguageIdentifier;
- (void)fp_enumerateTokensInRange:(struct _NSRange)arg1 tokenizer:(struct __CFStringTokenizer *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)fp_stringByDeletingPathExtension;
- (id)fp_pathExtension;
- (id)fp_representableHFSFileNameWithNumber:(id)arg1 addedExtension:(id)arg2 makeDotFile:(_Bool)arg3;
- (id)fp_representableHFSFileNameWithNumber:(id)arg1 addedExtension:(id)arg2 makeDotFile:(_Bool)arg3 isDir:(_Bool)arg4;
- (id)fp_representableHFSFileNameWithSuffix:(id)arg1 addedExtension:(id)arg2 makeDotFile:(_Bool)arg3 isDir:(_Bool)arg4;
- (const char *)fp_fileSystemRepresentation;
- (id)fp_bouncedNameWithIndex:(long long)arg1;
- (id)fp_bouncedNameWithIndex:(long long)arg1 isDir:(_Bool)arg2;
@property(readonly, nonatomic) NSString *fp_obfuscatedProviderDomainID;
- (id)fp_obfuscatedPath;
- (id)fp_alwaysObfuscatedPath;
- (id)fp_prettyPath;
- (id)fp_prettyPathWithObfuscation:(_Bool)arg1;
- (id)fp_alwaysObfuscatedExtendedAttributeName;
- (id)fp_obfuscatedExtendedAttributeName;
- (id)fp_alwaysObfuscatedDotSeparatedComponents;
- (id)fp_obfuscatedDotSeparatedComponents;
- (id)fp_alwaysObfuscatedFilename;
- (id)fp_obfuscatedFilename;
- (id)fp_stringByDeletingPathBounceNo:(id *)arg1 andPathExtension:(id *)arg2 isFolder:(_Bool)arg3;
- (id)fp_stringByDeletingPathBounceNo:(id *)arg1 andPathExtension:(id *)arg2;
- (id)fp_filenameFromDisplayNameWithExtension:(id)arg1;
- (id)fp_displayNameFromFilenameWithHiddenPathExtension:(_Bool)arg1 isFolder:(_Bool)arg2;
- (id)fp_libnotifyPerUserNotificationName;
- (id)fp_realpath;
- (_Bool)fp_getParsedDiskIdentifier:(long long *)arg1;
- (_Bool)fp_isiCloudDriveIdentifier;
- (_Bool)fp_isiCloudDriveOrCloudDocsIdentifier;
- (id)fp_fpIdentifier;
- (_Bool)fp_isCiconiaDomain;
- (id)fp_toProviderID;
- (id)fp_toDomainIdentifier;
- (id)_fp_escapedStringForSearchQuery;
@end

