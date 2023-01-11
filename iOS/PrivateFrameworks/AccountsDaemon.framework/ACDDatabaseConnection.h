//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSManagedObjectContext, NSNumber, NSPersistentStoreCoordinator;
@protocol ACDDatabaseConnectionDelegate, NSObject;

__attribute__((visibility("hidden")))
@interface ACDDatabaseConnection : NSObject
{
    id <NSObject> _managedObjectContextDidSaveObserver;
    NSCache *_cache;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectContext *_managedObjectContext;
    id <ACDDatabaseConnectionDelegate> _delegate;
}

+ (id)new;
- (void).cxx_destruct;
@property(nonatomic) __weak id <ACDDatabaseConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
- (void)_delegate_databaseConnectionEncounteredUnrecoverableError:(id)arg1;
- (void)_endObservingManagedObjectContextDidSaveNotifications;
- (void)_managedObjectContextDidSave:(id)arg1;
- (void)_beginObservingManagedObjectContextDidSaveNotifications;
- (id)_managedObjectModificationDescription:(id)arg1;
- (id)_managedObjectContextModificationDescription;
- (void)_traceDatabaseEvents;
- (void)_handleManagedObjectContextError:(id)arg1;
- (void)_setupManagedObjectContextWithPersistentStoreCoodinator:(id)arg1;
- (void)rollback;
- (_Bool)saveWithError:(id *)arg1 rollbackOnFailure:(_Bool)arg2;
- (_Bool)saveWithError:(id *)arg1;
- (id)managedObjectIDForURI:(id)arg1;
- (void)setAccountPropertyWithKey:(id)arg1 value:(id)arg2 owner:(id)arg3;
- (void)deleteAccountPropertyWithKey:(id)arg1 owner:(id)arg2;
- (void)deleteObject:(id)arg1;
- (id)insertNewObjectForEntityForName:(id)arg1;
- (id)_accountPropertyWithKey:(id)arg1 owner:(id)arg2;
- (unsigned long long)countOfEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (id)existingObjectWithURI:(id)arg1;
- (id)objectForObjectURI:(id)arg1;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3 prefetchKeypaths:(id)arg4;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (id)fetchObjectsForEntityNamed:(id)arg1;
@property(retain, nonatomic) NSNumber *keychainVersion;
@property(retain, nonatomic) NSNumber *version;
- (id)_persistentStore;
- (id)_managedObjectModel;
- (void)dealloc;
- (id)initWithPersistentStoreCoordinator:(id)arg1;
- (id)init;

@end
