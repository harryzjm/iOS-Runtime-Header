//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoFoundation/NSCopying-Protocol.h>
#import <PhotoFoundation/PFFile-Protocol.h>

@class NSDate, NSString, NSURL;

@interface PFFile : NSObject <PFFile, NSCopying>
{
    NSURL *_url;
    NSString *_uti;
    unsigned long long _pathHash;
    struct stat *_fileInfo;
    NSString *_cachedPath;
}

+ (id)createEmptyTempFileInBaseDirectory:(id)arg1 withSubDirectoryNamed:(id)arg2 filenamePrefix:(id)arg3 pathExtension:(id)arg4 error:(id *)arg5;
+ (id)createEmptyTempFileInDirectoryNamed:(id)arg1 filenamePrefix:(id)arg2 pathExtension:(id)arg3 error:(id *)arg4;
+ (_Bool)createEmptyFileAtURL:(id)arg1;
+ (id)pathByTidyingExtensionInPath:(id)arg1 withExtension:(id)arg2;
+ (void)reenableOSCachingForFileDescriptor:(int)arg1;
+ (int)disableOSCachingForURL:(id)arg1;
+ (id)fileWithPath:(id)arg1;
+ (id)fileWithURL:(id)arg1;
+ (id)assetType:(id)arg1;
+ (long long)sizeOf:(id)arg1 includeSubFolders:(_Bool)arg2;
+ (id)realPathFromFileAlias:(id)arg1;
+ (id)fileAttributesAtPath:(id)arg1 traverseLink:(_Bool)arg2;
+ (id)fileAttributesAtPath:(id)arg1 traverseLink:(_Bool)arg2 fixCreationDate:(_Bool)arg3;
+ (id)uniqueFileSystemNameForName:(id)arg1 inDirectory:(id)arg2;
+ (id)resourceIdentifierForURL:(id)arg1;
+ (_Bool)directoryExists:(id)arg1;
+ (_Bool)fileExists:(id)arg1;
+ (_Bool)pathExists:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long pathHash; // @synthesize pathHash=_pathHash;
@property(readonly) NSURL *url; // @synthesize url=_url;
- (id)newFileIOStream;
- (id)newFileIStream;
- (void)setLabelNumber:(id)arg1;
- (id)labelNumber;
- (id)volume;
- (id)directoryEnumerator;
- (_Bool)isLockedInFinder;
- (id)unlockInFinder;
- (id)lockInFinder;
- (id)attributes;
- (id)creationDate;
- (id)modificationDate;
- (id)extension;
- (id)assetType;
- (long long)folderSize_recursive:(_Bool)arg1;
- (long long)size;
- (unsigned short)posixPermissions;
- (_Bool)pathExists;
- (_Bool)exists;
- (_Bool)isXMPType;
- (_Bool)isFileAlias;
- (_Bool)isInTrash;
- (_Bool)tryLock;
- (void)unlock;
- (void)lock;
@property(readonly) _Bool isDirectory;
@property(readonly) NSString *fileExtension;
@property(readonly) NSDate *fileModificationDate;
@property(readonly) NSDate *fileCreationDate;
@property(readonly) unsigned long long fileSize;
@property(readonly) NSString *fileName;
@property(readonly) NSString *path;
@property(readonly) NSString *UTI;
- (void)logFileAccess;
- (_Bool)isFile;
- (_Bool)isSymLink;
- (int)fileType;
- (id)name;
- (id)folderPath;
- (id)fileByResolvingFileAlias;
- (id)newFileByAppendingPathComponent:(id)arg1;
- (id)fileComponent;
- (const char *)fileSystemRepresentation;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToFile:(id)arg1;
- (unsigned long long)hash;
- (const struct stat *)cachedStat;
- (void)uncacheStat;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;

@end
