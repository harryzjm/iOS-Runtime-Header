//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLFileUtilities : NSObject
{
}

+ (_Bool)filePathIsSubpathOfSyncRoot:(id)arg1;
+ (id)redactedDescriptionForPath:(id)arg1;
+ (id)redactedDescriptionForFileURL:(id)arg1;
+ (_Bool)URLIsInTrash:(id)arg1;
+ (_Bool)filePath:(id)arg1 isEqualToFilePath:(id)arg2;
+ (_Bool)filePath:(id)arg1 hasPrefix:(id)arg2;
+ (id)realPathForPath:(id)arg1 error:(id *)arg2;
+ (_Bool)fileURL:(id)arg1 isEqualToFileURL:(id)arg2;
+ (_Bool)stripImmutableFlagIfNecessaryFromFileAtPath:(id)arg1;
+ (long long)fileLengthForFilePath:(id)arg1;
+ (id)_mobileOwnerAttributes;
+ (_Bool)changeFileOwnerToMobileAtPath:(id)arg1 error:(id *)arg2;
+ (_Bool)changeFileOwnerToMobileAtPath:(id)arg1 error:(id *)arg2 usingFileManager:(id)arg3;
+ (_Bool)createDirectoryAtPath:(id)arg1 error:(id *)arg2;
+ (_Bool)createDirectoryAtPath:(id)arg1 error:(id *)arg2 usingFileManager:(id)arg3;
+ (_Bool)isFileExistsError:(id)arg1;
+ (_Bool)hasDiskSpaceToCopyFileAtURL:(id)arg1;
+ (_Bool)stripExtendedAttributesFromFileAtURL:(id)arg1 inDomain:(id)arg2 error:(id *)arg3;
+ (_Bool)ingestItemAtURL:(id)arg1 toURL:(id)arg2 type:(long long)arg3 options:(unsigned long long)arg4 capabilities:(id)arg5 error:(id *)arg6;
+ (id)descriptionForFileIngestionType:(long long)arg1;
+ (_Bool)removeDisconnectedSQLiteDatabaseFileWithPath:(id)arg1 error:(id *)arg2;
+ (_Bool)removeFilesInDirectoryAtURL:(id)arg1 withPrefix:(id)arg2 error:(id *)arg3 progress:(CDUnknownBlockType)arg4;
+ (long long)directoryEntryCountAtURL:(id)arg1 error:(id *)arg2;
+ (_Bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (_Bool)cloneFileAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
+ (_Bool)secureMoveItemAtURL:(id)arg1 toURL:(id)arg2 capabilities:(id)arg3 error:(id *)arg4;
+ (id)fileManager;
+ (id)_defaultSystemLibraryPath;
+ (id)embeddedHomeDirectory;
+ (id)systemLibraryURL;
+ (id)defaultSystemLibraryURL;
+ (id)proxyLockCoordinatingFilePathForDatabaseDirectory:(id)arg1 databaseName:(id)arg2;
+ (id)proxyLockFilePathForDatabasePath:(id)arg1;
+ (id)defaultSystemPhotoDCIMDirectory;
+ (id)defaultSystemPhotoDataMiscDirectory;
+ (id)defaultSystemPhotoDataCPLDirectory;
+ (id)defaultSystemPhotoDataDirectory;

@end
