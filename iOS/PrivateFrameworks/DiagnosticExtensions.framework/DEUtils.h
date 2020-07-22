//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DEUtils : NSObject
{
}

+ (id)processErrorResponse:(id)arg1;
+ (id)findEntriesInDirectory:(id)arg1 createdAfter:(id)arg2 matchingPattern:(id)arg3;
+ (void)removeFile:(id)arg1;
+ (id)uniqueDateString;
+ (id)copyPaths:(id)arg1 toDestinationDir:(id)arg2 withZipName:(id)arg3;
+ (id)copyPath:(id)arg1 toDestinationDir:(id)arg2 zipped:(_Bool)arg3;
+ (id)userFileAttributes;
+ (id)createUserOwnedDirectoryAtUrl:(id)arg1;
+ (id)userLibraryDirectoryForApp:(id)arg1;
+ (id)lsDir:(id)arg1;
+ (id)lsDir:(id)arg1 sorted:(_Bool)arg2;
+ (id)findAllfiles:(id)arg1;
+ (id)findAllItems:(id)arg1 includeDirs:(_Bool)arg2;
+ (id)urlByRemovingComponentsBefore:(id)arg1 source:(id)arg2 keepComponent:(_Bool)arg3;
+ (_Bool)copyAllFilesFromDir:(id)arg1 toDir:(id)arg2;
+ (id)copyAndReturn:(id)arg1 toDir:(id)arg2;
+ (_Bool)copyFile:(id)arg1 toDir:(id)arg2;
+ (id)copyItem:(id)arg1 toDestinationDir:(id)arg2 zipped:(_Bool)arg3;
+ (_Bool)copyAllFilesFromDir:(id)arg1 toDir:(id)arg2 keepSourceDir:(_Bool)arg3;
+ (_Bool)isValidDirectory:(id)arg1;
+ (id)dirForTarGz:(id)arg1;
+ (id)tarGzForDirectoryUrl:(id)arg1 validatesUrl:(_Bool)arg2;
+ (id)tarGzForDirectoryUrl:(id)arg1;
+ (void)excludeFromBackup:(id)arg1;
+ (unsigned long long)getDirectorySize:(id)arg1;
+ (unsigned long long)getFileSystemItemSize:(id)arg1;

@end

