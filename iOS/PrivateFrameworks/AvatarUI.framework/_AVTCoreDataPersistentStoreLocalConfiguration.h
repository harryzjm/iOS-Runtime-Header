//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTCoreDataPersistentStoreLocalConfiguration-Protocol.h>

@class AVTCoreEnvironment, NSPersistentStoreCoordinator, NSPersistentStoreDescription, NSString, NSURL;
@protocol AVTUILogger;

@interface _AVTCoreDataPersistentStoreLocalConfiguration : NSObject <AVTCoreDataPersistentStoreLocalConfiguration>
{
    NSPersistentStoreCoordinator *_coordinator;
    NSPersistentStoreDescription *_storeDescription;
    NSURL *_storeLocation;
    NSURL *_folderLocation;
    NSURL *_databaseLocation;
    id <AVTUILogger> _logger;
    AVTCoreEnvironment *_environment;
}

+ (id)databaseLocationForFolderLocation:(id)arg1;
+ (id)sideDatabaseFolderForStoreLocation:(id)arg1;
+ (id)databaseFolderForStoreLocation:(id)arg1;
+ (id)createStoreDescriptionWithDatabaseLocation:(id)arg1 logger:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) AVTCoreEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSURL *databaseLocation; // @synthesize databaseLocation=_databaseLocation;
@property(readonly, nonatomic) NSURL *folderLocation; // @synthesize folderLocation=_folderLocation;
@property(readonly, nonatomic) NSURL *storeLocation; // @synthesize storeLocation=_storeLocation;
@property(readonly, nonatomic) NSPersistentStoreDescription *storeDescription; // @synthesize storeDescription=_storeDescription;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (void)updateBackupInclusionStatusOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)contentExists;
- (_Bool)copyStorageAside:(id *)arg1;
- (_Bool)tearDownAndEraseAllContent:(id *)arg1;
- (id)persistentStoreCoordinator;
- (id)createStoreServerWithError:(id *)arg1;
- (id)createManagedObjectContext;
- (_Bool)setupIfNeeded:(id *)arg1;
- (_Bool)createDatabaseDirectoryIfNeeded:(id *)arg1 usingFileManager:(id)arg2;
- (id)copiedAsideMigratableSource;
- (id)migratableSources;
- (id)initWithStoreLocation:(id)arg1 copiedAside:(_Bool)arg2 environment:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
