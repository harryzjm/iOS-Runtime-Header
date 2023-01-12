//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MIFileManager : NSObject
{
}

+ (id)_sanitizeFilePathForVarOrTmpSymlink:(id)arg1;
+ (id)defaultManager;
- (_Bool)secureRenameFromSourceURL:(id)arg1 toDestinationURL:(id)arg2 destinationStatus:(unsigned char)arg3 error:(id *)arg4;
- (id)debugDescriptionForItemAtURL:(id)arg1;
- (id)modificationDateForURL:(id)arg1 error:(id *)arg2;
- (_Bool)setModificationDateToNowForURL:(id)arg1 error:(id *)arg2;
- (unsigned long long)diskUsageForURL:(id)arg1;
- (id)dataForExtendedAttributeNamed:(id)arg1 length:(unsigned long long)arg2 fromFD:(int)arg3 fdLocation:(id)arg4 error:(id *)arg5;
- (id)dataForExtendedAttributeNamed:(id)arg1 length:(unsigned long long)arg2 fromURL:(id)arg3 error:(id *)arg4;
- (id)_dataForExtendedAttributeNamed:(id)arg1 length:(unsigned long long)arg2 onURL:(id)arg3 orFD:(int)arg4 error:(id *)arg5;
- (_Bool)setData:(id)arg1 forExtendedAttributeNamed:(id)arg2 onFD:(int)arg3 fdLocation:(id)arg4 error:(id *)arg5;
- (_Bool)setData:(id)arg1 forExtendedAttributeNamed:(id)arg2 onURL:(id)arg3 error:(id *)arg4;
- (_Bool)_setData:(id)arg1 forExtendedAttributeNamed:(id)arg2 onURL:(id)arg3 orFD:(int)arg4 error:(id *)arg5;
- (id)installTypeFromExtendedAttributeOnBundle:(id)arg1 error:(id *)arg2;
- (_Bool)setInstallType:(id)arg1 inExtendedAttributeOnBundle:(id)arg2 error:(id *)arg3;
- (id)insecureCachedAppIdentifierIfValidatedByFreeProfileForBundle:(id)arg1 error:(id *)arg2;
- (_Bool)setValidatedByFreeProfileAppIdentifier:(id)arg1 insecurelyCachedOnBundle:(id)arg2 error:(id *)arg3;
- (id)insecureCachedAppIdentifierIfAppClipForBundle:(id)arg1 error:(id *)arg2;
- (_Bool)setAppClipAppIdentifier:(id)arg1 insecurelyCachedOnBundle:(id)arg2 error:(id *)arg3;
- (id)_insecureCachedAppIdentifierIfMarkedWithEAFlag:(const char *)arg1 bundleURL:(id)arg2 allowPlaceholders:(_Bool)arg3 error:(id *)arg4;
- (_Bool)_markEAFlag:(const char *)arg1 forAppIdentifier:(id)arg2 insecurelyCachedOnBundle:(id)arg3 error:(id *)arg4;
- (_Bool)clearPlaceholderStatusForBundle:(id)arg1 withError:(id *)arg2;
- (_Bool)bundleAtURLIsPlaceholder:(id)arg1;
- (_Bool)markBundleAsPlaceholder:(id)arg1 withError:(id *)arg2;
- (id)realPathForURL:(id)arg1 ifChildOfURL:(id)arg2;
- (_Bool)_validateSymlink:(id)arg1 withStartingDepth:(unsigned int)arg2 andEndingDepth:(unsigned int *)arg3;
- (id)_realPathForURL:(id)arg1 allowNonExistentPathComponents:(_Bool)arg2;
- (id)realPathForURL:(id)arg1 allowNonExistentPathComponents:(_Bool)arg2 isDirectory:(_Bool)arg3 error:(id *)arg4;
- (id)_realPathWhatExistsInPath:(id)arg1 isDirectory:(_Bool)arg2;
- (_Bool)captureStoreDataFromDirectory:(id)arg1 toDirectory:(id)arg2 doCopy:(_Bool)arg3 failureIsFatal:(_Bool)arg4 withError:(id *)arg5;
- (_Bool)setPermissionsForURL:(id)arg1 toMode:(unsigned short)arg2 error:(id *)arg3;
- (_Bool)setOwnerOfURL:(id)arg1 toUID:(unsigned int)arg2 gid:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)setDataProtectionClassOfItemAtURL:(id)arg1 toClass:(int)arg2 ifPredicate:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (_Bool)dataProtectionClassOfItemAtURL:(id)arg1 class:(int *)arg2 error:(id *)arg3;
- (id)extendedAttributesFromURL:(id)arg1 error:(id *)arg2;
- (id)aclTextFromURL:(id)arg1 error:(id *)arg2;
- (id)upToFirstFourBytesFromURL:(id)arg1 error:(id *)arg2;
- (_Bool)itemIsDirectoryAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)itemIsSymlinkAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)itemIsFileAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)_itemIsType:(unsigned short)arg1 withDescription:(id)arg2 atURL:(id)arg3 error:(id *)arg4;
- (_Bool)itemDoesNotExistOrIsNotDirectoryAtURL:(id)arg1;
- (_Bool)itemDoesNotExistAtURL:(id)arg1;
- (_Bool)itemExistsAtURL:(id)arg1;
- (_Bool)itemExistsAtURL:(id)arg1 error:(id *)arg2;
- (id)destinationOfSymbolicLinkAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)createSymbolicLinkAtURL:(id)arg1 withDestinationURL:(id)arg2 error:(id *)arg3;
- (id)urlsForItemsInDirectoryAtURL:(id)arg1 ignoringSymlinks:(_Bool)arg2 error:(id *)arg3;
- (id)traverseDirectoryAtURL:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)enumerateURLsForItemsInDirectoryAtURL:(id)arg1 ignoreSymlinks:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;
- (_Bool)validateSymlinksInURLDoNotEscapeURL:(id)arg1 error:(id *)arg2;
- (_Bool)standardizeOwnershipAtURL:(id)arg1 toUID:(unsigned int)arg2 GID:(unsigned int)arg3 removeACLs:(_Bool)arg4 setProtectionClass:(_Bool)arg5 foundSymlink:(_Bool *)arg6 error:(id *)arg7;
- (_Bool)stageURL:(id)arg1 toItemName:(id)arg2 inStagingDir:(id)arg3 stagingMode:(int)arg4 settingUID:(unsigned int)arg5 gid:(unsigned int)arg6 hasSymlink:(_Bool *)arg7 error:(id *)arg8;
- (_Bool)_stageURLByCopying:(id)arg1 toItemName:(id)arg2 inStagingDir:(id)arg3 stagingMode:(int)arg4 settingUID:(unsigned int)arg5 gid:(unsigned int)arg6 hasSymlink:(_Bool *)arg7 error:(id *)arg8;
- (_Bool)stageURLByMoving:(id)arg1 toItemName:(id)arg2 inStagingDir:(id)arg3 settingUID:(unsigned int)arg4 gid:(unsigned int)arg5 dataProtectionClass:(int)arg6 hasSymlink:(_Bool *)arg7 error:(id *)arg8;
- (_Bool)_bulkSetPropertiesForPath:(const char *)arg1 existingFD:(int)arg2 UID:(unsigned int)arg3 GID:(unsigned int)arg4 mode:(unsigned short)arg5 flags:(unsigned int)arg6 dataProtectionClass:(int)arg7 removeACL:(_Bool)arg8 error:(id *)arg9;
- (_Bool)bulkSetPropertiesForPath:(const char *)arg1 UID:(unsigned int)arg2 GID:(unsigned int)arg3 mode:(unsigned short)arg4 flags:(unsigned int)arg5 dataProtectionClass:(int)arg6 removeACL:(_Bool)arg7 error:(id *)arg8;
- (_Bool)bulkSetPropertiesForPath:(const char *)arg1 withOpenFD:(int)arg2 UID:(unsigned int)arg3 GID:(unsigned int)arg4 mode:(unsigned short)arg5 flags:(unsigned int)arg6 dataProtectionClass:(int)arg7 removeACL:(_Bool)arg8 error:(id *)arg9;
- (_Bool)_removeACLAtPath:(const char *)arg1 isDir:(_Bool)arg2 error:(id *)arg3;
- (id)createTemporaryDirectoryInDirectoryURL:(id)arg1 error:(id *)arg2;
- (_Bool)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)copyItemIgnoringErrorsAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)moveItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)copyItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 alwaysClone:(_Bool)arg3 error:(id *)arg4;
- (_Bool)_moveItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(_Bool)arg3 error:(id *)arg4;
- (_Bool)_copyItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(_Bool)arg3 alwaysClone:(_Bool)arg4 ignoreErrors:(_Bool)arg5 error:(id *)arg6;
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 error:(id *)arg4;
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 class:(int)arg4 error:(id *)arg5;
- (_Bool)removeItemAtURL:(id)arg1 keepParent:(_Bool)arg2 error:(id *)arg3;
- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;

@end

