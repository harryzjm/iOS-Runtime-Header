//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (BRCPathAdditions)
+ (id)br_currentHomeDir;
+ (id)_br_containerPathForDataSeparatedPersona;
+ (id)br_corruptedDBInfoPath;
+ (id)br_personaGroupDir;
+ (id)br_currentSupportDir;
+ (id)br_supportDirForPersona:(id)arg1 dataSeparated:(_Bool)arg2;
+ (id)br_currentPersonaIDWithIsDataSeparated:(_Bool *)arg1;
+ (id)br_pathForDirectory:(unsigned long long)arg1;
+ (id)br_representableHFSFileNameWithBase:(id)arg1 suffix:(id)arg2 extension:(id)arg3 makeDotFile:(_Bool)arg4;
+ (id)br_emptyFilenameAlternativeName;
+ (id)br_pathWithDeviceID:(int)arg1 fileID:(unsigned long long)arg2;
+ (id)br_pathWithFileSystemRepresentation:(const char *)arg1;
- (id)br_pathRelativeToDirectory:(unsigned long long)arg1;
- (_Bool)br_isSideFaultName;
- (_Bool)br_isEqualToStringForHFS:(id)arg1 isCaseSensitive:(_Bool)arg2;
- (long long)br_compareToStringForHFS:(id)arg1 isCaseSensitive:(_Bool)arg2;
- (id)br_representableDirectoryName;
- (id)br_sideFaultName;
- (id)_br_nameWithAddedExtension:(id)arg1 makeDotFile:(_Bool)arg2;
- (id)br_sideFaultPath;
- (id)br_representableHFSFileNameWithNumber:(id)arg1 addedExtension:(id)arg2 makeDotFile:(_Bool)arg3;
- (id)brc_representableHFSFileNameWithSuffix:(id)arg1 addedExtension:(id)arg2 makeDotFile:(_Bool)arg3;
- (_Bool)br_nameIsRepresentableOnHFS;
- (id)br_realpath;
- (id)br_realpathKeepingLastSymlink;
- (const char *)br_fileSystemRepresentation;
- (_Bool)br_isAbsolutePath;
- (id)br_pathRelativeToPath:(id)arg1;
- (id)removingROSPPrefix;
- (id)br_pathRelativeToPackageRoot;
- (id)br_pathOfPackageRoot;
- (_Bool)br_isPackageRoot;
- (_Bool)br_isInPackage;
- (_Bool)br_isExcludedWithMaximumDepth:(unsigned int)arg1;
- (_Bool)br_isExcludedButPreservedAtLogOutWithFilenames:(id)arg1 extensions:(id)arg2;
- (_Bool)br_isDocumentTooLargeForUpload:(_Bool)arg1 maxUploadDocumentSize:(long long)arg2;
- (id)br_displayFilenameWithExtensionHidden:(_Bool)arg1;
- (id)brc_stringByDeletingPathExtension;
- (id)br_pathExtension;
- (id)br_decodeIndexStringToIndexSet;
- (id)br_libnotifyPerUserNotificationName;
- (id)br_stringByBackslashEscapingCharactersInString:(id)arg1;
- (id)br_stringByDeletingPathBounceNo:(unsigned long long *)arg1;
- (id)br_stringByDeletingPathBounceNo:(unsigned long long *)arg1 andPathExtension:(id *)arg2;
@end

