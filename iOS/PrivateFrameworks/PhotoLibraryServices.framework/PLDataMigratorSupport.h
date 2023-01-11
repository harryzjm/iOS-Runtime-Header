//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PLPhotoLibraryPathManager;

@interface PLDataMigratorSupport : NSObject
{
    PLPhotoLibraryPathManager *_pathManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PLPhotoLibraryPathManager *pathManager; // @synthesize pathManager=_pathManager;
- (void)removeLegacyMetadataFiles;
- (void)removeAsidePhotosDatabase;
- (void)removeInternalMemoriesRelatedSnapshotDirectory;
- (void)removeModelInterestDatabase;
- (void)recordDataMigrationInfo:(id)arg1;
- (id)initWithPathManager:(id)arg1;

@end
