//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDResetConfigPostCleanup : HMFObject
{
}

+ (id)logCategory;
+ (id)resetConfigPostCleanupFileLocation;
+ (void)writePostCleanupRecordToRemoveAllCoreDataFilesWithReason:(unsigned long long)arg1;
+ (void)deleteFilesInsideDirectory:(id)arg1 excludingFiles:(id)arg2 shouldSkipDirectories:(_Bool)arg3 usingFileManager:(id)arg4;
+ (void)deleteFilesInsideDirectory:(id)arg1 excludingFiles:(id)arg2 shouldSkipDirectories:(_Bool)arg3;
+ (void)removeFilesAtLocation:(id)arg1 usingFileManager:(id)arg2;
+ (void)removeFilesAtLocation:(id)arg1;
+ (id)sqlFileListToRemove:(id)arg1 fromRootDirectory:(id)arg2;
+ (id)filesToExcludeFromCacheDirectory;
+ (void)performIndividualCleanupTasks:(unsigned long long)arg1 onRootDirectory:(id)arg2;
+ (void)performResetConfigPostCleanupSteps:(unsigned long long)arg1 dueToReason:(unsigned long long)arg2;
+ (void)performAnyPostCleanupStepsIfNecessary;
+ (void)writePostCleanupRecordWithReason:(unsigned long long)arg1 steps:(unsigned long long)arg2;
+ (id)_readExistingPostCleanupRecord;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

