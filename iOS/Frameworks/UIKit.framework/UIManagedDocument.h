//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString;

@interface UIManagedDocument
{
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectModel *_managedObjectModel;
    NSDictionary *_documentMetadata;
    struct __mdocFlags {
        unsigned int shouldWriteAdditionalContent:1;
        unsigned int _reserved:31;
    } _mdocFlags;
    NSDictionary *persistentStoreOptions;
    NSString *modelConfiguration;
}

+ (_Bool)isPersistentStoreSynchronizedViaUbiquitousContentWithOptions:(id)arg1;
+ (id)additionalContentPathComponent;
+ (id)persistentStoreName;
+ (void)initialize;
@property(copy, nonatomic) NSString *modelConfiguration; // @synthesize modelConfiguration;
@property(copy, nonatomic) NSDictionary *persistentStoreOptions; // @synthesize persistentStoreOptions;
- (void)revertToContentsOfURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)writeContents:(id)arg1 toURL:(id)arg2 forSaveOperation:(long long)arg3 originalContentsURL:(id)arg4 error:(id *)arg5;
- (_Bool)writeContents:(id)arg1 andAttributes:(id)arg2 safelyToURL:(id)arg3 forSaveOperation:(long long)arg4 error:(id *)arg5;
- (id)contentsForType:(id)arg1 error:(id *)arg2;
- (_Bool)readFromURL:(id)arg1 error:(id *)arg2;
- (_Bool)_writeMetadataToDocumentURL:(id)arg1;
- (id)_readMetadataFromDocumentURL:(id)arg1;
- (void)_handleRelocatingStoreContentDirectoryFromSyncedURL:(id)arg1 toNonSyncedURL:(id)arg2;
- (void)_handleRelocatingStoreContentDirectoryFromNonSyncedURL:(id)arg1 toSyncedURL:(id)arg2;
- (_Bool)writeAdditionalContent:(id)arg1 toURL:(id)arg2 originalContentsURL:(id)arg3 error:(id *)arg4;
- (id)additionalContentForURL:(id)arg1 error:(id *)arg2;
- (_Bool)readAdditionalContentFromURL:(id)arg1 error:(id *)arg2;
- (id)persistentStoreTypeForFileType:(id)arg1;
- (_Bool)configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 modelConfiguration:(id)arg3 storeOptions:(id)arg4 error:(id *)arg5;
@property(readonly, nonatomic) NSManagedObjectModel *managedObjectModel;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
- (void)dealloc;
- (id)initWithFileURL:(id)arg1;

@end

