//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MIFileManager : NSObject
{
}

+ (id)defaultManager;
- (id)uniqueInstallIDForBundle:(id)arg1 error:(id *)arg2;
- (_Bool)setUniqueInstallID:(id)arg1 onBundle:(id)arg2 error:(id *)arg3;
- (id)installTypeForBundle:(id)arg1 error:(id *)arg2;
- (_Bool)setInstallType:(id)arg1 onBundle:(id)arg2 error:(id *)arg3;
- (_Bool)bundleAtURLIsPlaceholder:(id)arg1;
- (_Bool)markBundleAsPlaceholder:(id)arg1 withError:(id *)arg2;
- (id)realPathForURL:(id)arg1 ifChildOfURL:(id)arg2;
- (_Bool)_validateSymlink:(id)arg1 withStartingDepth:(unsigned int)arg2 andEndingDepth:(unsigned int *)arg3;
- (id)_realPathForURL:(id)arg1 allowNonExistentPathComponents:(_Bool)arg2;
- (id)_realPathWhatExistsInPath:(id)arg1;
- (_Bool)captureStoreDataFromDirectory:(id)arg1 toDirectory:(id)arg2 doCopy:(_Bool)arg3 failureIsFatal:(_Bool)arg4 withError:(id *)arg5;
- (_Bool)setPermissionsForURL:(id)arg1 toMode:(unsigned short)arg2 error:(id *)arg3;
- (_Bool)setOwnerOfURL:(id)arg1 toUID:(unsigned int)arg2 gid:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)setDataProtectionClassOfItemAtURL:(id)arg1 toClass:(int)arg2 ifPredicate:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (_Bool)dataProtectionClassOfItemAtURL:(id)arg1 class:(int *)arg2 error:(id *)arg3;
- (_Bool)itemDoesNotExistAtURL:(id)arg1;
- (_Bool)itemExistsAtURL:(id)arg1;
- (_Bool)itemExistsAtURL:(id)arg1 error:(id *)arg2;
- (id)destinationOfSymbolicLinkAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)createSymbolicLinkAtURL:(id)arg1 withDestinationURL:(id)arg2 error:(id *)arg3;
- (id)urlsForItemsInDirectoryAtURL:(id)arg1 ignoringSymlinks:(_Bool)arg2 error:(id *)arg3;
- (id)enumerateURLsForItemsInDirectoryAtURL:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)verifySymlinksDoNotEscapeURL:(id)arg1 error:(id *)arg2;
- (_Bool)standardizeOwnershipAtURL:(id)arg1 toUID:(unsigned int)arg2 GID:(unsigned int)arg3 removeACLs:(_Bool)arg4 setProtectionClass:(_Bool)arg5 foundSymlink:(_Bool *)arg6 error:(id *)arg7;
- (_Bool)_removeACLAtPath:(const char *)arg1 isDir:(_Bool)arg2 error:(id *)arg3;
- (_Bool)traverseDirectory:(id)arg1 error:(id *)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)createTemporaryDirectoryInDirectoryURL:(id)arg1 error:(id *)arg2;
- (_Bool)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)moveItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)copyItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 alwaysClone:(_Bool)arg3 error:(id *)arg4;
- (_Bool)_moveItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(_Bool)arg3 error:(id *)arg4;
- (_Bool)_copyItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(_Bool)arg3 alwaysClone:(_Bool)arg4 error:(id *)arg5;
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 error:(id *)arg4;
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 class:(int)arg4 error:(id *)arg5;
- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;

@end

