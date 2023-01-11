//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PLPhotoLibraryPathManager;

@interface PLDataMigratorSupport : NSObject
{
    struct os_unfair_lock_s _lock;
    PLPhotoLibraryPathManager *_pathManager;
}

@property(readonly, nonatomic) PLPhotoLibraryPathManager *pathManager; // @synthesize pathManager=_pathManager;
- (void).cxx_destruct;
- (void)_removeLegacyMetadataFiles;
- (void)_removeAsidePhotosDatabase;
- (void)_removeInternalMemoriesRelatedSnapshotDirectory;
- (void)_removeModelInterestDatabase;
- (void)recordDataMigrationInfo:(id)arg1;
- (_Bool)hasCapturedOTARestoreStatus;
- (void)setCapturedOTARestoreStatus;
- (void)writeModelMigratorPostProcessingToken;
- (id)initWithPathManager:(id)arg1;

@end
